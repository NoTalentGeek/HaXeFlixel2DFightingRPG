#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageLayer
#include <flixel/addons/editors/tiled/TiledImageLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledMap_obj::__construct(Dynamic data)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","new",0xde9b4f21,"flixel.addons.editors.tiled.TiledMap.new","flixel/addons/editors/tiled/TiledMap.hx",14,0xfb5e15cd)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	struct _Function_1_1{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/editors/tiled/TiledMap.hx",46,0xfb5e15cd)
			{
				HX_STACK_LINE(46)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(46)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(46)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(46)
	this->layerMap = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/editors/tiled/TiledMap.hx",45,0xfb5e15cd)
			{
				HX_STACK_LINE(45)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(45)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(45)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(45)
	this->noLoadHash = _Function_1_2::Block();
	HX_STACK_LINE(40)
	this->layers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(38)
	this->tilesetArray = Array_obj< ::Dynamic >::__new();
	struct _Function_1_3{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/editors/tiled/TiledMap.hx",34,0xfb5e15cd)
			{
				HX_STACK_LINE(34)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(34)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(34)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(34)
	this->tilesets = _Function_1_3::Block();
	HX_STACK_LINE(29)
	this->properties = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();
	HX_STACK_LINE(53)
	::haxe::xml::Fast source = null();		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(54)
	::haxe::xml::Fast node = null();		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(56)
	Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	if ((tmp1)){
		HX_STACK_LINE(58)
		Dynamic tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		::String tmp3 = ::openfl::_legacy::Assets_obj::getText(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		::Xml tmp4 = ::Xml_obj::parse(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		::haxe::xml::Fast tmp5 = ::haxe::xml::Fast_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		source = tmp5;
	}
	else{
		HX_STACK_LINE(60)
		Dynamic tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::Xml >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		if ((tmp3)){
			HX_STACK_LINE(62)
			::haxe::xml::Fast tmp4 = ::haxe::xml::Fast_obj::__new(data);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			source = tmp4;
		}
	}
	HX_STACK_LINE(65)
	::haxe::xml::Fast tmp2 = source->node->resolve(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	source = tmp2;
	HX_STACK_LINE(67)
	::haxe::xml::Fast tmp3 = source;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	this->loadAttributes(tmp3);
	HX_STACK_LINE(68)
	::haxe::xml::Fast tmp4 = source;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	this->loadProperties(tmp4);
	HX_STACK_LINE(69)
	::haxe::xml::Fast tmp5 = source;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(69)
	this->loadTilesets(tmp5);
	HX_STACK_LINE(70)
	::haxe::xml::Fast tmp6 = source;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(70)
	this->loadLayers(tmp6);
}
;
	return null();
}

//TiledMap_obj::~TiledMap_obj() { }

Dynamic TiledMap_obj::__CreateEmpty() { return  new TiledMap_obj; }
hx::ObjectPtr< TiledMap_obj > TiledMap_obj::__new(Dynamic data)
{  hx::ObjectPtr< TiledMap_obj > _result_ = new TiledMap_obj();
	_result_->__construct(data);
	return _result_;}

Dynamic TiledMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledMap_obj > _result_ = new TiledMap_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TiledMap_obj::loadAttributes( ::haxe::xml::Fast source){
{
		HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","loadAttributes",0x4081997c,"flixel.addons.editors.tiled.TiledMap.loadAttributes","flixel/addons/editors/tiled/TiledMap.hx",74,0xfb5e15cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(75)
		::String tmp = source->att->resolve(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		if ((tmp1)){
			HX_STACK_LINE(75)
			tmp2 = source->att->resolve(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
		}
		else{
			HX_STACK_LINE(75)
			tmp2 = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
		}
		HX_STACK_LINE(75)
		this->version = tmp2;
		HX_STACK_LINE(76)
		::String tmp3 = source->att->resolve(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		if ((tmp4)){
			HX_STACK_LINE(76)
			tmp5 = source->att->resolve(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));
		}
		else{
			HX_STACK_LINE(76)
			tmp5 = HX_HCSTRING("orthogonal","\x79","\xf9","\xf3","\x18");
		}
		HX_STACK_LINE(76)
		this->orientation = tmp5;
		HX_STACK_LINE(77)
		bool tmp6 = source->has->resolve(HX_HCSTRING("backgroundcolor","\xb5","\xde","\x19","\x7a"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		if ((tmp6)){
			HX_STACK_LINE(77)
			::String tmp8 = source->att->resolve(HX_HCSTRING("backgroundcolor","\xb5","\xde","\x19","\x7a"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(77)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(77)
			tmp7 = (tmp9 != null());
		}
		else{
			HX_STACK_LINE(77)
			tmp7 = false;
		}
		HX_STACK_LINE(77)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(77)
		if ((tmp7)){
			HX_STACK_LINE(78)
			::String tmp9 = source->att->resolve(HX_HCSTRING("backgroundcolor","\xb5","\xde","\x19","\x7a"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(78)
			tmp8 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(tmp9);
		}
		else{
			HX_STACK_LINE(78)
			tmp8 = (int)0;
		}
		HX_STACK_LINE(77)
		this->backgroundColor = tmp8;
		HX_STACK_LINE(80)
		::String tmp9 = source->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(80)
		Dynamic tmp10 = ::Std_obj::parseInt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(80)
		this->width = tmp10;
		HX_STACK_LINE(81)
		::String tmp11 = source->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(81)
		Dynamic tmp12 = ::Std_obj::parseInt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(81)
		this->height = tmp12;
		HX_STACK_LINE(82)
		::String tmp13 = source->att->resolve(HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(82)
		Dynamic tmp14 = ::Std_obj::parseInt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(82)
		this->tileWidth = tmp14;
		HX_STACK_LINE(83)
		::String tmp15 = source->att->resolve(HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(83)
		Dynamic tmp16 = ::Std_obj::parseInt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(83)
		this->tileHeight = tmp16;
		HX_STACK_LINE(86)
		int tmp17 = this->width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(86)
		int tmp18 = this->tileWidth;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(86)
		int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(86)
		this->fullWidth = tmp19;
		HX_STACK_LINE(87)
		int tmp20 = this->height;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(87)
		int tmp21 = this->tileHeight;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(87)
		int tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(87)
		this->fullHeight = tmp22;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,loadAttributes,(void))

Void TiledMap_obj::loadProperties( ::haxe::xml::Fast source){
{
		HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","loadProperties",0x0a1eec98,"flixel.addons.editors.tiled.TiledMap.loadProperties","flixel/addons/editors/tiled/TiledMap.hx",91,0xfb5e15cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			::_List::ListIterator tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				::List tmp1 = source->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(92)
				::List _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(92)
				tmp = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(92)
			::_List::ListIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(92)
			while((true)){
				HX_STACK_LINE(92)
				bool tmp1 = (_g->head != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(92)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(92)
				if ((tmp2)){
					HX_STACK_LINE(92)
					break;
				}
				HX_STACK_LINE(92)
				Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					Dynamic tmp4 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(92)
					_g->val = tmp4;
					HX_STACK_LINE(92)
					Dynamic tmp5 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(92)
					_g->head = tmp5;
					HX_STACK_LINE(92)
					tmp3 = _g->val;
				}
				HX_STACK_LINE(92)
				::haxe::xml::Fast node = ((::haxe::xml::Fast)(tmp3));		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(94)
				::flixel::addons::editors::tiled::TiledPropertySet tmp4 = this->properties;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(94)
				::haxe::xml::Fast tmp5 = node;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(94)
				tmp4->extend(tmp5);
			}
		}
		HX_STACK_LINE(97)
		::flixel::addons::editors::tiled::TiledPropertySet tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		::String tmp1 = tmp->keys->get(HX_HCSTRING("noload","\xe7","\xae","\x73","\x2c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		::String noLoadStr = tmp1;		HX_STACK_VAR(noLoadStr,"noLoadStr");
		HX_STACK_LINE(98)
		bool tmp2 = (noLoadStr != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		if ((tmp2)){
			HX_STACK_LINE(100)
			::EReg tmp3 = ::EReg_obj::__new(HX_HCSTRING("[,;|]","\x8b","\x5e","\xb9","\x82"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			::String tmp4 = noLoadStr;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			Array< ::String > noLoadArr = tmp3->split(tmp4);		HX_STACK_VAR(noLoadArr,"noLoadArr");
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(102)
				while((true)){
					HX_STACK_LINE(102)
					bool tmp5 = (_g < noLoadArr->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(102)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(102)
					if ((tmp6)){
						HX_STACK_LINE(102)
						break;
					}
					HX_STACK_LINE(102)
					::String tmp7 = noLoadArr->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(102)
					::String s = tmp7;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(102)
					++(_g);
					HX_STACK_LINE(104)
					{
						HX_STACK_LINE(104)
						::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(104)
						::String tmp9 = ::StringTools_obj::trim(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(104)
						::String key = tmp9;		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(104)
						::haxe::ds::StringMap tmp10 = this->noLoadHash;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(104)
						::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(104)
						tmp10->set(tmp11,true);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,loadProperties,(void))

Void TiledMap_obj::loadTilesets( ::haxe::xml::Fast source){
{
		HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","loadTilesets",0x94e39a24,"flixel.addons.editors.tiled.TiledMap.loadTilesets","flixel/addons/editors/tiled/TiledMap.hx",111,0xfb5e15cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(111)
		::_List::ListIterator tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			::List tmp1 = source->nodes->resolve(HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			::List _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(111)
			tmp = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(111)
		::_List::ListIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		while((true)){
			HX_STACK_LINE(111)
			bool tmp1 = (_g->head != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			if ((tmp2)){
				HX_STACK_LINE(111)
				break;
			}
			HX_STACK_LINE(111)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				Dynamic tmp4 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(111)
				_g->val = tmp4;
				HX_STACK_LINE(111)
				Dynamic tmp5 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(111)
				_g->head = tmp5;
				HX_STACK_LINE(111)
				tmp3 = _g->val;
			}
			HX_STACK_LINE(111)
			::haxe::xml::Fast node = ((::haxe::xml::Fast)(tmp3));		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(113)
			::String tmp4 = node->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(113)
			::String name = tmp4;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(115)
			::haxe::ds::StringMap tmp5 = this->noLoadHash;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(115)
			if ((tmp8)){
				HX_STACK_LINE(117)
				::flixel::addons::editors::tiled::TiledTileSet tmp9 = ::flixel::addons::editors::tiled::TiledTileSet_obj::__new(node);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(117)
				::flixel::addons::editors::tiled::TiledTileSet ts = tmp9;		HX_STACK_VAR(ts,"ts");
				HX_STACK_LINE(118)
				::haxe::ds::StringMap tmp10 = this->tilesets;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(118)
				::String tmp11 = name;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(118)
				::flixel::addons::editors::tiled::TiledTileSet tmp12 = ts;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(118)
				tmp10->set(tmp11,tmp12);
				HX_STACK_LINE(119)
				::flixel::addons::editors::tiled::TiledTileSet tmp13 = ts;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(119)
				this->tilesetArray->push(tmp13);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,loadTilesets,(void))

Void TiledMap_obj::loadLayers( ::haxe::xml::Fast source){
{
		HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","loadLayers",0x89a88fa7,"flixel.addons.editors.tiled.TiledMap.loadLayers","flixel/addons/editors/tiled/TiledMap.hx",125,0xfb5e15cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(126)
		Dynamic tmp = source->get_elements();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp);  __it->hasNext(); ){
			::haxe::xml::Fast el = __it->next();
			{
				HX_STACK_LINE(128)
				bool tmp1 = el->has->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(128)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(128)
				if ((tmp1)){
					HX_STACK_LINE(128)
					::String tmp3 = el->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(128)
					::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(128)
					::String key = tmp4;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(128)
					::haxe::ds::StringMap tmp5 = this->noLoadHash;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(128)
					::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(128)
					::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(128)
					::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(128)
					tmp2 = tmp6->exists(tmp8);
				}
				else{
					HX_STACK_LINE(128)
					tmp2 = false;
				}
				HX_STACK_LINE(128)
				if ((tmp2)){
					HX_STACK_LINE(129)
					continue;
				}
				HX_STACK_LINE(131)
				::flixel::addons::editors::tiled::TiledLayer tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(131)
				{
					HX_STACK_LINE(131)
					::String tmp4 = el->get_name();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(131)
					::String tmp5 = tmp4.toLowerCase();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(131)
					::String _g = tmp5;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(131)
					::String tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(131)
					::String _switch_1 = (tmp6);
					if (  ( _switch_1==HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"))){
						HX_STACK_LINE(133)
						tmp3 = ::flixel::addons::editors::tiled::TiledTileLayer_obj::__new(el,hx::ObjectPtr<OBJ_>(this));
					}
					else if (  ( _switch_1==HX_HCSTRING("objectgroup","\x20","\x60","\xf6","\x75"))){
						HX_STACK_LINE(134)
						tmp3 = ::flixel::addons::editors::tiled::TiledObjectLayer_obj::__new(el,hx::ObjectPtr<OBJ_>(this));
					}
					else if (  ( _switch_1==HX_HCSTRING("imagelayer","\x96","\xd8","\x60","\xe8"))){
						HX_STACK_LINE(135)
						tmp3 = ::flixel::addons::editors::tiled::TiledImageLayer_obj::__new(el,hx::ObjectPtr<OBJ_>(this));
					}
					else  {
						HX_STACK_LINE(136)
						tmp3 = null();
					}
;
;
				}
				HX_STACK_LINE(131)
				::flixel::addons::editors::tiled::TiledLayer layer = tmp3;		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(139)
				bool tmp4 = (layer != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(139)
				if ((tmp4)){
					HX_STACK_LINE(141)
					::flixel::addons::editors::tiled::TiledLayer tmp5 = layer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(141)
					this->layers->push(tmp5);
					HX_STACK_LINE(142)
					::haxe::ds::StringMap tmp6 = this->layerMap;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(142)
					::String tmp7 = layer->name;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(142)
					::flixel::addons::editors::tiled::TiledLayer tmp8 = layer;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(142)
					tmp6->set(tmp7,tmp8);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,loadLayers,(void))

::flixel::addons::editors::tiled::TiledTileSet TiledMap_obj::getTileSet( ::String name){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","getTileSet",0x10a90a7d,"flixel.addons.editors.tiled.TiledMap.getTileSet","flixel/addons/editors/tiled/TiledMap.hx",148,0xfb5e15cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(149)
	::haxe::ds::StringMap tmp = this->tilesets;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	::flixel::addons::editors::tiled::TiledTileSet tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(149)
	::flixel::addons::editors::tiled::TiledTileSet tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getTileSet,return )

::flixel::addons::editors::tiled::TiledLayer TiledMap_obj::getLayer( ::String name){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","getLayer",0xf247f6fa,"flixel.addons.editors.tiled.TiledMap.getLayer","flixel/addons/editors/tiled/TiledMap.hx",153,0xfb5e15cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(154)
	::haxe::ds::StringMap tmp = this->layerMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	::flixel::addons::editors::tiled::TiledLayer tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	::flixel::addons::editors::tiled::TiledLayer tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getLayer,return )

::flixel::addons::editors::tiled::TiledTileSet TiledMap_obj::getGidOwner( int gid){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","getGidOwner",0xd5d72748,"flixel.addons.editors.tiled.TiledMap.getGidOwner","flixel/addons/editors/tiled/TiledMap.hx",161,0xfb5e15cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_LINE(162)
	::flixel::addons::editors::tiled::TiledTileSet last = null();		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(163)
	::flixel::addons::editors::tiled::TiledTileSet set;		HX_STACK_VAR(set,"set");
	HX_STACK_LINE(165)
	::haxe::ds::StringMap tmp = this->tilesets;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >(tmp1);  __it->hasNext(); ){
		::flixel::addons::editors::tiled::TiledTileSet set1 = __it->next();
		{
			HX_STACK_LINE(167)
			bool tmp2 = (gid >= set1->firstGID);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(167)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(167)
			if ((tmp2)){
				HX_STACK_LINE(167)
				int tmp4 = gid;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(167)
				int tmp5 = (set1->firstGID + set1->numTiles);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(167)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(167)
				tmp3 = (tmp4 < tmp6);
			}
			else{
				HX_STACK_LINE(167)
				tmp3 = false;
			}
			HX_STACK_LINE(167)
			if ((tmp3)){
				HX_STACK_LINE(169)
				::flixel::addons::editors::tiled::TiledTileSet tmp4 = set1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(169)
				return tmp4;
			}
		}
;
	}
	HX_STACK_LINE(173)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getGidOwner,return )


TiledMap_obj::TiledMap_obj()
{
}

void TiledMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledMap);
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(fullWidth,"fullWidth");
	HX_MARK_MEMBER_NAME(fullHeight,"fullHeight");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(tilesets,"tilesets");
	HX_MARK_MEMBER_NAME(tilesetArray,"tilesetArray");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(noLoadHash,"noLoadHash");
	HX_MARK_MEMBER_NAME(layerMap,"layerMap");
	HX_MARK_END_CLASS();
}

void TiledMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(fullWidth,"fullWidth");
	HX_VISIT_MEMBER_NAME(fullHeight,"fullHeight");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(tilesets,"tilesets");
	HX_VISIT_MEMBER_NAME(tilesetArray,"tilesetArray");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(noLoadHash,"noLoadHash");
	HX_VISIT_MEMBER_NAME(layerMap,"layerMap");
}

Dynamic TiledMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"layers") ) { return layers; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { return tilesets; }
		if (HX_FIELD_EQ(inName,"layerMap") ) { return layerMap; }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		if (HX_FIELD_EQ(inName,"fullWidth") ) { return fullWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { return fullHeight; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		if (HX_FIELD_EQ(inName,"noLoadHash") ) { return noLoadHash; }
		if (HX_FIELD_EQ(inName,"loadLayers") ) { return loadLayers_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileSet") ) { return getTileSet_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { return orientation; }
		if (HX_FIELD_EQ(inName,"getGidOwner") ) { return getGidOwner_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tilesetArray") ) { return tilesetArray; }
		if (HX_FIELD_EQ(inName,"loadTilesets") ) { return loadTilesets_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadAttributes") ) { return loadAttributes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadProperties") ) { return loadProperties_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { tilesets=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerMap") ) { layerMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullWidth") ) { fullWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { fullHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noLoadHash") ) { noLoadHash=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tilesetArray") ) { tilesetArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"));
	outFields->push(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"));
	outFields->push(HX_HCSTRING("fullWidth","\xf7","\x35","\x67","\x47"));
	outFields->push(HX_HCSTRING("fullHeight","\xd6","\x7a","\x37","\xe9"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b"));
	outFields->push(HX_HCSTRING("tilesetArray","\xc5","\x7f","\x64","\x32"));
	outFields->push(HX_HCSTRING("layers","\x82","\x15","\xb1","\x58"));
	outFields->push(HX_HCSTRING("noLoadHash","\x75","\xc6","\x05","\xa6"));
	outFields->push(HX_HCSTRING("layerMap","\x4b","\x79","\x26","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TiledMap_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsString,(int)offsetof(TiledMap_obj,orientation),HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,backgroundColor),HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,tileWidth),HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,tileHeight),HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,fullWidth),HX_HCSTRING("fullWidth","\xf7","\x35","\x67","\x47")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,fullHeight),HX_HCSTRING("fullHeight","\xd6","\x7a","\x37","\xe9")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledMap_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledMap_obj,tilesets),HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMap_obj,tilesetArray),HX_HCSTRING("tilesetArray","\xc5","\x7f","\x64","\x32")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMap_obj,layers),HX_HCSTRING("layers","\x82","\x15","\xb1","\x58")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledMap_obj,noLoadHash),HX_HCSTRING("noLoadHash","\x75","\xc6","\x05","\xa6")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledMap_obj,layerMap),HX_HCSTRING("layerMap","\x4b","\x79","\x26","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"),
	HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"),
	HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"),
	HX_HCSTRING("fullWidth","\xf7","\x35","\x67","\x47"),
	HX_HCSTRING("fullHeight","\xd6","\x7a","\x37","\xe9"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b"),
	HX_HCSTRING("tilesetArray","\xc5","\x7f","\x64","\x32"),
	HX_HCSTRING("layers","\x82","\x15","\xb1","\x58"),
	HX_HCSTRING("noLoadHash","\x75","\xc6","\x05","\xa6"),
	HX_HCSTRING("layerMap","\x4b","\x79","\x26","\xb7"),
	HX_HCSTRING("loadAttributes","\x9d","\xb2","\x22","\x2e"),
	HX_HCSTRING("loadProperties","\xb9","\x05","\xc0","\xf7"),
	HX_HCSTRING("loadTilesets","\x05","\x79","\xe6","\x54"),
	HX_HCSTRING("loadLayers","\x48","\x44","\xdc","\x0d"),
	HX_HCSTRING("getTileSet","\x1e","\xbf","\xdc","\x94"),
	HX_HCSTRING("getLayer","\x5b","\x91","\x97","\xcf"),
	HX_HCSTRING("getGidOwner","\x87","\x7f","\xe1","\xfe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledMap_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledMap_obj::__mClass;

void TiledMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledMap","\xaf","\x2a","\xe3","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledMap_obj >;
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
