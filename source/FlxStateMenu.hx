package;





import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;





class FlxStateMenu extends FlxState{


	private var testFlxSpriteCharacter:FlxSpriteCharacter = null;

	/*PROTOTYPE.*/
	private var tiledLevelTiledMap:TiledMapTiledLevel = null;


	override public function create():Void{

		super.create();

		/*PROTOTYPE.*/
		//tiledLevelTiledMap = new TiledMapTiledLevel("assets/tiled/Map1.tmx", this);
		tiledLevelTiledMap = new TiledMapTiledLevel("assets/tiled/PROTOTYPE/level.tmx", this);
		// Load player objects
		// Add backgrounds
		add(tiledLevelTiledMap.backgroundLayer);
		// Add static images
		//add(tiledLevelTiledMap.imagesLayer);
		// Load player objects
		//add(tiledLevelTiledMap.objectsLayer);
		// Add foreground tiles after adding level objects, so these tiles render on top of player
		add(tiledLevelTiledMap.foregroundTiles);

		testFlxSpriteCharacter = new FlxSpriteCharacter(0, 0);
		add(testFlxSpriteCharacter);

	}





	override public function update(_elapsedFloat:Float):Void{

		super.update(_elapsedFloat);

		/*PROTOTYPE.*/
		tiledLevelTiledMap.collideWithLevel(testFlxSpriteCharacter);

	}





}
