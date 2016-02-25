package;





class AgnosticCharacter{



    public var CONST_SPEED_FLOAT        (default, null)     :Float      = 4.0;

    //public var downButtonPressedBool  (default, default)  :Bool       = false;
    //public var upButtonPressedBool    (default, default)  :Bool       = false;
    public var accelerationXFloat       (default, default)  :Float      = 0.0;
    public var accelerationYFloat       (null, default)     :Float      = 0.0;
    public var facingString             (default, null)     :String     = "";
    public var leftButtonPressedBool    (default, default)  :Bool       = false;
    public var moveDegreeFloat          (default, null)     :Float      = -1.0;
    public var rightButtonPressedBool   (default, default)  :Bool       = false;
    public var speedXFloat              (default, null)     :Float      = 80.0;
    public var spriteAssetPathString    (null, default)     :String     = "";
    public var xPositionFloat           (null, default)     :Float      = -1;
    public var yPositionFloat           (null, default)     :Float      = -1;





    public function new():Void{}





    public function MovementObjectCharacter():AgnosticCharacter{

        if(
            //downButtonPressedBool ||
            //upButtonPressedBool
            leftButtonPressedBool   ||
            rightButtonPressedBool
        ){

            /*
            if(downButtonPressedBool){

                facingString = "DOWN";
                moveDegreeFloat = 90;
                if(leftButtonPressedBool)           { moveDegreeFloat += 45; }
                else if(rightButtonPressedBool)     { moveDegreeFloat -= 45; }

            }
            else if (upButtonPressedBool){

                facingString = "UP";
                moveDegreeFloat = -90;
                if(leftButtonPressedBool)           { moveDegreeFloat -= 45; }
                else if(rightButtonPressedBool)     { moveDegreeFloat += 45; }

            }
            */
            if(leftButtonPressedBool){

                facingString = "LEFT";
                accelerationXFloat = -1*CONST_SPEED_FLOAT*speedXFloat;

            }
            else if(rightButtonPressedBool){

                facingString = "RIGHT";
                accelerationXFloat = CONST_SPEED_FLOAT*speedXFloat;

            }

        }

        return this;

    }





    /*Prevent two contradictory boolean to be active in the same time.*/
    public function PreventMovementContradictionObjectCharacter():AgnosticCharacter{

        //if(downButtonPressedBool  && upButtonPressedBool)     { downButtonPressedBool     = upButtonPressedBool       = false; }
        if(leftButtonPressedBool    && rightButtonPressedBool)  { leftButtonPressedBool     = rightButtonPressedBool    = false; }

        return this;

    }




}