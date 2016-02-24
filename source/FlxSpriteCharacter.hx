package;





import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.math.FlxPoint;






typedef ChangeVariableWithDetectionStruct = {

    boolBool:Bool,
    sourceT:Dynamic

}





class FlxSpriteCharacter extends FlxSprite{





    public static function ChangeVariableWithDetectionDynamic<T>(_controlT:T, _sourceT:T):Dynamic{

        var boolBool:Bool = false;
        var sourceT:T = _sourceT;

        if(_controlT != sourceT){

            _controlT = sourceT;
            boolBool = true;

        }

        var structStruct:ChangeVariableWithDetectionStruct = {
            boolBool:boolBool,
            sourceT:sourceT
        };

        if(
            Type.typeof(_sourceT) == TBool  ||
            Type.typeof(_sourceT) == TFloat ||
            Type.typeof(_sourceT) == TInt
        ){ return structStruct; }
        else{ return boolBool; }

    }





    private var agnosticObjectCharacter:AgnosticCharacter = new AgnosticCharacter();
    private var playerPositionFlxPoint:FlxPoint = new FlxPoint();




    public function new(_xPositionFloat:Float, _yPositionFloat:Float):Void{

        super(_xPositionFloat, _yPositionFloat);
        loadGraphic(AssetPaths.spr0001__png ,false, 32, 32);
        SyncAgnosticFlxSpriteCharacter();

    }





    public override function update(_elapsedFloat:Float):Void{

        super.update(_elapsedFloat);
        SyncAgnosticFlxSpriteCharacter();



        if(agnosticObjectCharacter.facingString == "DOWN")          { facing = FlxObject.DOWN; }
        else if(agnosticObjectCharacter.facingString == "LEFT")     { facing = FlxObject.LEFT; }
        else if(agnosticObjectCharacter.facingString == "RIGHT")    { facing = FlxObject.RIGHT; }
        else if(agnosticObjectCharacter.facingString == "UP")       { facing = FlxObject.UP; }

        if(
            agnosticObjectCharacter.downButtonPressedBool   ||
            agnosticObjectCharacter.leftButtonPressedBool   ||
            agnosticObjectCharacter.rightButtonPressedBool  ||
            agnosticObjectCharacter.upButtonPressedBool
        ){

            velocity.set(agnosticObjectCharacter.speedFloat, 0);
            velocity.rotate(FlxPoint.weak(0, 0), agnosticObjectCharacter.moveDegreeFloat);

            trace("WALKING.");

        }
        else{ velocity.set(0, 0); }

    }





    private function SyncAgnosticFlxSpriteCharacter():FlxSpriteCharacter{

        /*Determine which button is pressed.
        This is just for debuggin purpose.
        These if statements are to detect whether there is a change in button pressed
            so that it will only trigger thr trace message once.*/
        if(
            ChangeVariableWithDetectionDynamic(agnosticObjectCharacter.downButtonPressedBool,   FlxG.keys.anyPressed([DOWN, S])).boolBool   == true ||
            ChangeVariableWithDetectionDynamic(agnosticObjectCharacter.leftButtonPressedBool,   FlxG.keys.anyPressed([LEFT, A])).boolBool   == true ||
            ChangeVariableWithDetectionDynamic(agnosticObjectCharacter.rightButtonPressedBool,  FlxG.keys.anyPressed([RIGHT, D])).boolBool  == true ||
            ChangeVariableWithDetectionDynamic(agnosticObjectCharacter.upButtonPressedBool,     FlxG.keys.anyPressed([UP, W])).boolBool     == true
        ){

            agnosticObjectCharacter.downButtonPressedBool   = ChangeVariableWithDetectionDynamic(agnosticObjectCharacter.downButtonPressedBool,     FlxG.keys.anyPressed([DOWN,     S])).sourceT;
            agnosticObjectCharacter.leftButtonPressedBool   = ChangeVariableWithDetectionDynamic(agnosticObjectCharacter.leftButtonPressedBool,     FlxG.keys.anyPressed([LEFT,     A])).sourceT;
            agnosticObjectCharacter.rightButtonPressedBool  = ChangeVariableWithDetectionDynamic(agnosticObjectCharacter.rightButtonPressedBool,    FlxG.keys.anyPressed([RIGHT,    D])).sourceT;
            agnosticObjectCharacter.upButtonPressedBool     = ChangeVariableWithDetectionDynamic(agnosticObjectCharacter.upButtonPressedBool,       FlxG.keys.anyPressed([UP,       W])).sourceT;

            trace(
                "\n" +
                "DOWN   BUTTON: " + agnosticObjectCharacter.downButtonPressedBool   + ".\n" +
                "LEFT   BUTTON: " + agnosticObjectCharacter.leftButtonPressedBool   + ".\n" +
                "RIGHT  BUTTON: " + agnosticObjectCharacter.rightButtonPressedBool  + ".\n" +
                "UP     BUTTON: " + agnosticObjectCharacter.upButtonPressedBool     + "."
            );

        }

        agnosticObjectCharacter
            .MovementObjectCharacter()
            .PreventMovementContradictionObjectCharacter();




        agnosticObjectCharacter.spriteAssetPathString       = graphic.assetsKey;
        agnosticObjectCharacter.xPositionFloat              = x;
        agnosticObjectCharacter.yPositionFloat              = y;



        return this;

    }





}