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
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageTile
#include <flixel/addons/editors/tiled/TiledImageTile.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledImageTile_obj::__construct(::haxe::xml::Fast Source)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledImageTile","new",0xfa04df6e,"flixel.addons.editors.tiled.TiledImageTile.new","flixel/addons/editors/tiled/TiledImageTile.hx",19,0x0527e8a0)
HX_STACK_THIS(this)
HX_STACK_ARG(Source,"Source")
{
	HX_STACK_LINE(19)
	::_List::ListIterator tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		::List tmp1 = Source->nodes->resolve(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		::List _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(19)
		tmp = ::_List::ListIterator_obj::__new(_this->h);
	}
	HX_STACK_LINE(19)
	::_List::ListIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	while((true)){
		HX_STACK_LINE(19)
		bool tmp1 = (_g->head != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		if ((tmp2)){
			HX_STACK_LINE(19)
			break;
		}
		HX_STACK_LINE(19)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			Dynamic tmp4 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(19)
			_g->val = tmp4;
			HX_STACK_LINE(19)
			Dynamic tmp5 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(19)
			_g->head = tmp5;
			HX_STACK_LINE(19)
			tmp3 = _g->val;
		}
		HX_STACK_LINE(19)
		::haxe::xml::Fast img = ((::haxe::xml::Fast)(tmp3));		HX_STACK_VAR(img,"img");
		HX_STACK_LINE(21)
		::String tmp4 = img->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(21)
		Float tmp5 = ::Std_obj::parseFloat(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		this->width = tmp5;
		HX_STACK_LINE(22)
		::String tmp6 = img->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		Float tmp7 = ::Std_obj::parseFloat(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(22)
		this->height = tmp7;
		HX_STACK_LINE(23)
		::String tmp8 = img->att->resolve(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(23)
		this->source = tmp8;
	}
}
;
	return null();
}

//TiledImageTile_obj::~TiledImageTile_obj() { }

Dynamic TiledImageTile_obj::__CreateEmpty() { return  new TiledImageTile_obj; }
hx::ObjectPtr< TiledImageTile_obj > TiledImageTile_obj::__new(::haxe::xml::Fast Source)
{  hx::ObjectPtr< TiledImageTile_obj > _result_ = new TiledImageTile_obj();
	_result_->__construct(Source);
	return _result_;}

Dynamic TiledImageTile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledImageTile_obj > _result_ = new TiledImageTile_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


TiledImageTile_obj::TiledImageTile_obj()
{
}

void TiledImageTile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledImageTile);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_END_CLASS();
}

void TiledImageTile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(source,"source");
}

Dynamic TiledImageTile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"source") ) { return source; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledImageTile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledImageTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TiledImageTile_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TiledImageTile_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(TiledImageTile_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsString,(int)offsetof(TiledImageTile_obj,source),HX_HCSTRING("source","\xdb","\xb0","\x31","\x32")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledImageTile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledImageTile_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledImageTile_obj::__mClass;

void TiledImageTile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledImageTile","\x7c","\x50","\xb1","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledImageTile_obj >;
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
