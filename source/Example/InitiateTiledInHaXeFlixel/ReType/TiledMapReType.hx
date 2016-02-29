package;





import flixel.addons.editors.tiled.TiledImageLayer;
import flixel.addons.editors.tiled.TiledImageTile;
import flixel.addons.editors.tiled.TiledLayer.TiledLayerType;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledObject;
import flixel.addons.editors.tiled.TiledObjectLayer;
import flixel.addons.editors.tiled.TiledTileLayer;
import flixel.addons.editors.tiled.TiledTileSet;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.tile.FlxTilemap;
import haxe.io.Path;





class TiledMapReType extends TiledMap{





    /*Location of the assest of for this specific tile map.*/
    private inline static var MAP_TILESET_DIRECTORY_STRING = "assets/tiled/Test1/";



    /*List of layers available in the tile map.*/
    private var collisionLayerFlxTilemapArray   :Array<FlxTilemap>  = new Array<FlxTilemap>();  /*All objects that collide with the main characters (interactive or non - interactive object).*/
    public  var objectLayerFlxGroup             :FlxGroup           = new FlxGroup();
    public  var imageLayerFlxGroup              :FlxGroup           = new FlxGroup();
    public  var foregroundTileLayerFlxGroup     :FlxGroup           = new FlxGroup();
    public  var backgroundTileLayerFlxGroup     :FlxGroup           = new FlxGroup();           /*All non - interactive objects that share same priotiry as the main character.*/





    /*I think by the way this construcytor loads the tile map it loads based on the layer
        sequence (from top to bottom).
    Or maybe from bottom to top, I am not so sure honestly.*/
    public function new(
        _flxState                   :FlxState,
        _tiledMapDirectoryString    :String
    ){

        super(_tiledMapDirectoryString);
        FlxG.camera.setScrollBoundsRect(0, 0, fullWidth, fullHeight, true);

        /*Load non - collision and non - interactive images in the tiled map.*/
        LoadManyImageVoid();

        /*Within this iteration I am trying to load the Tiled map.
        In this iteration I am trying to initiate only the tile layer.
        So all object layers and image layers is not yet processed.*/
        for(_tiledLayer:TiledLayer in layers){

            if(_tiledLayer.type != TiledLayerType.TILE){ continue; }
            var tileLayerTiledTileLayer:TiledTileLayer = cast _tiledLayer;

            /*The name of tileSet used in this specific layer.*/
            var tileSheetNameString:String = tileLayerTiledTileLayer.properties.get("tileset");
            if(tileSheetNameString == null){

                throw(
                    "tileSet custom properties is not yet set in " + tileLayerTiledTileLayer.name +
                    ". Please go back and add a tileSet custom properties in Tiled map editor."
                );

            }

            var tileSetTiledTileSet:TiledTileSet = null;
            /*tilesets is a vafiable from extended TiledMap class that returns all tile set related
                layer within the .tmx file.
            Within this code below I want to match the tile set with the tile map.*/
            for(_tileSetTiledTileSet:TiledTileSet in tilesets){

                if(_tileSetTiledTileSet.name == tileSheetNameString){

                    tileSetTiledTileSet = _tileSetTiledTileSet;
                    break;

                }

            }

            if(tileSetTiledTileSet == null){

                throw(
                    "Tileset " + tileSheetNameString +
                    " not found. Did you misspell the tilesheet property in " + tileLayerTiledTileLayer.name + "' layer?";
                );

            }

            var imagePath:Path = new Path(tileSetTiledTileSet.imageSource);
            var processedFlxTilemapGraphicAsset:FlxTilemapGraphicAsset =
                MAP_TILESET_DIRECTORY_STRING + imagePath.file + "." + imagePath.ext;

            /*Load the tile set from the array.*/
            var tileMapFlxTilemap = new FlxTilemap();
            tileMapFlxTilemap.loadMapFromArray(
                tileLayerTiledTileLayer.tileArray, width, height,
                processedFlxTilemapGraphicAsset,
                tileSetTiledTileSet.tileWidth,
                tileSetTiledTileSet.tileHeight,
                OFF, tileSetTiledTileSet.firstGID, 1, 1
            );

            LoadManyObjectVoid(_flxState);

            /*Check if the layer has noCollide properties set true or false.
            Tile layer that has no collision is a background tile.*/
            if(tileLayerTiledTileLayer.properties.contains("noCollide")){

                foregroundTileLayerFlxGroup.add(tileMapFlxTilemap);

            }
            else{

                if(collisionLayerFlxTilemapArray == null){

                    collisionLayerFlxTilemapArray = new Array<FlxTilemap>();

                }

                collisionLayerFlxTilemapArray   .push(tileMapFlxTilemap);
                backgroundTileLayerFlxGroup     .add(tileMapFlxTilemap);

            }

        }

    }





    private function LoadLayerImageObjectVoid(_tiledObject:TiledObject){

        /*"ImageCollection" is the name of the tile set so that I need to set it accrodingly.*/
        var tiledTileSet:TiledTileSet = this.getTileSet("ImageCollection");
        /*Get the images directory from the .tmx file.
        CAUTION: This is why I need to work Tiled project within one folder.
        CAUTION: Because everything that is made using Tiled map editor is saved 
            by its relative path.*/
        var tiledImageTile:TiledImageTile = tiledTileSet.getImageSourceByGid(_tiledObject.gid);

        var decorationFlxSprite:FlxSprite = new FlxSprite(
            0, 0,
            MAP_TILESET_DIRECTORY_STRING + tiledImageTile.source
        );

        /*CAUTION: So in here I actually compare the properties of two things.
        CAUTION: The first thing is all properties received from the .tmx file.
        CAUTION: The last thing is all properties gatherd from FlxSprite.\
        CAUTION: In the end we sync all properties from the FlxSprite into all properties that is
            received from the TiledObject (from .tmx file).*/

        /*If the properties of width and height does not match, then activate anti aliasing for
            corresponding sprite.
        These code below is used to sync the properties of the FlxSprite to the .tmx file's
            TiledObject.*/
        if(
            (decorationFlxSprite.height  == _tiledObject.height) ||
            (decorationFlxSprite.width   == _tiledObject.width)
        ){

            /*Sync width and height.*/
            decorationFlxSprite.antialiasing = true;
            decorationFlxSprite.setGraphicSize(_tiledObject.width, _tiledObject.height);

        }
        /*Sync position.*/
        decorationFlxSprite.setPosition(_tiledObject.x, _tiledObject.y - decorationFlxSprite.height);
        /*Sync origin position.*/
        decorationFlxSprite.origin.set(0, decorationFlxSprite.height);
        /*Sync angle.*/
        if(_tiledObject.angle != 0){

            decorationFlxSprite.angle           = _tiledObject.angle;
            decorationFlxSprite.antialiasing    = true;

        }
        /*Sync custom properties, this one is depth.*/
        if(_tiledObject.properties.contains("depthFloat")){

            var depthFloat:Float = Std.parseFloat(_tiledObject.properties.get("depthFloat"));
            decorationFlxSprite.scrollFactor.set(depthFloat,depthFloat);

        }

        foregroundTileLayerFlxGroup.add(decorationFlxSprite);

    }





    private function LoadLayerObjectObjectVoid(
        _flxState           :FlxState,
        _tiledObject        :TiledObject,
        _tiledObjectLayer   :TiledObjectLayer,
        _flxGroup           :FlxObject
    ){

        var xInt:Int = _tiledObject.x;
        var yInt:Int = _tiledObject.y;

        /*CAUTION: Objects in Tiled map editor are aligned bottom - left, while it is
            top - left in flixel.*/
        if(_tiledObject.gid != -1){
            yInt -= _tiledObjectLayer.map.getGidOwner(_tiledObject.gid).tileHeight;
        }

        /*Get the type of all object that I want to initiate in screen.
        So basically the name is not relevant here.*/
        switch(_tiledObject.type.toLowerCase()){

            case "player_start":
                var characterFlxObject = new FlxSprite(xInt, yInt);
                characterFlxObject.makeGraphic(32, 32, 0xffaa1111);
                characterFlxObject.maxVelocity.x = 160;
                characterFlxObject.maxVelocity.y = 400;
                characterFlxObject.acceleration.y = 400;
                characterFlxObject.drag.x = characterFlxObject.maxVelocity.x * 4;
                FlxG.camera.follow(characterFlxObject);
                _flxState.characterFlxObject = characterFlxObject;
                _flxGroup.add(characterFlxObject);
            case "floor":
                var floorFlxObject = new FlxObject(xInt, yInt, _tiledObject.width, _tiledObject.height);
                _flxState.floorFlxObject = floorFlxObject;
            case "coin":
                var tiledTileSet:TiledTileSet = _tiledObjectLayer.map.getGidOwner(_tiledObject.gid);
                var coinFlxSprite = new FlxSprite(xInt, yInt, MAP_TILESET_DIRECTORY_STRING + tiledTileSet.imageSource);
                _flxState.coins.add(coinFlxSprite);
            case "exit":
                var exitFlxSprite = new FlxSprite(xInt, yInt);
                exitFlxSprite.makeGraphic(32, 32, 0xff3f3f3f);
                exitFlxSprite.exists = false;
                _flxState.exitFlxSprite = exitFlxSprite;
                _flxGroup.add(exitFlxSprite);

        }

    }





    public function LoadManyImageVoid(){

        for(_tiledLayer:TiledObjectLayer in layers){

            if(_tiledLayer.type != TiledLayerType.IMAGE){ continue; }

            var tiledImageLayer     :TiledImageLayer    = cast _tiledLayer;
            var flxSprite           :FlxSprite          = new FlxSprite(
                tiledImageLayer.x, tiledImageLayer.y,
                MAP_TILESET_DIRECTORY_STRING + tiledImageLayer.imagePath
            );
            imageLayerFlxGroup.add(flxSprite:FlxSprite);

        } 

    }





    public function LoadManyObjectVoid(_flxState:FlxState){

        for(_tiledLayer:TiledObjectLayer in layers){
 
            if(_tiledLayer.type != TiledLayerType.OBJECT){ continue; }
            var objectLayerTiledObjectLayer:TiledObjectLayer = cast _tiledLayer;

            /*CAUTION: With these codes in mind I need to give specific name for each object layers
                in my Tiled map.
            CAUTION: For example an object layer that contains tile set should be named Object.
            CAUTION: Another example is that object layer that contains images (not tile set) should
                be named Image.
            CAUTION: Which means that I need to specifically put the name of the layer within Tiled
                before it is used in HaXeFlixel game.*/

            /*Object layer that is filled with big image tile set.*/
            if(_tiledLayer.name == "Image"){

                for(_tiledObject in objectLayerTiledObjectLayer.objects){

                    LoadLayerImageObjectVoid(_tiledObject);

                }

            }

            /*Object layer that is filled with tile set.*/
            if(_tiledLayer.name == "Object"){

                for(_tiledObject in objectLayerTiledObjectLayer.objects){

                    LoadLayerObjectObjectVoid(_flxState, _tiledObject, objectLayerTiledObjectLayer, objectLayerFlxGroup);

                }

            }

        }

    }





    /*Add the collision between my object and the collision map.*/
    public function ObjectCollideWithLayerBool(
        _flxObject          :FlxObject,
        ?_notifyFunction    :FlxObject->FlxObject->Void,
        ?_processFunction   :FlxObject->FlxObject->Bool
    ){

        if(collisionLayerFlxTilemapArray == null){ return false; }

        for(_flxTilemap:FlxTilemap in collisionLayerFlxTilemapArray){

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