#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

::String AssetPaths_obj::sounds_go_here__txt;

::String AssetPaths_obj::Map1__tmx;

::String AssetPaths_obj::coin__png;

::String AssetPaths_obj::capa01_B__png;

::String AssetPaths_obj::capa01_A__png;

::String AssetPaths_obj::logo__png;

::String AssetPaths_obj::level__tmx;

::String AssetPaths_obj::level__png;

::String AssetPaths_obj::spr0002__png;

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::spr0001__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::music_goes_here__txt;


AssetPaths_obj::AssetPaths_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &AssetPaths_obj::sounds_go_here__txt,HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02")},
	{hx::fsString,(void *) &AssetPaths_obj::Map1__tmx,HX_HCSTRING("Map1__tmx","\x6a","\x3b","\xcf","\xd9")},
	{hx::fsString,(void *) &AssetPaths_obj::coin__png,HX_HCSTRING("coin__png","\x58","\x3a","\xfc","\x5b")},
	{hx::fsString,(void *) &AssetPaths_obj::capa01_B__png,HX_HCSTRING("capa01_B__png","\xd6","\x91","\xa1","\x64")},
	{hx::fsString,(void *) &AssetPaths_obj::capa01_A__png,HX_HCSTRING("capa01_A__png","\x77","\x35","\x46","\xfe")},
	{hx::fsString,(void *) &AssetPaths_obj::logo__png,HX_HCSTRING("logo__png","\x3e","\x5a","\xa9","\xd9")},
	{hx::fsString,(void *) &AssetPaths_obj::level__tmx,HX_HCSTRING("level__tmx","\xbb","\x31","\xa1","\x3e")},
	{hx::fsString,(void *) &AssetPaths_obj::level__png,HX_HCSTRING("level__png","\x85","\x29","\x9e","\x3e")},
	{hx::fsString,(void *) &AssetPaths_obj::spr0002__png,HX_HCSTRING("spr0002__png","\x72","\xae","\x3f","\x8e")},
	{hx::fsString,(void *) &AssetPaths_obj::data_goes_here__txt,HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8")},
	{hx::fsString,(void *) &AssetPaths_obj::spr0001__png,HX_HCSTRING("spr0001__png","\x13","\x52","\xe4","\x27")},
	{hx::fsString,(void *) &AssetPaths_obj::images_go_here__txt,HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93")},
	{hx::fsString,(void *) &AssetPaths_obj::music_goes_here__txt,HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Map1__tmx,"Map1__tmx");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::coin__png,"coin__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::capa01_B__png,"capa01_B__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::capa01_A__png,"capa01_A__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::logo__png,"logo__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::level__tmx,"level__tmx");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::level__png,"level__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::spr0002__png,"spr0002__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::spr0001__png,"spr0001__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Map1__tmx,"Map1__tmx");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::coin__png,"coin__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::capa01_B__png,"capa01_B__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::capa01_A__png,"capa01_A__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::logo__png,"logo__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::level__tmx,"level__tmx");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::level__png,"level__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::spr0002__png,"spr0002__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::spr0001__png,"spr0001__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
};

#endif

hx::Class AssetPaths_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02"),
	HX_HCSTRING("Map1__tmx","\x6a","\x3b","\xcf","\xd9"),
	HX_HCSTRING("coin__png","\x58","\x3a","\xfc","\x5b"),
	HX_HCSTRING("capa01_B__png","\xd6","\x91","\xa1","\x64"),
	HX_HCSTRING("capa01_A__png","\x77","\x35","\x46","\xfe"),
	HX_HCSTRING("logo__png","\x3e","\x5a","\xa9","\xd9"),
	HX_HCSTRING("level__tmx","\xbb","\x31","\xa1","\x3e"),
	HX_HCSTRING("level__png","\x85","\x29","\x9e","\x3e"),
	HX_HCSTRING("spr0002__png","\x72","\xae","\x3f","\x8e"),
	HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8"),
	HX_HCSTRING("spr0001__png","\x13","\x52","\xe4","\x27"),
	HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93"),
	HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f"),
	::String(null()) };

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetPaths_obj >;
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

void AssetPaths_obj::__boot()
{
	sounds_go_here__txt= HX_HCSTRING("assets/sounds/sounds-go-here.txt","\x8d","\xb6","\x3d","\xa7");
	Map1__tmx= HX_HCSTRING("assets/tiled/Map1.tmx","\x6b","\x60","\x57","\xd4");
	coin__png= HX_HCSTRING("assets/tiled/PROTOTYPE/coin.png","\x3e","\x0f","\xec","\x07");
	capa01_B__png= HX_HCSTRING("assets/tiled/PROTOTYPE/decorations/capa01_B.png","\x0c","\x7d","\x4b","\xfb");
	capa01_A__png= HX_HCSTRING("assets/tiled/PROTOTYPE/decorations/capa01_A.png","\x8b","\xe8","\xe4","\x67");
	logo__png= HX_HCSTRING("assets/tiled/PROTOTYPE/logo.png","\x18","\xee","\x61","\xd1");
	level__tmx= HX_HCSTRING("assets/tiled/PROTOTYPE/level.tmx","\xc3","\xc0","\xc2","\x1f");
	level__png= HX_HCSTRING("assets/tiled/PROTOTYPE/level.png","\x8d","\xb8","\xbf","\x1f");
	spr0002__png= HX_HCSTRING("assets/tiled/spr0002.png","\x4d","\x83","\xfd","\xc2");
	data_goes_here__txt= HX_HCSTRING("assets/data/data-goes-here.txt","\x5f","\x4b","\xb2","\x8e");
	spr0001__png= HX_HCSTRING("assets/images/spr0001.png","\x26","\x4a","\x56","\xb0");
	images_go_here__txt= HX_HCSTRING("assets/images/images-go-here.txt","\x0d","\x1d","\x45","\xa6");
	music_goes_here__txt= HX_HCSTRING("assets/music/music-goes-here.txt","\x6b","\x32","\x60","\x47");
}

