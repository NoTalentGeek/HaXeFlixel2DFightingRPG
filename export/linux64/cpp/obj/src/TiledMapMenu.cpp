#include <hxcpp.h>

#ifndef INCLUDED_TiledMapMenu
#include <TiledMapMenu.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
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
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileLayer
#include <flixel/addons/editors/tiled/TiledTileLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif

Void TiledMapMenu_obj::__construct(::flixel::FlxState _flxState,::String _tiledDirectoryString)
{
HX_STACK_FRAME("TiledMapMenu","new",0xc8988317,"TiledMapMenu.new","TiledMapMenu.hx",23,0xc1c2ac39)
HX_STACK_THIS(this)
HX_STACK_ARG(_flxState,"_flxState")
HX_STACK_ARG(_tiledDirectoryString,"_tiledDirectoryString")
{
	HX_STACK_LINE(35)
	this->foregroundTileLayerFlxGroup = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(34)
	this->collisionLayerFlxTilemapArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(49)
	::String tmp = _tiledDirectoryString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	super::__construct(tmp);
	HX_STACK_LINE(50)
	::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	int tmp2 = this->fullWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	int tmp3 = this->fullHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	tmp1->setScrollBoundsRect((int)0,(int)0,tmp2,tmp3,true);
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		Array< ::Dynamic > _g1 = this->layers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(55)
		while((true)){
			HX_STACK_LINE(55)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			if ((tmp5)){
				HX_STACK_LINE(55)
				break;
			}
			HX_STACK_LINE(55)
			::flixel::addons::editors::tiled::TiledLayer tmp6 = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			::flixel::addons::editors::tiled::TiledLayer _tiledLayer = tmp6;		HX_STACK_VAR(_tiledLayer,"_tiledLayer");
			HX_STACK_LINE(55)
			++(_g);
			HX_STACK_LINE(57)
			bool tmp7 = (_tiledLayer->type != ::flixel::addons::editors::tiled::TiledLayerType_obj::TILE);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(57)
			if ((tmp7)){
				HX_STACK_LINE(57)
				continue;
			}
			HX_STACK_LINE(58)
			::flixel::addons::editors::tiled::TiledTileLayer tiledTileLayer = ((::flixel::addons::editors::tiled::TiledTileLayer)(_tiledLayer));		HX_STACK_VAR(tiledTileLayer,"tiledTileLayer");
			HX_STACK_LINE(61)
			::haxe::ds::StringMap tmp8 = tiledTileLayer->properties->keys;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			::String tmp9 = tmp8->get(HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			::String tileSheetNameString = tmp9;		HX_STACK_VAR(tileSheetNameString,"tileSheetNameString");
			HX_STACK_LINE(62)
			bool tmp10 = (tileSheetNameString == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(62)
			if ((tmp10)){
				HX_STACK_LINE(65)
				::String tmp11 = (HX_HCSTRING("tileset custom properties is not yet set in ","\x2c","\xc7","\x93","\x4f") + tiledTileLayer->name);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(65)
				::String tmp12 = (tmp11 + HX_HCSTRING(". Please go back and add a tileset custom properties in Tiled map editor.","\x8e","\xf5","\xd5","\xae"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(64)
				HX_STACK_DO_THROW(tmp12);
			}
			HX_STACK_LINE(71)
			::flixel::addons::editors::tiled::TiledTileSet tileSetTiledTileSet = null();		HX_STACK_VAR(tileSetTiledTileSet,"tileSetTiledTileSet");
			HX_STACK_LINE(75)
			::haxe::ds::StringMap tmp11 = this->tilesets;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(75)
			Dynamic tmp12 = tmp11->iterator();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(75)
			for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >(tmp12);  __it->hasNext(); ){
				::flixel::addons::editors::tiled::TiledTileSet _tileSetTiledTileSet = __it->next();
				{
					HX_STACK_LINE(77)
					bool tmp13 = (_tileSetTiledTileSet->name == tileSheetNameString);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(77)
					if ((tmp13)){
						HX_STACK_LINE(79)
						tileSetTiledTileSet = _tileSetTiledTileSet;
						HX_STACK_LINE(80)
						break;
					}
				}
;
			}
			HX_STACK_LINE(86)
			bool tmp13 = (tileSetTiledTileSet == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(86)
			if ((tmp13)){
				HX_STACK_LINE(89)
				::String tmp14 = (HX_HCSTRING("Tileset ","\x8c","\x48","\x2f","\x75") + tileSheetNameString);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(89)
				::String tmp15 = (tmp14 + HX_HCSTRING(" not found. Did you misspell the tileset custom property in ","\x5e","\x33","\x4d","\xae"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(91)
				::String tmp16 = tiledTileLayer->name;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(89)
				::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(89)
				::String tmp18 = (tmp17 + HX_HCSTRING("' layer?","\x27","\x50","\x0f","\x42"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(88)
				HX_STACK_DO_THROW(tmp18);
			}
			HX_STACK_LINE(96)
			::haxe::io::Path tmp14 = ::haxe::io::Path_obj::__new(tileSetTiledTileSet->imageSource);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(96)
			::haxe::io::Path imagePath = tmp14;		HX_STACK_VAR(imagePath,"imagePath");
			HX_STACK_LINE(98)
			::String tmp15 = (HX_HCSTRING("assets/tiled/Menu/Tileset/","\xc6","\x11","\xf3","\xe1") + imagePath->file);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(98)
			::String tmp16 = (tmp15 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(98)
			::String tmp17 = imagePath->ext;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(98)
			::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(98)
			::String processedString = tmp18;		HX_STACK_VAR(processedString,"processedString");
			HX_STACK_LINE(101)
			::flixel::tile::FlxTilemap tmp19 = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(101)
			::flixel::tile::FlxTilemap tileMapFlxTilemap = tmp19;		HX_STACK_VAR(tileMapFlxTilemap,"tileMapFlxTilemap");
			HX_STACK_LINE(103)
			int tmp20 = this->width;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(103)
			int tmp21 = this->height;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(104)
			::String tmp22 = processedString;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(105)
			int tmp23 = tileSetTiledTileSet->tileWidth;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(106)
			int tmp24 = tileSetTiledTileSet->tileHeight;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(107)
			int tmp25 = tileSetTiledTileSet->firstGID;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(102)
			tileMapFlxTilemap->loadMapFromArray(tiledTileLayer->get_tileArray(),tmp20,tmp21,tmp22,tmp23,tmp24,::flixel::tile::FlxTilemapAutoTiling_obj::OFF,tmp25,(int)1,(int)1);
			HX_STACK_LINE(109)
			tileMapFlxTilemap->useScaleHack = false;
			HX_STACK_LINE(111)
			bool tmp26 = (this->collisionLayerFlxTilemapArray == null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(111)
			if ((tmp26)){
				HX_STACK_LINE(113)
				this->collisionLayerFlxTilemapArray = Array_obj< ::Dynamic >::__new();
			}
			HX_STACK_LINE(117)
			::flixel::tile::FlxTilemap tmp27 = tileMapFlxTilemap;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(117)
			this->collisionLayerFlxTilemapArray->push(tmp27);
			HX_STACK_LINE(118)
			::flixel::group::FlxTypedGroup tmp28 = this->foregroundTileLayerFlxGroup;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(118)
			::flixel::tile::FlxTilemap tmp29 = tileMapFlxTilemap;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(118)
			tmp28->add(tmp29);
		}
	}
}
;
	return null();
}

//TiledMapMenu_obj::~TiledMapMenu_obj() { }

Dynamic TiledMapMenu_obj::__CreateEmpty() { return  new TiledMapMenu_obj; }
hx::ObjectPtr< TiledMapMenu_obj > TiledMapMenu_obj::__new(::flixel::FlxState _flxState,::String _tiledDirectoryString)
{  hx::ObjectPtr< TiledMapMenu_obj > _result_ = new TiledMapMenu_obj();
	_result_->__construct(_flxState,_tiledDirectoryString);
	return _result_;}

Dynamic TiledMapMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledMapMenu_obj > _result_ = new TiledMapMenu_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool TiledMapMenu_obj::ObjectCollideWithLayerBool( ::flixel::FlxObject _flxObject,Dynamic _notifyFunction,Dynamic _processFunction){
	HX_STACK_FRAME("TiledMapMenu","ObjectCollideWithLayerBool",0xc9a61dff,"TiledMapMenu.ObjectCollideWithLayerBool","TiledMapMenu.hx",133,0xc1c2ac39)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_flxObject,"_flxObject")
	HX_STACK_ARG(_notifyFunction,"_notifyFunction")
	HX_STACK_ARG(_processFunction,"_processFunction")
	HX_STACK_LINE(135)
	bool tmp = (this->collisionLayerFlxTilemapArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	if ((tmp)){
		HX_STACK_LINE(135)
		return false;
	}
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		Array< ::Dynamic > _g1 = this->collisionLayerFlxTilemapArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(137)
		while((true)){
			HX_STACK_LINE(137)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(137)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			if ((tmp2)){
				HX_STACK_LINE(137)
				break;
			}
			HX_STACK_LINE(137)
			::flixel::tile::FlxTilemap tmp3 = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemap >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			::flixel::tile::FlxTilemap _flxTilemap = tmp3;		HX_STACK_VAR(_flxTilemap,"_flxTilemap");
			HX_STACK_LINE(137)
			++(_g);
			HX_STACK_LINE(143)
			::flixel::tile::FlxTilemap tmp4 = _flxTilemap;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(143)
			::flixel::FlxObject tmp5 = _flxObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			Dynamic tmp6 = _notifyFunction;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			bool tmp7 = (_processFunction != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			if ((tmp7)){
				HX_STACK_LINE(144)
				tmp8 = _processFunction;
			}
			else{
				HX_STACK_LINE(144)
				tmp8 = ::flixel::FlxObject_obj::separate_dyn();
			}
			HX_STACK_LINE(142)
			bool tmp9 = ::flixel::FlxG_obj::overlap(tmp4,tmp5,tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(141)
			if ((tmp9)){
				HX_STACK_LINE(146)
				return true;
			}
		}
	}
	HX_STACK_LINE(149)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(TiledMapMenu_obj,ObjectCollideWithLayerBool,return )

::String TiledMapMenu_obj::c_MAP_TILESET_DIRECTORY_STRING;


TiledMapMenu_obj::TiledMapMenu_obj()
{
}

void TiledMapMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledMapMenu);
	HX_MARK_MEMBER_NAME(collisionLayerFlxTilemapArray,"collisionLayerFlxTilemapArray");
	HX_MARK_MEMBER_NAME(foregroundTileLayerFlxGroup,"foregroundTileLayerFlxGroup");
	::flixel::addons::editors::tiled::TiledMap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledMapMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collisionLayerFlxTilemapArray,"collisionLayerFlxTilemapArray");
	HX_VISIT_MEMBER_NAME(foregroundTileLayerFlxGroup,"foregroundTileLayerFlxGroup");
	::flixel::addons::editors::tiled::TiledMap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TiledMapMenu_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"ObjectCollideWithLayerBool") ) { return ObjectCollideWithLayerBool_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"foregroundTileLayerFlxGroup") ) { return foregroundTileLayerFlxGroup; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"collisionLayerFlxTilemapArray") ) { return collisionLayerFlxTilemapArray; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledMapMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 27:
		if (HX_FIELD_EQ(inName,"foregroundTileLayerFlxGroup") ) { foregroundTileLayerFlxGroup=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"collisionLayerFlxTilemapArray") ) { collisionLayerFlxTilemapArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledMapMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collisionLayerFlxTilemapArray","\xde","\x6c","\x34","\x80"));
	outFields->push(HX_HCSTRING("foregroundTileLayerFlxGroup","\x0d","\x34","\x7f","\x51"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMapMenu_obj,collisionLayerFlxTilemapArray),HX_HCSTRING("collisionLayerFlxTilemapArray","\xde","\x6c","\x34","\x80")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(TiledMapMenu_obj,foregroundTileLayerFlxGroup),HX_HCSTRING("foregroundTileLayerFlxGroup","\x0d","\x34","\x7f","\x51")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TiledMapMenu_obj::c_MAP_TILESET_DIRECTORY_STRING,HX_HCSTRING("c_MAP_TILESET_DIRECTORY_STRING","\x8d","\x5a","\x4a","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collisionLayerFlxTilemapArray","\xde","\x6c","\x34","\x80"),
	HX_HCSTRING("foregroundTileLayerFlxGroup","\x0d","\x34","\x7f","\x51"),
	HX_HCSTRING("ObjectCollideWithLayerBool","\xd6","\x59","\x10","\x96"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledMapMenu_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TiledMapMenu_obj::c_MAP_TILESET_DIRECTORY_STRING,"c_MAP_TILESET_DIRECTORY_STRING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledMapMenu_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledMapMenu_obj::c_MAP_TILESET_DIRECTORY_STRING,"c_MAP_TILESET_DIRECTORY_STRING");
};

#endif

hx::Class TiledMapMenu_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("c_MAP_TILESET_DIRECTORY_STRING","\x8d","\x5a","\x4a","\x2b"),
	::String(null()) };

void TiledMapMenu_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TiledMapMenu","\xa5","\xab","\x0d","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledMapMenu_obj >;
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

void TiledMapMenu_obj::__boot()
{
	c_MAP_TILESET_DIRECTORY_STRING= HX_HCSTRING("assets/tiled/Menu/Tileset/","\xc6","\x11","\xf3","\xe1");
}

