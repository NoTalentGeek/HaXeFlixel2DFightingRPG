#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageLayer
#include <flixel/addons/editors/tiled/TiledImageLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayerType
#include <flixel/addons/editors/tiled/TiledLayerType.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledImageLayer_obj::__construct(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledImageLayer","new",0x82af5f35,"flixel.addons.editors.tiled.TiledImageLayer.new","flixel/addons/editors/tiled/TiledImageLayer.hx",12,0xc6ee7f3d)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(13)
	::haxe::xml::Fast tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	::flixel::addons::editors::tiled::TiledMap tmp1 = parent;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(14)
	this->type = ::flixel::addons::editors::tiled::TiledLayerType_obj::IMAGE;
	HX_STACK_LINE(15)
	::haxe::xml::Fast tmp2 = source->node->resolve(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	::String tmp3 = tmp2->att->resolve(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(15)
	this->imagePath = tmp3;
	HX_STACK_LINE(16)
	bool tmp4 = source->has->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(16)
	if ((tmp4)){
		HX_STACK_LINE(16)
		::String tmp6 = source->att->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16)
		tmp5 = ::Std_obj::parseInt(tmp6);
	}
	else{
		HX_STACK_LINE(16)
		tmp5 = (int)0;
	}
	HX_STACK_LINE(16)
	this->x = tmp5;
	HX_STACK_LINE(17)
	bool tmp6 = source->has->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(17)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(17)
	if ((tmp6)){
		HX_STACK_LINE(17)
		::String tmp8 = source->att->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(17)
		tmp7 = ::Std_obj::parseInt(tmp8);
	}
	else{
		HX_STACK_LINE(17)
		tmp7 = (int)0;
	}
	HX_STACK_LINE(17)
	this->y = tmp7;
}
;
	return null();
}

//TiledImageLayer_obj::~TiledImageLayer_obj() { }

Dynamic TiledImageLayer_obj::__CreateEmpty() { return  new TiledImageLayer_obj; }
hx::ObjectPtr< TiledImageLayer_obj > TiledImageLayer_obj::__new(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent)
{  hx::ObjectPtr< TiledImageLayer_obj > _result_ = new TiledImageLayer_obj();
	_result_->__construct(source,parent);
	return _result_;}

Dynamic TiledImageLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledImageLayer_obj > _result_ = new TiledImageLayer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


TiledImageLayer_obj::TiledImageLayer_obj()
{
}

void TiledImageLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledImageLayer);
	HX_MARK_MEMBER_NAME(imagePath,"imagePath");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	::flixel::addons::editors::tiled::TiledLayer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledImageLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(imagePath,"imagePath");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	::flixel::addons::editors::tiled::TiledLayer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TiledImageLayer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imagePath") ) { return imagePath; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledImageLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imagePath") ) { imagePath=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledImageLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("imagePath","\xa0","\x7a","\x86","\x2c"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TiledImageLayer_obj,imagePath),HX_HCSTRING("imagePath","\xa0","\x7a","\x86","\x2c")},
	{hx::fsInt,(int)offsetof(TiledImageLayer_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TiledImageLayer_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("imagePath","\xa0","\x7a","\x86","\x2c"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledImageLayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledImageLayer_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledImageLayer_obj::__mClass;

void TiledImageLayer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledImageLayer","\xc3","\xa0","\x00","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledImageLayer_obj >;
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

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
