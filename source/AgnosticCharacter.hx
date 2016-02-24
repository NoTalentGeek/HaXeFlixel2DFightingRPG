package;





class AgnosticCharacter{





    public var downButtonPressedBool    (default, default)  :Bool       = false;
    public var facingString             (default, null)     :String     = "";
    public var leftButtonPressedBool    (default, default)  :Bool       = false;
    public var moveDegreeFloat          (default, null)     :Float      = -1.0;
    public var rightButtonPressedBool   (default, default)  :Bool       = false;
    public var spriteAssetPathString    (null, default)     :String     = "";
    public var upButtonPressedBool      (default, default)  :Bool       = false;
    public var xPositionFloat           (null, default)     :Float      = -1;
    public var yPositionFloat           (null, default)     :Float      = -1;
    public var speedFloat               (default, default)  :Float      = 200.0;





    public function new():Void{}





    public function MovementObjectCharacter():AgnosticCharacter{

        if(
            downButtonPressedBool   ||
            leftButtonPressedBool   ||
            rightButtonPressedBool  ||
            upButtonPressedBool
        ){

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
            else if(leftButtonPressedBool){

                facingString = "LEFT";
                moveDegreeFloat = 180;

            }
            else if(rightButtonPressedBool){

                facingString = "RIGHT";
                moveDegreeFloat = 0;

            }

        }

        return this;

    }





    /*Prevent two contradictory boolean to be active in the same time.*/
    public function PreventMovementContradictionObjectCharacter():AgnosticCharacter{

        if(downButtonPressedBool    && upButtonPressedBool)     { downButtonPressedBool     = upButtonPressedBool       = false; }
        if(leftButtonPressedBool    && rightButtonPressedBool)  { leftButtonPressedBool     = rightButtonPressedBool    = false; }

        return this;

    }




}