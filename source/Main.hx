package;





import flixel.FlxGame;
import openfl.display.Sprite;





class Main extends Sprite{





	public function new():Void{

		super();
		addChild(new FlxGame(512, 288, FlxStateMenu));

	}





}