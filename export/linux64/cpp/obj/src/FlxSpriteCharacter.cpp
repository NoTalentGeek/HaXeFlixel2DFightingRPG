#include <hxcpp.h>

#ifndef INCLUDED_AgnosticCharacter
#include <AgnosticCharacter.h>
#endif
#ifndef INCLUDED_FlxSpriteCharacter
#include <FlxSpriteCharacter.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void FlxSpriteCharacter_obj::__construct(Float _xPositionFloat,Float _yPositionFloat)
{
HX_STACK_FRAME("FlxSpriteCharacter","new",0x1854d0a4,"FlxSpriteCharacter.new","FlxSpriteCharacter.hx",28,0xe11d0f4c)
HX_STACK_THIS(this)
HX_STACK_ARG(_xPositionFloat,"_xPositionFloat")
HX_STACK_ARG(_yPositionFloat,"_yPositionFloat")
{
	HX_STACK_LINE(65)
	this->playerPositionFlxPoint = ::flixel::math::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(64)
	this->agnosticObjectCharacter = ::AgnosticCharacter_obj::__new();
	HX_STACK_LINE(72)
	Float tmp = _xPositionFloat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	Float tmp1 = _yPositionFloat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(73)
	this->loadGraphic(HX_HCSTRING("assets/images/spr0001.png","\x26","\x4a","\x56","\xb0"),false,(int)32,(int)32,null(),null());
	HX_STACK_LINE(74)
	this->SyncAgnosticFlxSpriteCharacter();
}
;
	return null();
}

//FlxSpriteCharacter_obj::~FlxSpriteCharacter_obj() { }

Dynamic FlxSpriteCharacter_obj::__CreateEmpty() { return  new FlxSpriteCharacter_obj; }
hx::ObjectPtr< FlxSpriteCharacter_obj > FlxSpriteCharacter_obj::__new(Float _xPositionFloat,Float _yPositionFloat)
{  hx::ObjectPtr< FlxSpriteCharacter_obj > _result_ = new FlxSpriteCharacter_obj();
	_result_->__construct(_xPositionFloat,_yPositionFloat);
	return _result_;}

Dynamic FlxSpriteCharacter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSpriteCharacter_obj > _result_ = new FlxSpriteCharacter_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void FlxSpriteCharacter_obj::update( Float _elapsedFloat){
{
		HX_STACK_FRAME("FlxSpriteCharacter","update",0xd2970845,"FlxSpriteCharacter.update","FlxSpriteCharacter.hx",82,0xe11d0f4c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_elapsedFloat,"_elapsedFloat")
		HX_STACK_LINE(84)
		Float tmp = _elapsedFloat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		this->super::update(tmp);
		HX_STACK_LINE(85)
		this->SyncAgnosticFlxSpriteCharacter();
		HX_STACK_LINE(89)
		::AgnosticCharacter tmp1 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		::String tmp2 = tmp1->facingString;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		bool tmp3 = (tmp2 == HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		if ((tmp3)){
			HX_STACK_LINE(89)
			this->set_facing((int)4096);
		}
		else{
			HX_STACK_LINE(90)
			::AgnosticCharacter tmp4 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			::String tmp5 = tmp4->facingString;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(90)
			bool tmp6 = (tmp5 == HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(90)
			if ((tmp6)){
				HX_STACK_LINE(90)
				this->set_facing((int)1);
			}
			else{
				HX_STACK_LINE(91)
				::AgnosticCharacter tmp7 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(91)
				::String tmp8 = tmp7->facingString;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(91)
				bool tmp9 = (tmp8 == HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(91)
				if ((tmp9)){
					HX_STACK_LINE(91)
					this->set_facing((int)16);
				}
				else{
					HX_STACK_LINE(92)
					::AgnosticCharacter tmp10 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(92)
					::String tmp11 = tmp10->facingString;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(92)
					bool tmp12 = (tmp11 == HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(92)
					if ((tmp12)){
						HX_STACK_LINE(92)
						this->set_facing((int)256);
					}
				}
			}
		}
		HX_STACK_LINE(95)
		::AgnosticCharacter tmp4 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		bool tmp5 = tmp4->downButtonPressedBool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(95)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(95)
		if ((tmp7)){
			HX_STACK_LINE(96)
			::AgnosticCharacter tmp9 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(96)
			::AgnosticCharacter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(96)
			::AgnosticCharacter tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(96)
			tmp8 = tmp11->leftButtonPressedBool;
		}
		else{
			HX_STACK_LINE(95)
			tmp8 = true;
		}
		HX_STACK_LINE(95)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(95)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(95)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(95)
		if ((tmp10)){
			HX_STACK_LINE(97)
			::AgnosticCharacter tmp12 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(97)
			::AgnosticCharacter tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(97)
			::AgnosticCharacter tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(97)
			tmp11 = tmp14->rightButtonPressedBool;
		}
		else{
			HX_STACK_LINE(95)
			tmp11 = true;
		}
		HX_STACK_LINE(95)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(95)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(95)
		if ((tmp12)){
			HX_STACK_LINE(98)
			::AgnosticCharacter tmp14 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(98)
			::AgnosticCharacter tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(98)
			tmp13 = tmp15->upButtonPressedBool;
		}
		else{
			HX_STACK_LINE(95)
			tmp13 = true;
		}
		HX_STACK_LINE(94)
		if ((tmp13)){
			HX_STACK_LINE(101)
			::flixel::math::FlxPoint tmp14 = this->velocity;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(101)
			::AgnosticCharacter tmp15 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(101)
			Float tmp16 = tmp15->speedFloat;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(101)
			tmp14->set(tmp16,(int)0);
			HX_STACK_LINE(102)
			::flixel::math::FlxPoint tmp17 = this->velocity;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(102)
			::flixel::math::FlxPoint tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				::flixel::math::FlxPoint tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp20 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(102)
					::flixel::math::FlxPoint tmp21 = tmp20->get();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(102)
					::flixel::math::FlxPoint tmp22 = tmp21->set((int)0,(int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(102)
					::flixel::math::FlxPoint point = tmp22;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(102)
					point->_inPool = false;
					HX_STACK_LINE(102)
					tmp19 = point;
				}
				HX_STACK_LINE(102)
				::flixel::math::FlxPoint point = tmp19;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(102)
				point->_weak = true;
				HX_STACK_LINE(102)
				tmp18 = point;
			}
			HX_STACK_LINE(102)
			::AgnosticCharacter tmp19 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(102)
			Float tmp20 = tmp19->moveDegreeFloat;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(102)
			tmp17->rotate(tmp18,tmp20);
			HX_STACK_LINE(104)
			Dynamic tmp21 = hx::SourceInfo(HX_HCSTRING("FlxSpriteCharacter.hx","\x4c","\x0f","\x1d","\xe1"),104,HX_HCSTRING("FlxSpriteCharacter","\xb2","\xee","\x36","\x4b"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(104)
			::haxe::Log_obj::trace(HX_HCSTRING("WALKING.","\xb5","\xde","\xc0","\xc1"),tmp21);
		}
		else{
			HX_STACK_LINE(107)
			::flixel::math::FlxPoint tmp14 = this->velocity;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(107)
			tmp14->set((int)0,(int)0);
		}
	}
return null();
}


::FlxSpriteCharacter FlxSpriteCharacter_obj::SyncAgnosticFlxSpriteCharacter( ){
	HX_STACK_FRAME("FlxSpriteCharacter","SyncAgnosticFlxSpriteCharacter",0x13f7c2ab,"FlxSpriteCharacter.SyncAgnosticFlxSpriteCharacter","FlxSpriteCharacter.hx",115,0xe11d0f4c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	::AgnosticCharacter tmp = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	bool tmp1 = tmp->downButtonPressedBool;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(122)
	bool tmp3 = tmp2->checkKeyArrayState(Array_obj< int >::__new().Add((int)40).Add((int)83),(int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(122)
	Dynamic tmp4 = ::FlxSpriteCharacter_obj::ChangeVariableWithDetectionDynamic(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(122)
	bool tmp5 = (tmp4->__Field(HX_HCSTRING("boolBool","\x74","\x91","\xf6","\xa9"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(122)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(122)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(122)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(122)
	if ((tmp7)){
		HX_STACK_LINE(123)
		::AgnosticCharacter tmp9 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(123)
		::AgnosticCharacter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(123)
		::AgnosticCharacter tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(123)
		bool tmp12 = tmp11->leftButtonPressedBool;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(123)
		::flixel::input::keyboard::FlxKeyboard tmp13 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(123)
		::flixel::input::keyboard::FlxKeyboard tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(123)
		::flixel::input::keyboard::FlxKeyboard tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(123)
		bool tmp16 = tmp15->checkKeyArrayState(Array_obj< int >::__new().Add((int)37).Add((int)65),(int)1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(123)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(123)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(123)
		bool tmp19 = tmp12;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(123)
		bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(123)
		bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(123)
		bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(123)
		Dynamic tmp23 = ::FlxSpriteCharacter_obj::ChangeVariableWithDetectionDynamic(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(123)
		Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(123)
		Dynamic tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(123)
		tmp8 = (tmp25->__Field(HX_HCSTRING("boolBool","\x74","\x91","\xf6","\xa9"), hx::paccDynamic ) == true);
	}
	else{
		HX_STACK_LINE(122)
		tmp8 = true;
	}
	HX_STACK_LINE(122)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(122)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(122)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(122)
	if ((tmp10)){
		HX_STACK_LINE(124)
		::AgnosticCharacter tmp12 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(124)
		::AgnosticCharacter tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(124)
		::AgnosticCharacter tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(124)
		bool tmp15 = tmp14->rightButtonPressedBool;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(124)
		::flixel::input::keyboard::FlxKeyboard tmp16 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(124)
		::flixel::input::keyboard::FlxKeyboard tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(124)
		::flixel::input::keyboard::FlxKeyboard tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(124)
		bool tmp19 = tmp18->checkKeyArrayState(Array_obj< int >::__new().Add((int)39).Add((int)68),(int)1);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(124)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(124)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(124)
		bool tmp22 = tmp15;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(124)
		bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(124)
		bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(124)
		bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(124)
		Dynamic tmp26 = ::FlxSpriteCharacter_obj::ChangeVariableWithDetectionDynamic(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(124)
		Dynamic tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(124)
		Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(124)
		tmp11 = (tmp28->__Field(HX_HCSTRING("boolBool","\x74","\x91","\xf6","\xa9"), hx::paccDynamic ) == true);
	}
	else{
		HX_STACK_LINE(122)
		tmp11 = true;
	}
	HX_STACK_LINE(122)
	bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(122)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(122)
	if ((tmp12)){
		HX_STACK_LINE(125)
		::AgnosticCharacter tmp14 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(125)
		::AgnosticCharacter tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(125)
		bool tmp16 = tmp15->upButtonPressedBool;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(125)
		::flixel::input::keyboard::FlxKeyboard tmp17 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(125)
		::flixel::input::keyboard::FlxKeyboard tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(125)
		bool tmp19 = tmp18->checkKeyArrayState(Array_obj< int >::__new().Add((int)38).Add((int)87),(int)1);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(125)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(125)
		bool tmp21 = tmp16;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(125)
		bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(125)
		Dynamic tmp23 = ::FlxSpriteCharacter_obj::ChangeVariableWithDetectionDynamic(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(125)
		Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(125)
		tmp13 = (tmp24->__Field(HX_HCSTRING("boolBool","\x74","\x91","\xf6","\xa9"), hx::paccDynamic ) == true);
	}
	else{
		HX_STACK_LINE(122)
		tmp13 = true;
	}
	HX_STACK_LINE(121)
	if ((tmp13)){
		HX_STACK_LINE(128)
		::AgnosticCharacter tmp14 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(128)
		bool tmp15 = tmp14->downButtonPressedBool;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(128)
		::flixel::input::keyboard::FlxKeyboard tmp16 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(128)
		bool tmp17 = tmp16->checkKeyArrayState(Array_obj< int >::__new().Add((int)40).Add((int)83),(int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(128)
		Dynamic tmp18 = ::FlxSpriteCharacter_obj::ChangeVariableWithDetectionDynamic(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(128)
		::AgnosticCharacter tmp19 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(128)
		tmp19->downButtonPressedBool = tmp18->__Field(HX_HCSTRING("sourceT","\x19","\x0f","\x49","\xb9"), hx::paccDynamic );
		HX_STACK_LINE(129)
		::AgnosticCharacter tmp20 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(129)
		bool tmp21 = tmp20->leftButtonPressedBool;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(129)
		::flixel::input::keyboard::FlxKeyboard tmp22 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(129)
		bool tmp23 = tmp22->checkKeyArrayState(Array_obj< int >::__new().Add((int)37).Add((int)65),(int)1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(129)
		Dynamic tmp24 = ::FlxSpriteCharacter_obj::ChangeVariableWithDetectionDynamic(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(129)
		::AgnosticCharacter tmp25 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(129)
		tmp25->leftButtonPressedBool = tmp24->__Field(HX_HCSTRING("sourceT","\x19","\x0f","\x49","\xb9"), hx::paccDynamic );
		HX_STACK_LINE(130)
		::AgnosticCharacter tmp26 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(130)
		bool tmp27 = tmp26->rightButtonPressedBool;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(130)
		::flixel::input::keyboard::FlxKeyboard tmp28 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(130)
		bool tmp29 = tmp28->checkKeyArrayState(Array_obj< int >::__new().Add((int)39).Add((int)68),(int)1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(130)
		Dynamic tmp30 = ::FlxSpriteCharacter_obj::ChangeVariableWithDetectionDynamic(tmp27,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(130)
		::AgnosticCharacter tmp31 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(130)
		tmp31->rightButtonPressedBool = tmp30->__Field(HX_HCSTRING("sourceT","\x19","\x0f","\x49","\xb9"), hx::paccDynamic );
		HX_STACK_LINE(131)
		::AgnosticCharacter tmp32 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(131)
		bool tmp33 = tmp32->upButtonPressedBool;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(131)
		::flixel::input::keyboard::FlxKeyboard tmp34 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(131)
		bool tmp35 = tmp34->checkKeyArrayState(Array_obj< int >::__new().Add((int)38).Add((int)87),(int)1);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(131)
		Dynamic tmp36 = ::FlxSpriteCharacter_obj::ChangeVariableWithDetectionDynamic(tmp33,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(131)
		::AgnosticCharacter tmp37 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(131)
		tmp37->upButtonPressedBool = tmp36->__Field(HX_HCSTRING("sourceT","\x19","\x0f","\x49","\xb9"), hx::paccDynamic );
		HX_STACK_LINE(134)
		::String tmp38 = HX_HCSTRING("\nDOWN   BUTTON: ","\x4c","\x77","\xf4","\x63");		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(135)
		::AgnosticCharacter tmp39 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(135)
		bool tmp40 = tmp39->downButtonPressedBool;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(135)
		::String tmp41 = ::Std_obj::string(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(134)
		::String tmp42 = (tmp38 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(134)
		::String tmp43 = (tmp42 + HX_HCSTRING(".\n","\x1c","\x28","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(134)
		::String tmp44 = (tmp43 + HX_HCSTRING("LEFT   BUTTON: ","\x91","\xd4","\xde","\x91"));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(136)
		::AgnosticCharacter tmp45 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(136)
		bool tmp46 = tmp45->leftButtonPressedBool;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(136)
		::String tmp47 = ::Std_obj::string(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(134)
		::String tmp48 = (tmp44 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(134)
		::String tmp49 = (tmp48 + HX_HCSTRING(".\n","\x1c","\x28","\x00","\x00"));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(134)
		::String tmp50 = (tmp49 + HX_HCSTRING("RIGHT  BUTTON: ","\xd4","\x03","\x6f","\x78"));		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(137)
		::AgnosticCharacter tmp51 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(137)
		bool tmp52 = tmp51->rightButtonPressedBool;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(137)
		::String tmp53 = ::Std_obj::string(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(134)
		::String tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(134)
		::String tmp55 = (tmp54 + HX_HCSTRING(".\n","\x1c","\x28","\x00","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(134)
		::String tmp56 = (tmp55 + HX_HCSTRING("UP     BUTTON: ","\xfd","\x21","\xb5","\x76"));		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(138)
		::AgnosticCharacter tmp57 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(138)
		bool tmp58 = tmp57->upButtonPressedBool;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(138)
		::String tmp59 = ::Std_obj::string(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(134)
		::String tmp60 = (tmp56 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(134)
		::String tmp61 = (tmp60 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(133)
		Dynamic tmp62 = hx::SourceInfo(HX_HCSTRING("FlxSpriteCharacter.hx","\x4c","\x0f","\x1d","\xe1"),133,HX_HCSTRING("FlxSpriteCharacter","\xb2","\xee","\x36","\x4b"),HX_HCSTRING("SyncAgnosticFlxSpriteCharacter","\x6f","\x6c","\xbe","\x93"));		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(133)
		::haxe::Log_obj::trace(tmp61,tmp62);
	}
	HX_STACK_LINE(143)
	::AgnosticCharacter tmp14 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(143)
	::AgnosticCharacter tmp15 = tmp14->MovementObjectCharacter();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(143)
	tmp15->PreventMovementContradictionObjectCharacter();
	HX_STACK_LINE(150)
	::flixel::graphics::FlxGraphic tmp16 = this->graphic;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(150)
	::AgnosticCharacter tmp17 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(150)
	tmp17->spriteAssetPathString = tmp16->assetsKey;
	HX_STACK_LINE(151)
	Float tmp18 = this->x;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(151)
	::AgnosticCharacter tmp19 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(151)
	tmp19->xPositionFloat = tmp18;
	HX_STACK_LINE(152)
	Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(152)
	::AgnosticCharacter tmp21 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(152)
	tmp21->yPositionFloat = tmp20;
	HX_STACK_LINE(156)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSpriteCharacter_obj,SyncAgnosticFlxSpriteCharacter,return )

Dynamic FlxSpriteCharacter_obj::ChangeVariableWithDetectionDynamic( Dynamic _controlT,Dynamic _sourceT){
	HX_STACK_FRAME("FlxSpriteCharacter","ChangeVariableWithDetectionDynamic",0x32399328,"FlxSpriteCharacter.ChangeVariableWithDetectionDynamic","FlxSpriteCharacter.hx",34,0xe11d0f4c)
	HX_STACK_ARG(_controlT,"_controlT")
	HX_STACK_ARG(_sourceT,"_sourceT")
	HX_STACK_LINE(36)
	bool boolBool = false;		HX_STACK_VAR(boolBool,"boolBool");
	HX_STACK_LINE(37)
	Dynamic sourceT = _sourceT;		HX_STACK_VAR(sourceT,"sourceT");
	HX_STACK_LINE(39)
	bool tmp = (_controlT != sourceT);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	if ((tmp)){
		HX_STACK_LINE(41)
		_controlT = sourceT;
		HX_STACK_LINE(42)
		boolBool = true;
	}
	struct _Function_1_1{
		inline static Dynamic Block( bool &boolBool,Dynamic &sourceT){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","FlxSpriteCharacter.hx",46,0xe11d0f4c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("boolBool","\x74","\x91","\xf6","\xa9") , boolBool,false);
				__result->Add(HX_HCSTRING("sourceT","\x19","\x0f","\x49","\xb9") , sourceT,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(46)
	Dynamic tmp1 = _Function_1_1::Block(boolBool,sourceT);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	Dynamic structStruct = tmp1;		HX_STACK_VAR(structStruct,"structStruct");
	HX_STACK_LINE(52)
	Dynamic tmp2 = _sourceT;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	::ValueType tmp3 = ::Type_obj::_typeof(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	bool tmp4 = (tmp3 == ::ValueType_obj::TBool);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(52)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(52)
	if ((tmp6)){
		HX_STACK_LINE(53)
		Dynamic tmp8 = _sourceT;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(53)
		::ValueType tmp11 = ::Type_obj::_typeof(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(53)
		::ValueType tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(53)
		::ValueType tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(53)
		tmp7 = (tmp13 == ::ValueType_obj::TFloat);
	}
	else{
		HX_STACK_LINE(52)
		tmp7 = true;
	}
	HX_STACK_LINE(52)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(52)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(52)
	if ((tmp8)){
		HX_STACK_LINE(54)
		Dynamic tmp10 = _sourceT;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(54)
		Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(54)
		::ValueType tmp12 = ::Type_obj::_typeof(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(54)
		::ValueType tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(54)
		tmp9 = (tmp13 == ::ValueType_obj::TInt);
	}
	else{
		HX_STACK_LINE(52)
		tmp9 = true;
	}
	HX_STACK_LINE(51)
	if ((tmp9)){
		HX_STACK_LINE(55)
		Dynamic tmp10 = structStruct;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		return tmp10;
	}
	else{
		HX_STACK_LINE(56)
		bool tmp10 = boolBool;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(56)
		return tmp10;
	}
	HX_STACK_LINE(51)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteCharacter_obj,ChangeVariableWithDetectionDynamic,return )


FlxSpriteCharacter_obj::FlxSpriteCharacter_obj()
{
}

void FlxSpriteCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSpriteCharacter);
	HX_MARK_MEMBER_NAME(agnosticObjectCharacter,"agnosticObjectCharacter");
	HX_MARK_MEMBER_NAME(playerPositionFlxPoint,"playerPositionFlxPoint");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSpriteCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(agnosticObjectCharacter,"agnosticObjectCharacter");
	HX_VISIT_MEMBER_NAME(playerPositionFlxPoint,"playerPositionFlxPoint");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSpriteCharacter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"playerPositionFlxPoint") ) { return playerPositionFlxPoint; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"agnosticObjectCharacter") ) { return agnosticObjectCharacter; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"SyncAgnosticFlxSpriteCharacter") ) { return SyncAgnosticFlxSpriteCharacter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxSpriteCharacter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 34:
		if (HX_FIELD_EQ(inName,"ChangeVariableWithDetectionDynamic") ) { outValue = ChangeVariableWithDetectionDynamic_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxSpriteCharacter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"playerPositionFlxPoint") ) { playerPositionFlxPoint=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"agnosticObjectCharacter") ) { agnosticObjectCharacter=inValue.Cast< ::AgnosticCharacter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSpriteCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("agnosticObjectCharacter","\x28","\xbe","\x71","\x51"));
	outFields->push(HX_HCSTRING("playerPositionFlxPoint","\xc8","\x09","\x3f","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::AgnosticCharacter*/ ,(int)offsetof(FlxSpriteCharacter_obj,agnosticObjectCharacter),HX_HCSTRING("agnosticObjectCharacter","\x28","\xbe","\x71","\x51")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSpriteCharacter_obj,playerPositionFlxPoint),HX_HCSTRING("playerPositionFlxPoint","\xc8","\x09","\x3f","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("agnosticObjectCharacter","\x28","\xbe","\x71","\x51"),
	HX_HCSTRING("playerPositionFlxPoint","\xc8","\x09","\x3f","\xad"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("SyncAgnosticFlxSpriteCharacter","\x6f","\x6c","\xbe","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteCharacter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteCharacter_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSpriteCharacter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ChangeVariableWithDetectionDynamic","\xec","\x6e","\x92","\x9f"),
	::String(null()) };

void FlxSpriteCharacter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("FlxSpriteCharacter","\xb2","\xee","\x36","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSpriteCharacter_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSpriteCharacter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

