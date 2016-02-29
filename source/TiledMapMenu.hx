package;





import flixel.addons.editors.tiled.TiledLayer.TiledLayerType;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledTileLayer;
import flixel.addons.editors.tiled.TiledTileSet;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.tile.FlxTilemap;
import haxe.io.Path;





class TiledMapMenu extends TiledMap{





    /*Location of the assest of for this specific tile map.*/
    private inline static var c_MAP_TILESET_DIRECTORY_STRING = "assets/tiled/Menu/Tileset/";



    private     var collisionLayerFlxTilemapArray   :Array<FlxTilemap>  = new Array<FlxTilemap>();
    public      var foregroundTileLayerFlxGroup     :FlxGroup           = new FlxGroup();





    /*I think by the way this construcytor loads the tile map it loads based on the layer
    sequence (from top to bottom).
    Or maybe from bottom to top, I am not so sure honestly.*/
    public function new(
        _flxState:FlxState,
        _tiledDirectoryString:String
    ){

        super(_tiledDirectoryString);
        FlxG.camera.setScrollBoundsRect(0, 0, fullWidth, fullHeight, true);

        /*Within this iteration I am trying to load the Tiled map.
        In this iteration I am trying to initiate only the tile layer.
        So all object layers and image layers is not yet processed.*/
        for(_tiledLayer in layers){

            if(_tiledLayer.type != TiledLayerType.TILE){ continue; }
            var tiledTileLayer:TiledTileLayer = cast _tiledLayer;

            /*The name of tileset used in this specific layer.*/
            var tileSheetNameString:String = tiledTileLayer.properties.get("tileset");
            if(tileSheetNameString == null){

                throw(
                    "tileset custom properties is not yet set in " + tiledTileLayer.name +
                    ". Please go back and add a tileset custom properties in Tiled map editor."
                );

            }

            var tileSetTiledTileSet:TiledTileSet = null;
            /*tilesets is a vafiable from extended TiledMap class that returns all tile set related
                layer within the .tmx file.
            Within this code below I want to match the tile set with the tile map.*/
            for(_tileSetTiledTileSet in tilesets){

                if(_tileSetTiledTileSet.name == tileSheetNameString){

                    tileSetTiledTileSet = _tileSetTiledTileSet;
                    break;

                }

            }

            if(tileSetTiledTileSet == null){

                throw(
                    "Tileset " + tileSheetNameString +
                    " not found. Did you misspell the tileset custom property in " +
                    tiledTileLayer.name + "' layer?"
                );

            }

            var imagePath:Path = new Path(tileSetTiledTileSet.imageSource);
            var processedString:String =
                c_MAP_TILESET_DIRECTORY_STRING + imagePath.file + "." + imagePath.ext;

            /*Load the tile set from the array.*/
            var tileMapFlxTilemap = new FlxTilemap();
            tileMapFlxTilemap.loadMapFromArray(
                tiledTileLayer.tileArray, width, height,
                processedString,
                tileSetTiledTileSet.tileWidth,
                tileSetTiledTileSet.tileHeight,
                OFF, tileSetTiledTileSet.firstGID, 1, 1
            );
            tileMapFlxTilemap.useScaleHack = false;

            if(collisionLayerFlxTilemapArray == null){

                collisionLayerFlxTilemapArray = new Array<FlxTilemap>();

            }

            collisionLayerFlxTilemapArray   .push(tileMapFlxTilemap);
            foregroundTileLayerFlxGroup     .add(tileMapFlxTilemap);

        }

    }





    /*Add the collision between my object and the collision map.*/
    public function ObjectCollideWithLayerBool(
        _flxObject          :FlxObject,
        ?_notifyFunction    :FlxObject->FlxObject->Void,
        ?_processFunction   :FlxObject->FlxObject->Bool
    ){

        if(collisionLayerFlxTilemapArray == null){ return false; }

        for(_flxTilemap in collisionLayerFlxTilemapArray){

            /*CAUTION: Always collide the map with objects, not the other way around. 
            CAUTION: This prevents odd collision errors (collision separation code off by 1 pixel).*/
            if (
                FlxG.overlap(
                    _flxTilemap, _flxObject, _notifyFunction,
                    _processFunction != null ? _processFunction : FlxObject.separate
                )
            ){ return true; }

        }
        return false;

    }

}