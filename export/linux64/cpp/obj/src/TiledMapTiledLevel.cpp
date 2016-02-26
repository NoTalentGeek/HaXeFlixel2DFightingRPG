#include <hxcpp.h>

#ifndef INCLUDED_FlxStateMenu
#include <FlxStateMenu.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TiledMapTiledLevel
#include <TiledMapTiledLevel.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageLayer
#include <flixel/addons/editors/tiled/TiledImageLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageTile
#include <flixel/addons/editors/tiled/TiledImageTile.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif

Void TiledMapTiledLevel_obj::__construct(Dynamic tiledLevel,::FlxStateMenu state)
{
HX_STACK_FRAME("TiledMapTiledLevel","new",0x6d41b5a6,"TiledMapTiledLevel.new","TiledMapTiledLevel.hx",41,0xda9b408a)
HX_STACK_THIS(this)
HX_STACK_ARG(tiledLevel,"tiledLevel")
HX_STACK_ARG(state,"state")
{
	HX_STACK_LINE(42)
	Dynamic tmp = tiledLevel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("TiledMapTiledLevel.hx","\x8a","\x40","\x9b","\xda"),42,HX_HCSTRING("TiledMapTiledLevel","\xb4","\xaa","\xc8","\x07"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	::haxe::Log_obj::trace(tmp,tmp1);
	HX_STACK_LINE(43)
	Dynamic tmp2 = tiledLevel;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	super::__construct(tmp2);
	HX_STACK_LINE(45)
	::flixel::group::FlxTypedGroup tmp3 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	this->imagesLayer = tmp3;
	HX_STACK_LINE(46)
	::flixel::group::FlxTypedGroup tmp4 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	this->foregroundTiles = tmp4;
	HX_STACK_LINE(47)
	::flixel::group::FlxTypedGroup tmp5 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(47)
	this->objectsLayer = tmp5;
	HX_STACK_LINE(48)
	::flixel::group::FlxTypedGroup tmp6 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(48)
	this->backgroundLayer = tmp6;
	HX_STACK_LINE(50)
	::flixel::FlxCamera tmp7 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(50)
	int tmp8 = this->fullWidth;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(50)
	int tmp9 = this->fullHeight;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(50)
	tmp7->setScrollBoundsRect((int)0,(int)0,tmp8,tmp9,true);
	HX_STACK_LINE(52)
	this->loadImages();
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		Array< ::Dynamic > _g1 = this->layers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(55)
		while((true)){
			HX_STACK_LINE(55)
			bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(55)
			if ((tmp11)){
				HX_STACK_LINE(55)
				break;
			}
			HX_STACK_LINE(55)
			::flixel::addons::editors::tiled::TiledLayer tmp12 = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(55)
			::flixel::addons::editors::tiled::TiledLayer layer = tmp12;		HX_STACK_VAR(layer,"layer");
			HX_STACK_LINE(55)
			++(_g);
			HX_STACK_LINE(57)
			bool tmp13 = (layer->type != ::flixel::addons::editors::tiled::TiledLayerType_obj::TILE);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(57)
			if ((tmp13)){
				HX_STACK_LINE(57)
				continue;
			}
			HX_STACK_LINE(58)
			::flixel::addons::editors::tiled::TiledTileLayer tileLayer = ((::flixel::addons::editors::tiled::TiledTileLayer)(layer));		HX_STACK_VAR(tileLayer,"tileLayer");
			HX_STACK_LINE(60)
			::haxe::ds::StringMap tmp14 = tileLayer->properties->keys;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(60)
			::String tmp15 = tmp14->get(HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(60)
			::String tileSheetName = tmp15;		HX_STACK_VAR(tileSheetName,"tileSheetName");
			HX_STACK_LINE(62)
			bool tmp16 = (tileSheetName == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(62)
			if ((tmp16)){
				HX_STACK_LINE(63)
				::String tmp17 = (HX_HCSTRING("'tileset' property not defined for the '","\xb8","\xca","\x8f","\xc4") + tileLayer->name);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(63)
				::String tmp18 = (tmp17 + HX_HCSTRING("' layer. Please add the property to the layer.","\xc0","\x1d","\x19","\x20"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(63)
				HX_STACK_DO_THROW(tmp18);
			}
			HX_STACK_LINE(65)
			::flixel::addons::editors::tiled::TiledTileSet tileSet = null();		HX_STACK_VAR(tileSet,"tileSet");
			HX_STACK_LINE(66)
			::haxe::ds::StringMap tmp17 = this->tilesets;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(66)
			Dynamic tmp18 = tmp17->iterator();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(66)
			for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >(tmp18);  __it->hasNext(); ){
				::flixel::addons::editors::tiled::TiledTileSet ts = __it->next();
				{
					HX_STACK_LINE(68)
					bool tmp19 = (ts->name == tileSheetName);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(68)
					if ((tmp19)){
						HX_STACK_LINE(70)
						tileSet = ts;
						HX_STACK_LINE(71)
						break;
					}
				}
;
			}
			HX_STACK_LINE(75)
			bool tmp19 = (tileSet == null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(75)
			if ((tmp19)){
				HX_STACK_LINE(76)
				::String tmp20 = (HX_HCSTRING("Tileset '","\x1b","\x32","\x30","\x14") + tileSheetName);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(76)
				::String tmp21 = (tmp20 + HX_HCSTRING(" not found. Did you misspell the 'tilesheet' property in ","\x08","\x04","\x66","\x5f"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(76)
				::String tmp22 = tileLayer->name;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(76)
				::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(76)
				::String tmp24 = (tmp23 + HX_HCSTRING("' layer?","\x27","\x50","\x0f","\x42"));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(76)
				HX_STACK_DO_THROW(tmp24);
			}
			HX_STACK_LINE(78)
			::haxe::io::Path tmp20 = ::haxe::io::Path_obj::__new(tileSet->imageSource);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(78)
			::haxe::io::Path imagePath = tmp20;		HX_STACK_VAR(imagePath,"imagePath");
			HX_STACK_LINE(79)
			::String tmp21 = (HX_HCSTRING("assets/tiled/PROTOTYPE/","\xf2","\x4d","\x87","\x0d") + imagePath->file);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(79)
			::String tmp22 = (tmp21 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(79)
			::String tmp23 = imagePath->ext;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(79)
			::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(79)
			::String processedPath = tmp24;		HX_STACK_VAR(processedPath,"processedPath");
			HX_STACK_LINE(81)
			::flixel::tile::FlxTilemap tmp25 = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(81)
			::flixel::tile::FlxTilemap tilemap = tmp25;		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(82)
			int tmp26 = this->width;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(82)
			int tmp27 = this->height;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(82)
			::String tmp28 = processedPath;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(83)
			int tmp29 = tileSet->tileWidth;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(83)
			int tmp30 = tileSet->tileHeight;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(83)
			int tmp31 = tileSet->firstGID;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(82)
			tilemap->loadMapFromArray(tileLayer->get_tileArray(),tmp26,tmp27,tmp28,tmp29,tmp30,::flixel::tile::FlxTilemapAutoTiling_obj::OFF,tmp31,(int)1,(int)1);
			HX_STACK_LINE(85)
			::FlxStateMenu tmp32 = state;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(85)
			this->loadObjects(tmp32);
			HX_STACK_LINE(87)
			::haxe::ds::StringMap tmp33 = tileLayer->properties->keys;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(87)
			bool tmp34 = tmp33->exists(HX_HCSTRING("nocollide","\x5d","\x49","\xfe","\x5d"));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(87)
			if ((tmp34)){
				HX_STACK_LINE(89)
				::flixel::group::FlxTypedGroup tmp35 = this->backgroundLayer;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(89)
				::flixel::tile::FlxTilemap tmp36 = tilemap;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(89)
				tmp35->add(tmp36);
			}
			else{
				HX_STACK_LINE(93)
				bool tmp35 = (this->collidableTileLayers == null());		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(93)
				if ((tmp35)){
					HX_STACK_LINE(94)
					this->collidableTileLayers = Array_obj< ::Dynamic >::__new();
				}
				HX_STACK_LINE(96)
				::flixel::group::FlxTypedGroup tmp36 = this->foregroundTiles;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(96)
				::flixel::tile::FlxTilemap tmp37 = tilemap;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(96)
				tmp36->add(tmp37);
				HX_STACK_LINE(97)
				::flixel::tile::FlxTilemap tmp38 = tilemap;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(97)
				this->collidableTileLayers->push(tmp38);
			}
		}
	}
}
;
	return null();
}

//TiledMapTiledLevel_obj::~TiledMapTiledLevel_obj() { }

Dynamic TiledMapTiledLevel_obj::__CreateEmpty() { return  new TiledMapTiledLevel_obj; }
hx::ObjectPtr< TiledMapTiledLevel_obj > TiledMapTiledLevel_obj::__new(Dynamic tiledLevel,::FlxStateMenu state)
{  hx::ObjectPtr< TiledMapTiledLevel_obj > _result_ = new TiledMapTiledLevel_obj();
	_result_->__construct(tiledLevel,state);
	return _result_;}

Dynamic TiledMapTiledLevel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledMapTiledLevel_obj > _result_ = new TiledMapTiledLevel_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void TiledMapTiledLevel_obj::loadObjects( ::FlxStateMenu state){
{
		HX_STACK_FRAME("TiledMapTiledLevel","loadObjects",0x95cac294,"TiledMapTiledLevel.loadObjects","TiledMapTiledLevel.hx",103,0xda9b408a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(104)
		::flixel::addons::editors::tiled::TiledObjectLayer layer;		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			Array< ::Dynamic > _g1 = this->layers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(105)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(105)
				if ((tmp1)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				::flixel::addons::editors::tiled::TiledLayer tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(105)
				::flixel::addons::editors::tiled::TiledLayer layer1 = tmp2;		HX_STACK_VAR(layer1,"layer1");
				HX_STACK_LINE(105)
				++(_g);
				HX_STACK_LINE(107)
				bool tmp3 = (layer1->type != ::flixel::addons::editors::tiled::TiledLayerType_obj::OBJECT);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(107)
				if ((tmp3)){
					HX_STACK_LINE(108)
					continue;
				}
				HX_STACK_LINE(109)
				::flixel::addons::editors::tiled::TiledObjectLayer objectLayer = ((::flixel::addons::editors::tiled::TiledObjectLayer)(layer1));		HX_STACK_VAR(objectLayer,"objectLayer");
				HX_STACK_LINE(112)
				bool tmp4 = (layer1->name == HX_HCSTRING("images","\xb8","\x50","\x92","\xfe"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(112)
				if ((tmp4)){
					HX_STACK_LINE(114)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(114)
					Array< ::Dynamic > _g3 = objectLayer->objects;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(114)
					while((true)){
						HX_STACK_LINE(114)
						bool tmp5 = (_g2 < _g3->length);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(114)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(114)
						if ((tmp6)){
							HX_STACK_LINE(114)
							break;
						}
						HX_STACK_LINE(114)
						::flixel::addons::editors::tiled::TiledObject tmp7 = _g3->__get(_g2).StaticCast< ::flixel::addons::editors::tiled::TiledObject >();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(114)
						::flixel::addons::editors::tiled::TiledObject o = tmp7;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(114)
						++(_g2);
						HX_STACK_LINE(116)
						::flixel::addons::editors::tiled::TiledObject tmp8 = o;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(116)
						this->loadImageObject(tmp8);
					}
				}
				HX_STACK_LINE(121)
				bool tmp5 = (layer1->name == HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(121)
				if ((tmp5)){
					HX_STACK_LINE(123)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(123)
					Array< ::Dynamic > _g3 = objectLayer->objects;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(123)
					while((true)){
						HX_STACK_LINE(123)
						bool tmp6 = (_g2 < _g3->length);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(123)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(123)
						if ((tmp7)){
							HX_STACK_LINE(123)
							break;
						}
						HX_STACK_LINE(123)
						::flixel::addons::editors::tiled::TiledObject tmp8 = _g3->__get(_g2).StaticCast< ::flixel::addons::editors::tiled::TiledObject >();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(123)
						::flixel::addons::editors::tiled::TiledObject o = tmp8;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(123)
						++(_g2);
						HX_STACK_LINE(125)
						::FlxStateMenu tmp9 = state;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(125)
						::flixel::addons::editors::tiled::TiledObject tmp10 = o;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(125)
						::flixel::addons::editors::tiled::TiledObjectLayer tmp11 = objectLayer;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(125)
						::flixel::group::FlxTypedGroup tmp12 = this->objectsLayer;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(125)
						this->loadObject(tmp9,tmp10,tmp11,tmp12);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMapTiledLevel_obj,loadObjects,(void))

Void TiledMapTiledLevel_obj::loadImageObject( ::flixel::addons::editors::tiled::TiledObject object){
{
		HX_STACK_FRAME("TiledMapTiledLevel","loadImageObject",0x810ac23a,"TiledMapTiledLevel.loadImageObject","TiledMapTiledLevel.hx",132,0xda9b408a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(133)
		::flixel::addons::editors::tiled::TiledTileSet tmp = this->getTileSet(HX_HCSTRING("imageCollection","\x99","\xd1","\xe9","\xde"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::flixel::addons::editors::tiled::TiledTileSet tilesImageCollection = tmp;		HX_STACK_VAR(tilesImageCollection,"tilesImageCollection");
		HX_STACK_LINE(134)
		int tmp1 = object->gid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		::flixel::addons::editors::tiled::TiledImageTile tmp2 = tilesImageCollection->getImageSourceByGid(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		::flixel::addons::editors::tiled::TiledImageTile tileImagesSource = tmp2;		HX_STACK_VAR(tileImagesSource,"tileImagesSource");
		HX_STACK_LINE(137)
		::String levelsDir = HX_HCSTRING("assets/tiled/PROTOTYPE/","\xf2","\x4d","\x87","\x0d");		HX_STACK_VAR(levelsDir,"levelsDir");
		HX_STACK_LINE(139)
		::String tmp3 = (levelsDir + tileImagesSource->source);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		::flixel::FlxSprite tmp4 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		::flixel::FlxSprite decoSprite = tmp4;		HX_STACK_VAR(decoSprite,"decoSprite");
		HX_STACK_LINE(140)
		Float tmp5 = decoSprite->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		int tmp6 = object->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(140)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(140)
		if ((tmp8)){
			HX_STACK_LINE(141)
			Float tmp10 = decoSprite->get_height();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(141)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(141)
			int tmp12 = object->height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(141)
			tmp9 = (tmp11 != tmp12);
		}
		else{
			HX_STACK_LINE(140)
			tmp9 = true;
		}
		HX_STACK_LINE(140)
		if ((tmp9)){
			HX_STACK_LINE(143)
			decoSprite->set_antialiasing(true);
			HX_STACK_LINE(144)
			int tmp10 = object->width;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(144)
			int tmp11 = object->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(144)
			decoSprite->setGraphicSize(tmp10,tmp11);
		}
		HX_STACK_LINE(146)
		int tmp10 = object->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(146)
		int tmp11 = object->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(146)
		Float tmp12 = decoSprite->get_height();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(146)
		Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(146)
		decoSprite->setPosition(tmp10,tmp13);
		HX_STACK_LINE(147)
		Float tmp14 = decoSprite->get_height();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(147)
		decoSprite->origin->set((int)0,tmp14);
		HX_STACK_LINE(148)
		bool tmp15 = (object->angle != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(148)
		if ((tmp15)){
			HX_STACK_LINE(150)
			Float tmp16 = object->angle;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(150)
			decoSprite->set_angle(tmp16);
			HX_STACK_LINE(151)
			decoSprite->set_antialiasing(true);
		}
		HX_STACK_LINE(155)
		::haxe::ds::StringMap tmp16 = object->properties->keys;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(155)
		bool tmp17 = tmp16->exists(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(155)
		if ((tmp17)){
			HX_STACK_LINE(157)
			::haxe::ds::StringMap tmp18 = object->properties->keys;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(157)
			::String tmp19 = tmp18->get(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(157)
			::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(157)
			Float tmp21 = ::Std_obj::parseFloat(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(157)
			Float depth = tmp21;		HX_STACK_VAR(depth,"depth");
			HX_STACK_LINE(158)
			Float tmp22 = depth;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(158)
			Float tmp23 = depth;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(158)
			decoSprite->scrollFactor->set(tmp22,tmp23);
		}
		HX_STACK_LINE(161)
		::flixel::group::FlxTypedGroup tmp18 = this->backgroundLayer;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(161)
		::flixel::FlxSprite tmp19 = decoSprite;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(161)
		tmp18->add(tmp19);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMapTiledLevel_obj,loadImageObject,(void))

Void TiledMapTiledLevel_obj::loadObject( ::FlxStateMenu state,::flixel::addons::editors::tiled::TiledObject o,::flixel::addons::editors::tiled::TiledObjectLayer g,::flixel::group::FlxTypedGroup group){
{
		HX_STACK_FRAME("TiledMapTiledLevel","loadObject",0x48fe9cff,"TiledMapTiledLevel.loadObject","TiledMapTiledLevel.hx",165,0xda9b408a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_ARG(o,"o")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(group,"group")
		HX_STACK_LINE(166)
		int x = o->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(167)
		int y = o->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(170)
		bool tmp = (o->gid != (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		if ((tmp)){
			HX_STACK_LINE(171)
			int tmp1 = o->gid;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(171)
			::flixel::addons::editors::tiled::TiledTileSet tmp2 = g->map->getGidOwner(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(171)
			hx::SubEq(y,tmp2->tileHeight);
		}
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			::String tmp1 = o->type.toLowerCase();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(173)
			::String _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(173)
			::String tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(173)
			::String _switch_1 = (tmp2);
			if (  ( _switch_1==HX_HCSTRING("player_start","\xc4","\xe5","\x4f","\x47"))){
				HX_STACK_LINE(176)
				::flixel::FlxSprite tmp3 = ::flixel::FlxSprite_obj::__new(x,y,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(176)
				::flixel::FlxSprite player = tmp3;		HX_STACK_VAR(player,"player");
				HX_STACK_LINE(177)
				player->makeGraphic((int)32,(int)32,(int)-5631727,null(),null());
				HX_STACK_LINE(178)
				player->maxVelocity->set_x((int)160);
				HX_STACK_LINE(179)
				player->maxVelocity->set_y((int)400);
				HX_STACK_LINE(180)
				player->acceleration->set_y((int)400);
				HX_STACK_LINE(181)
				Float tmp4 = player->maxVelocity->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(181)
				Float tmp5 = (tmp4 * (int)4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(181)
				player->drag->set_x(tmp5);
				HX_STACK_LINE(182)
				::flixel::FlxCamera tmp6 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(182)
				::flixel::FlxSprite tmp7 = player;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(182)
				tmp6->follow(tmp7,null(),null());
				HX_STACK_LINE(184)
				::flixel::FlxSprite tmp8 = player;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(184)
				group->add(tmp8);
			}
			else if (  ( _switch_1==HX_HCSTRING("floor","\xcc","\xd1","\x96","\x02"))){
				HX_STACK_LINE(187)
				::flixel::FlxObject tmp3 = ::flixel::FlxObject_obj::__new(x,y,o->width,o->height);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(187)
				::flixel::FlxObject floor = tmp3;		HX_STACK_VAR(floor,"floor");
			}
			else if (  ( _switch_1==HX_HCSTRING("coin","\x91","\xb5","\xc4","\x41"))){
				HX_STACK_LINE(191)
				int tmp3 = o->gid;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(191)
				::flixel::addons::editors::tiled::TiledTileSet tmp4 = g->map->getGidOwner(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(191)
				::flixel::addons::editors::tiled::TiledTileSet tileset = tmp4;		HX_STACK_VAR(tileset,"tileset");
				HX_STACK_LINE(192)
				int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(192)
				int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(192)
				::String tmp7 = (HX_HCSTRING("assets/tiled/PROTOTYPE/","\xf2","\x4d","\x87","\x0d") + tileset->imageSource);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(192)
				::flixel::FlxSprite tmp8 = ::flixel::FlxSprite_obj::__new(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(192)
				::flixel::FlxSprite coin = tmp8;		HX_STACK_VAR(coin,"coin");
			}
			else if (  ( _switch_1==HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"))){
				HX_STACK_LINE(197)
				::flixel::FlxSprite tmp3 = ::flixel::FlxSprite_obj::__new(x,y,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(197)
				::flixel::FlxSprite exit = tmp3;		HX_STACK_VAR(exit,"exit");
				HX_STACK_LINE(198)
				exit->makeGraphic((int)32,(int)32,(int)-12632257,null(),null());
				HX_STACK_LINE(199)
				exit->set_exists(false);
				HX_STACK_LINE(201)
				::flixel::FlxSprite tmp4 = exit;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(201)
				group->add(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TiledMapTiledLevel_obj,loadObject,(void))

Void TiledMapTiledLevel_obj::loadImages( ){
{
		HX_STACK_FRAME("TiledMapTiledLevel","loadImages",0x32516ef8,"TiledMapTiledLevel.loadImages","TiledMapTiledLevel.hx",207,0xda9b408a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(207)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		Array< ::Dynamic > _g1 = this->layers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(207)
		while((true)){
			HX_STACK_LINE(207)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(207)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(207)
			if ((tmp1)){
				HX_STACK_LINE(207)
				break;
			}
			HX_STACK_LINE(207)
			::flixel::addons::editors::tiled::TiledLayer tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(207)
			::flixel::addons::editors::tiled::TiledLayer layer = tmp2;		HX_STACK_VAR(layer,"layer");
			HX_STACK_LINE(207)
			++(_g);
			HX_STACK_LINE(209)
			bool tmp3 = (layer->type != ::flixel::addons::editors::tiled::TiledLayerType_obj::IMAGE);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(209)
			if ((tmp3)){
				HX_STACK_LINE(210)
				continue;
			}
			HX_STACK_LINE(212)
			::flixel::addons::editors::tiled::TiledImageLayer image = ((::flixel::addons::editors::tiled::TiledImageLayer)(layer));		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(213)
			int tmp4 = image->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(213)
			int tmp5 = image->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(213)
			::String tmp6 = (HX_HCSTRING("assets/tiled/PROTOTYPE/","\xf2","\x4d","\x87","\x0d") + image->imagePath);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(213)
			::flixel::FlxSprite tmp7 = ::flixel::FlxSprite_obj::__new(tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(213)
			::flixel::FlxSprite sprite = tmp7;		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(214)
			::flixel::group::FlxTypedGroup tmp8 = this->imagesLayer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(214)
			::flixel::FlxSprite tmp9 = sprite;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(214)
			tmp8->add(tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TiledMapTiledLevel_obj,loadImages,(void))

bool TiledMapTiledLevel_obj::collideWithLevel( ::flixel::FlxObject obj,Dynamic notifyCallback,Dynamic processCallback){
	HX_STACK_FRAME("TiledMapTiledLevel","collideWithLevel",0x7ce4913a,"TiledMapTiledLevel.collideWithLevel","TiledMapTiledLevel.hx",219,0xda9b408a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_ARG(notifyCallback,"notifyCallback")
	HX_STACK_ARG(processCallback,"processCallback")
	HX_STACK_LINE(220)
	bool tmp = (this->collidableTileLayers == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	if ((tmp)){
		HX_STACK_LINE(221)
		return false;
	}
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(223)
		Array< ::Dynamic > _g1 = this->collidableTileLayers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(223)
		while((true)){
			HX_STACK_LINE(223)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(223)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(223)
			if ((tmp2)){
				HX_STACK_LINE(223)
				break;
			}
			HX_STACK_LINE(223)
			::flixel::tile::FlxTilemap tmp3 = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemap >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			::flixel::tile::FlxTilemap map = tmp3;		HX_STACK_VAR(map,"map");
			HX_STACK_LINE(223)
			++(_g);
			HX_STACK_LINE(227)
			::flixel::tile::FlxTilemap tmp4 = map;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			::flixel::FlxObject tmp5 = obj;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			Dynamic tmp6 = notifyCallback;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			bool tmp7 = (processCallback != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(227)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(227)
			if ((tmp7)){
				HX_STACK_LINE(227)
				tmp8 = processCallback;
			}
			else{
				HX_STACK_LINE(227)
				tmp8 = ::flixel::FlxObject_obj::separate_dyn();
			}
			HX_STACK_LINE(227)
			bool tmp9 = ::flixel::FlxG_obj::overlap(tmp4,tmp5,tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(227)
			if ((tmp9)){
				HX_STACK_LINE(229)
				return true;
			}
		}
	}
	HX_STACK_LINE(232)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(TiledMapTiledLevel_obj,collideWithLevel,return )

::String TiledMapTiledLevel_obj::c_PATH_LEVEL_TILESHEETS;


TiledMapTiledLevel_obj::TiledMapTiledLevel_obj()
{
}

void TiledMapTiledLevel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledMapTiledLevel);
	HX_MARK_MEMBER_NAME(foregroundTiles,"foregroundTiles");
	HX_MARK_MEMBER_NAME(objectsLayer,"objectsLayer");
	HX_MARK_MEMBER_NAME(backgroundLayer,"backgroundLayer");
	HX_MARK_MEMBER_NAME(collidableTileLayers,"collidableTileLayers");
	HX_MARK_MEMBER_NAME(imagesLayer,"imagesLayer");
	::flixel::addons::editors::tiled::TiledMap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledMapTiledLevel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(foregroundTiles,"foregroundTiles");
	HX_VISIT_MEMBER_NAME(objectsLayer,"objectsLayer");
	HX_VISIT_MEMBER_NAME(backgroundLayer,"backgroundLayer");
	HX_VISIT_MEMBER_NAME(collidableTileLayers,"collidableTileLayers");
	HX_VISIT_MEMBER_NAME(imagesLayer,"imagesLayer");
	::flixel::addons::editors::tiled::TiledMap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TiledMapTiledLevel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"loadObject") ) { return loadObject_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImages") ) { return loadImages_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imagesLayer") ) { return imagesLayer; }
		if (HX_FIELD_EQ(inName,"loadObjects") ) { return loadObjects_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectsLayer") ) { return objectsLayer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"foregroundTiles") ) { return foregroundTiles; }
		if (HX_FIELD_EQ(inName,"backgroundLayer") ) { return backgroundLayer; }
		if (HX_FIELD_EQ(inName,"loadImageObject") ) { return loadImageObject_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collideWithLevel") ) { return collideWithLevel_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"collidableTileLayers") ) { return collidableTileLayers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledMapTiledLevel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"imagesLayer") ) { imagesLayer=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectsLayer") ) { objectsLayer=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"foregroundTiles") ) { foregroundTiles=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundLayer") ) { backgroundLayer=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"collidableTileLayers") ) { collidableTileLayers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledMapTiledLevel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("foregroundTiles","\xc2","\xb1","\x53","\x58"));
	outFields->push(HX_HCSTRING("objectsLayer","\x5d","\x08","\x6e","\xa3"));
	outFields->push(HX_HCSTRING("backgroundLayer","\x03","\x5f","\xab","\x32"));
	outFields->push(HX_HCSTRING("collidableTileLayers","\xd1","\x36","\x80","\x6f"));
	outFields->push(HX_HCSTRING("imagesLayer","\xf9","\x05","\xa4","\x11"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(TiledMapTiledLevel_obj,foregroundTiles),HX_HCSTRING("foregroundTiles","\xc2","\xb1","\x53","\x58")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(TiledMapTiledLevel_obj,objectsLayer),HX_HCSTRING("objectsLayer","\x5d","\x08","\x6e","\xa3")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(TiledMapTiledLevel_obj,backgroundLayer),HX_HCSTRING("backgroundLayer","\x03","\x5f","\xab","\x32")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMapTiledLevel_obj,collidableTileLayers),HX_HCSTRING("collidableTileLayers","\xd1","\x36","\x80","\x6f")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(TiledMapTiledLevel_obj,imagesLayer),HX_HCSTRING("imagesLayer","\xf9","\x05","\xa4","\x11")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TiledMapTiledLevel_obj::c_PATH_LEVEL_TILESHEETS,HX_HCSTRING("c_PATH_LEVEL_TILESHEETS","\xdb","\x83","\x1a","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("foregroundTiles","\xc2","\xb1","\x53","\x58"),
	HX_HCSTRING("objectsLayer","\x5d","\x08","\x6e","\xa3"),
	HX_HCSTRING("backgroundLayer","\x03","\x5f","\xab","\x32"),
	HX_HCSTRING("collidableTileLayers","\xd1","\x36","\x80","\x6f"),
	HX_HCSTRING("imagesLayer","\xf9","\x05","\xa4","\x11"),
	HX_HCSTRING("loadObjects","\x4e","\x27","\xed","\x52"),
	HX_HCSTRING("loadImageObject","\xf4","\x0b","\xb7","\xa1"),
	HX_HCSTRING("loadObject","\x85","\xad","\x6a","\xca"),
	HX_HCSTRING("loadImages","\x7e","\x7f","\xbd","\xb3"),
	HX_HCSTRING("collideWithLevel","\x40","\xca","\xf8","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledMapTiledLevel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TiledMapTiledLevel_obj::c_PATH_LEVEL_TILESHEETS,"c_PATH_LEVEL_TILESHEETS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledMapTiledLevel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledMapTiledLevel_obj::c_PATH_LEVEL_TILESHEETS,"c_PATH_LEVEL_TILESHEETS");
};

#endif

hx::Class TiledMapTiledLevel_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("c_PATH_LEVEL_TILESHEETS","\xdb","\x83","\x1a","\xf5"),
	::String(null()) };

void TiledMapTiledLevel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TiledMapTiledLevel","\xb4","\xaa","\xc8","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledMapTiledLevel_obj >;
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

void TiledMapTiledLevel_obj::__boot()
{
	c_PATH_LEVEL_TILESHEETS= HX_HCSTRING("assets/tiled/PROTOTYPE/","\xf2","\x4d","\x87","\x0d");
}

