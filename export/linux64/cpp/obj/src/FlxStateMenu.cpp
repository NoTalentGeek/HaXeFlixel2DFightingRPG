#include <hxcpp.h>

#ifndef INCLUDED_FlxSpriteCharacter
#include <FlxSpriteCharacter.h>
#endif
#ifndef INCLUDED_FlxStateMenu
#include <FlxStateMenu.h>
#endif
#ifndef INCLUDED_TiledMapTiledLevel
#include <TiledMapTiledLevel.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void FlxStateMenu_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("FlxStateMenu","new",0x3dfed590,"FlxStateMenu.new","FlxStateMenu.hx",18,0xd0100be0)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(24)
	this->tiledLevelTiledMap = null();
	HX_STACK_LINE(21)
	this->testFlxSpriteCharacter = null();
	HX_STACK_LINE(18)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	super::__construct(tmp);
}
;
	return null();
}

//FlxStateMenu_obj::~FlxStateMenu_obj() { }

Dynamic FlxStateMenu_obj::__CreateEmpty() { return  new FlxStateMenu_obj; }
hx::ObjectPtr< FlxStateMenu_obj > FlxStateMenu_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< FlxStateMenu_obj > _result_ = new FlxStateMenu_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic FlxStateMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxStateMenu_obj > _result_ = new FlxStateMenu_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FlxStateMenu_obj::create( ){
{
		HX_STACK_FRAME("FlxStateMenu","create",0x490fbfcc,"FlxStateMenu.create","FlxStateMenu.hx",27,0xd0100be0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->super::create();
		HX_STACK_LINE(33)
		::TiledMapTiledLevel tmp = ::TiledMapTiledLevel_obj::__new(HX_HCSTRING("assets/tiled/PROTOTYPE/level.tmx","\xc3","\xc0","\xc2","\x1f"),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		this->tiledLevelTiledMap = tmp;
		HX_STACK_LINE(38)
		::TiledMapTiledLevel tmp1 = this->tiledLevelTiledMap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		::flixel::group::FlxTypedGroup tmp2 = tmp1->imagesLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		this->add(tmp2);
		HX_STACK_LINE(42)
		::TiledMapTiledLevel tmp3 = this->tiledLevelTiledMap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		::flixel::group::FlxTypedGroup tmp4 = tmp3->foregroundTiles;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		this->add(tmp4);
		HX_STACK_LINE(44)
		::FlxSpriteCharacter tmp5 = ::FlxSpriteCharacter_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		this->testFlxSpriteCharacter = tmp5;
		HX_STACK_LINE(45)
		::FlxSpriteCharacter tmp6 = this->testFlxSpriteCharacter;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		this->add(tmp6);
	}
return null();
}


Void FlxStateMenu_obj::update( Float _elapsedFloat){
{
		HX_STACK_FRAME("FlxStateMenu","update",0x5405ded9,"FlxStateMenu.update","FlxStateMenu.hx",53,0xd0100be0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_elapsedFloat,"_elapsedFloat")
		HX_STACK_LINE(55)
		Float tmp = _elapsedFloat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		this->super::update(tmp);
		HX_STACK_LINE(58)
		::TiledMapTiledLevel tmp1 = this->tiledLevelTiledMap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		::FlxSpriteCharacter tmp2 = this->testFlxSpriteCharacter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		tmp1->collideWithLevel(tmp2,null(),null());
	}
return null();
}



FlxStateMenu_obj::FlxStateMenu_obj()
{
}

void FlxStateMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxStateMenu);
	HX_MARK_MEMBER_NAME(testFlxSpriteCharacter,"testFlxSpriteCharacter");
	HX_MARK_MEMBER_NAME(tiledLevelTiledMap,"tiledLevelTiledMap");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxStateMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(testFlxSpriteCharacter,"testFlxSpriteCharacter");
	HX_VISIT_MEMBER_NAME(tiledLevelTiledMap,"tiledLevelTiledMap");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxStateMenu_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tiledLevelTiledMap") ) { return tiledLevelTiledMap; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"testFlxSpriteCharacter") ) { return testFlxSpriteCharacter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxStateMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"tiledLevelTiledMap") ) { tiledLevelTiledMap=inValue.Cast< ::TiledMapTiledLevel >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"testFlxSpriteCharacter") ) { testFlxSpriteCharacter=inValue.Cast< ::FlxSpriteCharacter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxStateMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("testFlxSpriteCharacter","\x84","\x33","\x73","\x20"));
	outFields->push(HX_HCSTRING("tiledLevelTiledMap","\x14","\xa9","\x32","\x39"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::FlxSpriteCharacter*/ ,(int)offsetof(FlxStateMenu_obj,testFlxSpriteCharacter),HX_HCSTRING("testFlxSpriteCharacter","\x84","\x33","\x73","\x20")},
	{hx::fsObject /*::TiledMapTiledLevel*/ ,(int)offsetof(FlxStateMenu_obj,tiledLevelTiledMap),HX_HCSTRING("tiledLevelTiledMap","\x14","\xa9","\x32","\x39")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("testFlxSpriteCharacter","\x84","\x33","\x73","\x20"),
	HX_HCSTRING("tiledLevelTiledMap","\x14","\xa9","\x32","\x39"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxStateMenu_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxStateMenu_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxStateMenu_obj::__mClass;

void FlxStateMenu_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("FlxStateMenu","\x9e","\x0d","\xe9","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxStateMenu_obj >;
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

