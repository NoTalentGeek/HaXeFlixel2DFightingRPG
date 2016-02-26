#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
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
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectLayer
#include <flixel/addons/editors/tiled/TiledObjectLayer.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
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
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledObjectLayer_obj::__construct(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledObjectLayer","new",0x50dc6117,"flixel.addons.editors.tiled.TiledObjectLayer.new","flixel/addons/editors/tiled/TiledObjectLayer.hx",18,0xb63a8297)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(19)
	::haxe::xml::Fast tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	::flixel::addons::editors::tiled::TiledMap tmp1 = parent;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(20)
	this->type = ::flixel::addons::editors::tiled::TiledLayerType_obj::OBJECT;
	HX_STACK_LINE(21)
	this->objects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(22)
	bool tmp2 = source->has->resolve(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	if ((tmp2)){
		HX_STACK_LINE(22)
		::String tmp4 = source->att->resolve(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		tmp3 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(tmp4);
	}
	else{
		HX_STACK_LINE(22)
		tmp3 = (int)0;
	}
	HX_STACK_LINE(22)
	this->color = tmp3;
	HX_STACK_LINE(23)
	::haxe::xml::Fast tmp4 = source;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	this->loadObjects(tmp4);
}
;
	return null();
}

//TiledObjectLayer_obj::~TiledObjectLayer_obj() { }

Dynamic TiledObjectLayer_obj::__CreateEmpty() { return  new TiledObjectLayer_obj; }
hx::ObjectPtr< TiledObjectLayer_obj > TiledObjectLayer_obj::__new(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent)
{  hx::ObjectPtr< TiledObjectLayer_obj > _result_ = new TiledObjectLayer_obj();
	_result_->__construct(source,parent);
	return _result_;}

Dynamic TiledObjectLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledObjectLayer_obj > _result_ = new TiledObjectLayer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void TiledObjectLayer_obj::loadObjects( ::haxe::xml::Fast source){
{
		HX_STACK_FRAME("flixel.addons.editors.tiled.TiledObjectLayer","loadObjects",0x0117c705,"flixel.addons.editors.tiled.TiledObjectLayer.loadObjects","flixel/addons/editors/tiled/TiledObjectLayer.hx",28,0xb63a8297)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(28)
		::_List::ListIterator tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			::List tmp1 = source->nodes->resolve(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			::List _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(28)
			tmp = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(28)
		::_List::ListIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		while((true)){
			HX_STACK_LINE(28)
			bool tmp1 = (_g->head != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			if ((tmp2)){
				HX_STACK_LINE(28)
				break;
			}
			HX_STACK_LINE(28)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				Dynamic tmp4 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(28)
				_g->val = tmp4;
				HX_STACK_LINE(28)
				Dynamic tmp5 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(28)
				_g->head = tmp5;
				HX_STACK_LINE(28)
				tmp3 = _g->val;
			}
			HX_STACK_LINE(28)
			::haxe::xml::Fast node = ((::haxe::xml::Fast)(tmp3));		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(30)
			::flixel::addons::editors::tiled::TiledObject tmp4 = ::flixel::addons::editors::tiled::TiledObject_obj::__new(node,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(30)
			this->objects->push(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledObjectLayer_obj,loadObjects,(void))


TiledObjectLayer_obj::TiledObjectLayer_obj()
{
}

void TiledObjectLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObjectLayer);
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(color,"color");
	::flixel::addons::editors::tiled::TiledLayer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledObjectLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(color,"color");
	::flixel::addons::editors::tiled::TiledLayer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TiledObjectLayer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadObjects") ) { return loadObjects_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledObjectLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledObjectLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledObjectLayer_obj,objects),HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82")},
	{hx::fsInt,(int)offsetof(TiledObjectLayer_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("loadObjects","\x4e","\x27","\xed","\x52"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObjectLayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObjectLayer_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledObjectLayer_obj::__mClass;

void TiledObjectLayer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledObjectLayer","\xa5","\x89","\x8a","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledObjectLayer_obj >;
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
