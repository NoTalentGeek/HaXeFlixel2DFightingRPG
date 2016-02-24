package;





import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;





class FlxStateMenu extends FlxState{





	override public function create():Void{

		super.create();

		var testFlxSpriteCharacter:FlxSpriteCharacter
			= new FlxSpriteCharacter(0, 0);
		add(testFlxSpriteCharacter);

	}





	override public function update(_elapsedFloat:Float):Void{

		super.update(_elapsedFloat);

	}





}
