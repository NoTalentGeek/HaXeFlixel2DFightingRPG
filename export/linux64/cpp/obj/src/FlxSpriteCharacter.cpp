#include <hxcpp.h>

#ifndef INCLUDED_AgnosticCharacter
#include <AgnosticCharacter.h>
#endif
#ifndef INCLUDED_FlxSpriteCharacter
#include <FlxSpriteCharacter.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void FlxSpriteCharacter_obj::__construct(Float _xPositionFloat,Float _yPositionFloat)
{
HX_STACK_FRAME("FlxSpriteCharacter","new",0x1854d0a4,"FlxSpriteCharacter.new","FlxSpriteCharacter.hx",28,0xe11d0f4c)
HX_STACK_THIS(this)
HX_STACK_ARG(_xPositionFloat,"_xPositionFloat")
HX_STACK_ARG(_yPositionFloat,"_yPositionFloat")
{
	HX_STACK_LINE(67)
	this->playerPositionFlxPoint = ::flixel::math::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(66)
	this->agnosticObjectCharacter = ::AgnosticCharacter_obj::__new();
	HX_STACK_LINE(74)
	Float tmp = _xPositionFloat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	Float tmp1 = _yPositionFloat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(75)
	this->loadGraphic(HX_HCSTRING("assets/images/spr0001.png","\x26","\x4a","\x56","\xb0"),false,(int)32,(int)32,null(),null());
	HX_STACK_LINE(78)
	::AgnosticCharacter tmp2 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	Float tmp3 = tmp2->CONST_SPEED_FLOAT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	::AgnosticCharacter tmp4 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(78)
	Float tmp5 = tmp4->speedXFloat;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(78)
	Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	::AgnosticCharacter tmp7 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(79)
	Float tmp8 = tmp7->CONST_SPEED_FLOAT;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(79)
	::AgnosticCharacter tmp9 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(79)
	Float tmp10 = tmp9->speedXFloat;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(79)
	Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(77)
	::flixel::math::FlxPoint tmp12 = ::flixel::math::FlxPoint_obj::__new(tmp6,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(77)
	this->drag = tmp12;
	HX_STACK_LINE(82)
	::AgnosticCharacter tmp13 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(82)
	Float tmp14 = tmp13->speedXFloat;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(83)
	::AgnosticCharacter tmp15 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(83)
	Float tmp16 = tmp15->speedXFloat;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(81)
	::flixel::math::FlxPoint tmp17 = ::flixel::math::FlxPoint_obj::__new(tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(81)
	this->maxVelocity = tmp17;
	HX_STACK_LINE(86)
	this->SyncAgnosticFlxSpriteCharacter();
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		::flixel::_system::frontEnds::LogFrontEnd tmp18 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(90)
		::flixel::_system::frontEnds::LogFrontEnd _this = tmp18;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(90)
		Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(90)
		tmp19 = _this->__Field(HX_HCSTRING("processTraceData","\xe0","\x2e","\xf4","\x70"), hx::paccDynamic );
		HX_STACK_LINE(90)
		::haxe::Log_obj::trace = tmp19;
		HX_STACK_LINE(90)
		_this->__FieldRef(HX_HCSTRING("redirectTraces","\x8a","\xce","\xd6","\x0a")) = true;
	}
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		::flixel::FlxGame tmp18 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(92)
		::flixel::_system::debug::watch::Watch tmp19 = tmp18->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(92)
		::AgnosticCharacter tmp20 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(92)
		tmp19->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp20,HX_HCSTRING("accelerationXFloat","\x64","\xa6","\xaa","\x43"),null());
	}
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		::flixel::FlxGame tmp18 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(93)
		::flixel::_system::debug::watch::Watch tmp19 = tmp18->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(93)
		::AgnosticCharacter tmp20 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(93)
		tmp19->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp20,HX_HCSTRING("accelerationYFloat","\xc3","\x02","\x06","\xaa"),null());
	}
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		::flixel::FlxGame tmp18 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(94)
		::flixel::_system::debug::watch::Watch tmp19 = tmp18->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(94)
		tmp19->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),null());
	}
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		::flixel::FlxGame tmp18 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(96)
		::flixel::_system::debug::watch::Watch tmp19 = tmp18->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(96)
		::AgnosticCharacter tmp20 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(96)
		tmp19->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp20,HX_HCSTRING("leftButtonPressedBool","\x13","\x33","\x70","\x57"),null());
	}
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		::flixel::FlxGame tmp18 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(97)
		::flixel::_system::debug::watch::Watch tmp19 = tmp18->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(97)
		::AgnosticCharacter tmp20 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(97)
		tmp19->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp20,HX_HCSTRING("rightButtonPressedBool","\x9e","\x8f","\x2e","\x04"),null());
	}
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
		HX_STACK_FRAME("FlxSpriteCharacter","update",0xd2970845,"FlxSpriteCharacter.update","FlxSpriteCharacter.hx",105,0xe11d0f4c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_elapsedFloat,"_elapsedFloat")
		HX_STACK_LINE(107)
		Float tmp = _elapsedFloat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		this->super::update(tmp);
		HX_STACK_LINE(108)
		this->SyncAgnosticFlxSpriteCharacter();
		HX_STACK_LINE(114)
		::AgnosticCharacter tmp1 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		::String tmp2 = tmp1->facingString;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		bool tmp3 = (tmp2 == HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		if ((tmp3)){
			HX_STACK_LINE(114)
			this->set_facing((int)1);
		}
		else{
			HX_STACK_LINE(115)
			::AgnosticCharacter tmp4 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			::String tmp5 = tmp4->facingString;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			bool tmp6 = (tmp5 == HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			if ((tmp6)){
				HX_STACK_LINE(115)
				this->set_facing((int)16);
			}
		}
		HX_STACK_LINE(120)
		::AgnosticCharacter tmp4 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		bool tmp5 = tmp4->leftButtonPressedBool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(120)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(120)
		if ((tmp6)){
			HX_STACK_LINE(121)
			::AgnosticCharacter tmp8 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(121)
			::AgnosticCharacter tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(121)
			tmp7 = tmp9->rightButtonPressedBool;
		}
		else{
			HX_STACK_LINE(120)
			tmp7 = true;
		}
		HX_STACK_LINE(117)
		if ((tmp7)){
			HX_STACK_LINE(129)
			::flixel::math::FlxPoint tmp8 = this->acceleration;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(129)
			::AgnosticCharacter tmp9 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(129)
			Float tmp10 = tmp9->accelerationXFloat;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(129)
			tmp8->set_x(tmp10);
			HX_STACK_LINE(131)
			Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("FlxSpriteCharacter.hx","\x4c","\x0f","\x1d","\xe1"),131,HX_HCSTRING("FlxSpriteCharacter","\xb2","\xee","\x36","\x4b"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(131)
			::haxe::Log_obj::trace(HX_HCSTRING("WALKING.","\xb5","\xde","\xc0","\xc1"),tmp11);
			HX_STACK_LINE(132)
			::flixel::math::FlxPoint tmp12 = this->acceleration;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(132)
			Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(132)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("FlxSpriteCharacter.hx","\x4c","\x0f","\x1d","\xe1"),132,HX_HCSTRING("FlxSpriteCharacter","\xb2","\xee","\x36","\x4b"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(132)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		else{
			HX_STACK_LINE(138)
			::flixel::math::FlxPoint tmp8 = this->acceleration;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(138)
			tmp8->set_x((int)0);
		}
		HX_STACK_LINE(142)
		::flixel::math::FlxPoint tmp8 = this->acceleration;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(142)
		tmp8->set_y((int)600);
	}
return null();
}


::FlxSpriteCharacter FlxSpriteCharacter_obj::SyncAgnosticFlxSpriteCharacter( ){
	HX_STACK_FRAME("FlxSpriteCharacter","SyncAgnosticFlxSpriteCharacter",0x13f7c2ab,"FlxSpriteCharacter.SyncAgnosticFlxSpriteCharacter","FlxSpriteCharacter.hx",150,0xe11d0f4c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	bool tmp1 = tmp->checkKeyArrayState(Array_obj< int >::__new().Add((int)37).Add((int)65),(int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	::AgnosticCharacter tmp2 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	tmp2->leftButtonPressedBool = tmp1;
	HX_STACK_LINE(173)
	::flixel::input::keyboard::FlxKeyboard tmp3 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(173)
	bool tmp4 = tmp3->checkKeyArrayState(Array_obj< int >::__new().Add((int)39).Add((int)68),(int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(173)
	::AgnosticCharacter tmp5 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(173)
	tmp5->rightButtonPressedBool = tmp4;
	HX_STACK_LINE(176)
	::flixel::math::FlxPoint tmp6 = this->acceleration;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(176)
	Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(176)
	Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("FlxSpriteCharacter.hx","\x4c","\x0f","\x1d","\xe1"),176,HX_HCSTRING("FlxSpriteCharacter","\xb2","\xee","\x36","\x4b"),HX_HCSTRING("SyncAgnosticFlxSpriteCharacter","\x6f","\x6c","\xbe","\x93"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(176)
	::haxe::Log_obj::trace(tmp7,tmp8);
	HX_STACK_LINE(177)
	::flixel::math::FlxPoint tmp9 = this->acceleration;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(177)
	::AgnosticCharacter tmp10 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(177)
	tmp10->accelerationXFloat = tmp9->x;
	HX_STACK_LINE(178)
	::flixel::math::FlxPoint tmp11 = this->acceleration;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(178)
	::AgnosticCharacter tmp12 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(178)
	tmp12->accelerationYFloat = tmp11->y;
	HX_STACK_LINE(179)
	::flixel::graphics::FlxGraphic tmp13 = this->graphic;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(179)
	::AgnosticCharacter tmp14 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(179)
	tmp14->spriteAssetPathString = tmp13->assetsKey;
	HX_STACK_LINE(180)
	Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(180)
	::AgnosticCharacter tmp16 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(180)
	tmp16->xPositionFloat = tmp15;
	HX_STACK_LINE(181)
	Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(181)
	::AgnosticCharacter tmp18 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(181)
	tmp18->yPositionFloat = tmp17;
	HX_STACK_LINE(183)
	::AgnosticCharacter tmp19 = this->agnosticObjectCharacter;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(183)
	::AgnosticCharacter tmp20 = tmp19->MovementObjectCharacter();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(183)
	tmp20->PreventMovementContradictionObjectCharacter();
	HX_STACK_LINE(189)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSpriteCharacter_obj,SyncAgnosticFlxSpriteCharacter,return )


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

void FlxSpriteCharacter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("FlxSpriteCharacter","\xb2","\xee","\x36","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
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

