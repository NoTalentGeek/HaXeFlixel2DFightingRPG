package;





import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.math.FlxPoint;






/*
typedef ChangeVariableWithDetectionStruct = {

    boolBool:Bool,
    sourceT:Dynamic

}
*/





class FlxSpriteCharacter extends FlxSprite{





    /*
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
    */





    private var agnosticObjectCharacter:AgnosticCharacter = new AgnosticCharacter();
    private var playerPositionFlxPoint:FlxPoint = new FlxPoint();




    public function new(_xPositionFloat:Float, _yPositionFloat:Float):Void{

        super(_xPositionFloat, _yPositionFloat);
        loadGraphic(AssetPaths.spr0001__png ,false, 32, 32);

        drag = new FlxPoint(
            agnosticObjectCharacter.CONST_SPEED_FLOAT*agnosticObjectCharacter.speedXFloat,
            agnosticObjectCharacter.CONST_SPEED_FLOAT*agnosticObjectCharacter.speedXFloat
        );
        maxVelocity = new FlxPoint(
            agnosticObjectCharacter.speedXFloat,
            agnosticObjectCharacter.speedXFloat
        );

        SyncAgnosticFlxSpriteCharacter();



        FlxG.log.redirectTraces = true;

        FlxG.watch.add(agnosticObjectCharacter, "accelerationXFloat");
        FlxG.watch.add(agnosticObjectCharacter, "accelerationYFloat");
        FlxG.watch.add(this, "acceleration");

        FlxG.watch.add(agnosticObjectCharacter, "leftButtonPressedBool");
        FlxG.watch.add(agnosticObjectCharacter, "rightButtonPressedBool");

    }





    public override function update(_elapsedFloat:Float):Void{

        super.update(_elapsedFloat);
        SyncAgnosticFlxSpriteCharacter();



        //if(agnosticObjectCharacter.facingString == "DOWN")        { facing = FlxObject.DOWN; }
        //if(agnosticObjectCharacter.facingString == "UP")          { facing = FlxObject.UP; }
        if(agnosticObjectCharacter.facingString == "LEFT")          { facing = FlxObject.LEFT; }
        else if(agnosticObjectCharacter.facingString == "RIGHT")    { facing = FlxObject.RIGHT; }

        if(
            //agnosticObjectCharacter.downButtonPressedBool ||
            //agnosticObjectCharacter.upButtonPressedBool
            agnosticObjectCharacter.leftButtonPressedBool   ||
            agnosticObjectCharacter.rightButtonPressedBool
        ){

            /*
            velocity.set(agnosticObjectCharacter.speedFloat, 0);
            velocity.rotate(FlxPoint.weak(0, 0), agnosticObjectCharacter.moveDegreeFloat);
            */

            acceleration.x = agnosticObjectCharacter.accelerationXFloat;

            /*PENDING: Add current action enumeration, walking, talking, interracting, etc.*/
            trace("WALKING.");

        }
        else{

            //velocity.set(0, 0);
            acceleration.x = 0;

        }

        acceleration.y = 600;

    }





    private function SyncAgnosticFlxSpriteCharacter():FlxSpriteCharacter{

        /*
        /*Determine which button is pressed.
        This is just for debuggin purpose.
        These if statements are to detect whether there is a change in button pressed
            so that it will only trigger thr trace message once.
        if(
            //ChangeVariableWithDetectionDynamic    (agnosticObjectCharacter.downButtonPressedBool,   FlxG.keys.anyPressed([DOWN, S])).boolBool   == true ||
            //ChangeVariableWithDetectionDynamic    (agnosticObjectCharacter.upButtonPressedBool,     FlxG.keys.anyPressed([UP, W])).boolBool     == true
            ChangeVariableWithDetectionDynamic      (agnosticObjectCharacter.leftButtonPressedBool,   FlxG.keys.anyPressed([LEFT, A])).boolBool   == true ||
            ChangeVariableWithDetectionDynamic      (agnosticObjectCharacter.rightButtonPressedBool,  FlxG.keys.anyPressed([RIGHT, D])).boolBool  == true
        ){

            //agnosticObjectCharacter.downButtonPressedBool = ChangeVariableWithDetectionDynamic(agnosticObjectCharacter.downButtonPressedBool,     FlxG.keys.anyPressed([DOWN,     S])).sourceT;
            //agnosticObjectCharacter.upButtonPressedBool   = ChangeVariableWithDetectionDynamic(agnosticObjectCharacter.upButtonPressedBool,       FlxG.keys.anyPressed([UP,       W])).sourceT;
            agnosticObjectCharacter.leftButtonPressedBool   = ChangeVariableWithDetectionDynamic(agnosticObjectCharacter.leftButtonPressedBool,     FlxG.keys.anyPressed([LEFT,     A])).sourceT;
            agnosticObjectCharacter.rightButtonPressedBool  = ChangeVariableWithDetectionDynamic(agnosticObjectCharacter.rightButtonPressedBool,    FlxG.keys.anyPressed([RIGHT,    D])).sourceT;

        }
        */

        agnosticObjectCharacter.leftButtonPressedBool   = FlxG.keys.anyPressed([LEFT,     A]);
        agnosticObjectCharacter.rightButtonPressedBool  = FlxG.keys.anyPressed([RIGHT,    D]);



        agnosticObjectCharacter.accelerationXFloat          = acceleration.x;
        agnosticObjectCharacter.accelerationYFloat          = acceleration.y;
        agnosticObjectCharacter.spriteAssetPathString       = graphic.assetsKey;
        agnosticObjectCharacter.xPositionFloat              = x;
        agnosticObjectCharacter.yPositionFloat              = y;

        agnosticObjectCharacter
            .MovementObjectCharacter()
            .PreventMovementContradictionObjectCharacter();



        return this;

    }





}