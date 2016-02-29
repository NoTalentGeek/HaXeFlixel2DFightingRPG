package;





import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;





class FlxStateMenu extends FlxState{





	private var testFlxSpriteCharacter:FlxSpriteCharacter = null;
	private var testTiledMapMenu:TiledMapMenu = null;





	override public function create():Void{

		super.create();



		testFlxSpriteCharacter = new FlxSpriteCharacter(0, 0);
		testTiledMapMenu = new TiledMapMenu(this, "assets/tiled/Menu/Menu.tmx");
		add(testFlxSpriteCharacter);
		add(testTiledMapMenu.foregroundTileLayerFlxGroup);

	}





	override public function update(_elapsedFloat:Float):Void{

		super.update(_elapsedFloat);

		/*PROTOTYPE.*/
		testTiledMapMenu.ObjectCollideWithLayerBool(testFlxSpriteCharacter);

	}





}
