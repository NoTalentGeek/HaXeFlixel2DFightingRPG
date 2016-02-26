#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
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

Void TiledLayer_obj::__construct(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","new",0x018fcf96,"flixel.addons.editors.tiled.TiledLayer.new","flixel/addons/editors/tiled/TiledLayer.hx",23,0x30daee78)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(24)
	::flixel::addons::editors::tiled::TiledPropertySet tmp = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	this->properties = tmp;
	HX_STACK_LINE(25)
	this->map = parent;
	HX_STACK_LINE(26)
	::String tmp1 = source->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	this->name = tmp1;
	HX_STACK_LINE(27)
	bool tmp2 = source->has->resolve(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	if ((tmp2)){
		HX_STACK_LINE(27)
		::String tmp4 = source->att->resolve(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		tmp3 = (tmp5 == HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(27)
		tmp3 = false;
	}
	HX_STACK_LINE(27)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	if ((tmp3)){
		HX_STACK_LINE(27)
		tmp4 = false;
	}
	else{
		HX_STACK_LINE(27)
		tmp4 = true;
	}
	HX_STACK_LINE(27)
	this->visible = tmp4;
	HX_STACK_LINE(28)
	bool tmp5 = source->has->resolve(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	if ((tmp5)){
		HX_STACK_LINE(28)
		::String tmp7 = source->att->resolve(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		tmp6 = ::Std_obj::parseFloat(tmp7);
	}
	else{
		HX_STACK_LINE(28)
		tmp6 = ((Float)1.0);
	}
	HX_STACK_LINE(28)
	this->opacity = tmp6;
	HX_STACK_LINE(30)
	::haxe::xml::Fast tmp7 = source;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(30)
	this->loadProperties(tmp7);
}
;
	return null();
}

//TiledLayer_obj::~TiledLayer_obj() { }

Dynamic TiledLayer_obj::__CreateEmpty() { return  new TiledLayer_obj; }
hx::ObjectPtr< TiledLayer_obj > TiledLayer_obj::__new(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent)
{  hx::ObjectPtr< TiledLayer_obj > _result_ = new TiledLayer_obj();
	_result_->__construct(source,parent);
	return _result_;}

Dynamic TiledLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledLayer_obj > _result_ = new TiledLayer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void TiledLayer_obj::loadProperties( ::haxe::xml::Fast source){
{
		HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","loadProperties",0x66f78643,"flixel.addons.editors.tiled.TiledLayer.loadProperties","flixel/addons/editors/tiled/TiledLayer.hx",35,0x30daee78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(35)
		::_List::ListIterator tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::List tmp1 = source->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			::List _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(35)
			tmp = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(35)
		::_List::ListIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		while((true)){
			HX_STACK_LINE(35)
			bool tmp1 = (_g->head != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			if ((tmp2)){
				HX_STACK_LINE(35)
				break;
			}
			HX_STACK_LINE(35)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				Dynamic tmp4 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(35)
				_g->val = tmp4;
				HX_STACK_LINE(35)
				Dynamic tmp5 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(35)
				_g->head = tmp5;
				HX_STACK_LINE(35)
				tmp3 = _g->val;
			}
			HX_STACK_LINE(35)
			::haxe::xml::Fast node = ((::haxe::xml::Fast)(tmp3));		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(37)
			::flixel::addons::editors::tiled::TiledPropertySet tmp4 = this->properties;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			::haxe::xml::Fast tmp5 = node;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			tmp4->extend(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,loadProperties,(void))


TiledLayer_obj::TiledLayer_obj()
{
}

void TiledLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledLayer);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_END_CLASS();
}

void TiledLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(properties,"properties");
}

Dynamic TiledLayer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadProperties") ) { return loadProperties_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::flixel::addons::editors::tiled::TiledMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::flixel::addons::editors::tiled::TiledLayerType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledLayerType*/ ,(int)offsetof(TiledLayer_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledMap*/ ,(int)offsetof(TiledLayer_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsString,(int)offsetof(TiledLayer_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsFloat,(int)offsetof(TiledLayer_obj,opacity),HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb")},
	{hx::fsBool,(int)offsetof(TiledLayer_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledLayer_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("loadProperties","\xb9","\x05","\xc0","\xf7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledLayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledLayer_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledLayer_obj::__mClass;

void TiledLayer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledLayer","\xa4","\x0c","\xa7","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledLayer_obj >;
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
