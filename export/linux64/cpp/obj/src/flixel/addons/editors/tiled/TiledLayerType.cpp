#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayerType
#include <flixel/addons/editors/tiled/TiledLayerType.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

::flixel::addons::editors::tiled::TiledLayerType TiledLayerType_obj::IMAGE;

::flixel::addons::editors::tiled::TiledLayerType TiledLayerType_obj::OBJECT;

::flixel::addons::editors::tiled::TiledLayerType TiledLayerType_obj::TILE;

HX_DEFINE_CREATE_ENUM(TiledLayerType_obj)

int TiledLayerType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b")) return 2;
	if (inName==HX_HCSTRING("OBJECT","\xbf","\x2a","\xc2","\xc7")) return 1;
	if (inName==HX_HCSTRING("TILE","\x2e","\x93","\xbd","\x37")) return 0;
	return super::__FindIndex(inName);
}

int TiledLayerType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b")) return 0;
	if (inName==HX_HCSTRING("OBJECT","\xbf","\x2a","\xc2","\xc7")) return 0;
	if (inName==HX_HCSTRING("TILE","\x2e","\x93","\xbd","\x37")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TiledLayerType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b")) return IMAGE;
	if (inName==HX_HCSTRING("OBJECT","\xbf","\x2a","\xc2","\xc7")) return OBJECT;
	if (inName==HX_HCSTRING("TILE","\x2e","\x93","\xbd","\x37")) return TILE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("TILE","\x2e","\x93","\xbd","\x37"),
	HX_HCSTRING("OBJECT","\xbf","\x2a","\xc2","\xc7"),
	HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledLayerType_obj::IMAGE,"IMAGE");
	HX_MARK_MEMBER_NAME(TiledLayerType_obj::OBJECT,"OBJECT");
	HX_MARK_MEMBER_NAME(TiledLayerType_obj::TILE,"TILE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledLayerType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledLayerType_obj::IMAGE,"IMAGE");
	HX_VISIT_MEMBER_NAME(TiledLayerType_obj::OBJECT,"OBJECT");
	HX_VISIT_MEMBER_NAME(TiledLayerType_obj::TILE,"TILE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TiledLayerType_obj::__mClass;

Dynamic __Create_TiledLayerType_obj() { return new TiledLayerType_obj; }

void TiledLayerType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.addons.editors.tiled.TiledLayerType","\x7e","\x4d","\xb6","\x1a"), hx::TCanCast< TiledLayerType_obj >,sStaticFields,sMemberFields,
	&__Create_TiledLayerType_obj, &__Create,
	&super::__SGetClass(), &CreateTiledLayerType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TiledLayerType_obj::__boot()
{
hx::Static(IMAGE) = hx::CreateEnum< TiledLayerType_obj >(HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"),2);
hx::Static(OBJECT) = hx::CreateEnum< TiledLayerType_obj >(HX_HCSTRING("OBJECT","\xbf","\x2a","\xc2","\xc7"),1);
hx::Static(TILE) = hx::CreateEnum< TiledLayerType_obj >(HX_HCSTRING("TILE","\x2e","\x93","\xbd","\x37"),0);
}


} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
