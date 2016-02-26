#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageTile
#include <flixel/addons/editors/tiled/TiledImageTile.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledTileSet_obj::__construct(Dynamic data)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","new",0xf865df19,"flixel.addons.editors.tiled.TiledTileSet.new","flixel/addons/editors/tiled/TiledTileSet.hx",34,0x504d33d5)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(35)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(35)
	::haxe::xml::Fast source;		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(36)
	this->numTiles = (int)16777215;
	HX_STACK_LINE(37)
	int tmp = this->numCols = (int)1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	this->numRows = tmp;
	HX_STACK_LINE(40)
	Dynamic tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::haxe::xml::Fast >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	if ((tmp2)){
		HX_STACK_LINE(42)
		source = data;
	}
	else{
		HX_STACK_LINE(44)
		Dynamic tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::_legacy::utils::ByteArray >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		if ((tmp4)){
			HX_STACK_LINE(48)
			Dynamic tmp5 = data->toString();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			::Xml tmp6 = ::Xml_obj::parse(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(48)
			::haxe::xml::Fast tmp7 = ::haxe::xml::Fast_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			source = tmp7;
			HX_STACK_LINE(49)
			::haxe::xml::Fast tmp8 = source->node->resolve(HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(49)
			source = tmp8;
		}
		else{
			HX_STACK_LINE(53)
			HX_STACK_DO_THROW(HX_HCSTRING("Unknown TMX tileset format","\xda","\x21","\x2b","\x65"));
		}
	}
	HX_STACK_LINE(56)
	bool tmp3 = source->has->resolve(HX_HCSTRING("firstgid","\xd2","\x49","\x26","\xf1"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	if ((tmp3)){
		HX_STACK_LINE(56)
		::String tmp5 = source->att->resolve(HX_HCSTRING("firstgid","\xd2","\x49","\x26","\xf1"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		tmp4 = ::Std_obj::parseInt(tmp5);
	}
	else{
		HX_STACK_LINE(56)
		tmp4 = (int)1;
	}
	HX_STACK_LINE(56)
	this->firstGID = tmp4;
	HX_STACK_LINE(58)
	bool tmp5 = source->has->resolve(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(58)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	if ((tmp6)){
		HX_STACK_LINE(60)
		::haxe::xml::Fast node1;		HX_STACK_VAR(node1,"node1");
		HX_STACK_LINE(62)
		bool tmp7 = source->hasNode->resolve(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(62)
		if ((tmp7)){
			HX_STACK_LINE(65)
			::haxe::xml::Fast tmp8 = source->node->resolve(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			node1 = tmp8;
			HX_STACK_LINE(66)
			::String tmp9 = node1->att->resolve(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(66)
			this->imageSource = tmp9;
		}
		else{
			HX_STACK_LINE(71)
			::haxe::xml::Fast tmp8 = source->node->resolve(HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(71)
			node1 = tmp8;
			HX_STACK_LINE(72)
			this->imageSource = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(75)
			this->tileImagesSources = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				::_List::ListIterator tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(77)
				{
					HX_STACK_LINE(77)
					::List tmp10 = source->nodes->resolve(HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(77)
					::List _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(77)
					tmp9 = ::_List::ListIterator_obj::__new(_this->h);
				}
				HX_STACK_LINE(77)
				::_List::ListIterator _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(77)
				while((true)){
					HX_STACK_LINE(77)
					bool tmp10 = (_g->head != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(77)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(77)
					if ((tmp11)){
						HX_STACK_LINE(77)
						break;
					}
					HX_STACK_LINE(77)
					Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(77)
					{
						HX_STACK_LINE(77)
						Dynamic tmp13 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(77)
						_g->val = tmp13;
						HX_STACK_LINE(77)
						Dynamic tmp14 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(77)
						_g->head = tmp14;
						HX_STACK_LINE(77)
						tmp12 = _g->val;
					}
					HX_STACK_LINE(77)
					::haxe::xml::Fast node2 = ((::haxe::xml::Fast)(tmp12));		HX_STACK_VAR(node2,"node2");
					HX_STACK_LINE(79)
					bool tmp13 = node2->has->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(79)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(79)
					if ((tmp14)){
						HX_STACK_LINE(81)
						continue;
					}
					HX_STACK_LINE(84)
					::String tmp15 = node2->att->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(84)
					Dynamic tmp16 = ::Std_obj::parseInt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(84)
					int id = tmp16;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(85)
					::flixel::addons::editors::tiled::TiledImageTile tmp17 = ::flixel::addons::editors::tiled::TiledImageTile_obj::__new(node2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(85)
					this->tileImagesSources[id] = tmp17;
				}
			}
		}
		HX_STACK_LINE(89)
		::String tmp8 = source->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(89)
		this->name = tmp8;
		HX_STACK_LINE(91)
		int imgWidth = (int)0;		HX_STACK_VAR(imgWidth,"imgWidth");
		HX_STACK_LINE(92)
		bool tmp9 = node1->has->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(92)
		if ((tmp9)){
			HX_STACK_LINE(94)
			::String tmp10 = node1->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(94)
			Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(94)
			imgWidth = tmp11;
		}
		HX_STACK_LINE(96)
		int imgHeight = (int)0;		HX_STACK_VAR(imgHeight,"imgHeight");
		HX_STACK_LINE(97)
		bool tmp10 = node1->has->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(97)
		if ((tmp10)){
			HX_STACK_LINE(99)
			::String tmp11 = node1->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(99)
			Dynamic tmp12 = ::Std_obj::parseInt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(99)
			imgHeight = tmp12;
		}
		HX_STACK_LINE(102)
		bool tmp11 = source->has->resolve(HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(102)
		if ((tmp11)){
			HX_STACK_LINE(104)
			::String tmp12 = source->att->resolve(HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(104)
			Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(104)
			this->tileWidth = tmp13;
		}
		HX_STACK_LINE(106)
		bool tmp12 = source->has->resolve(HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(106)
		if ((tmp12)){
			HX_STACK_LINE(108)
			::String tmp13 = source->att->resolve(HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(108)
			Dynamic tmp14 = ::Std_obj::parseInt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(108)
			this->tileHeight = tmp14;
		}
		HX_STACK_LINE(110)
		bool tmp13 = source->has->resolve(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(110)
		if ((tmp13)){
			HX_STACK_LINE(112)
			::String tmp14 = source->att->resolve(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(112)
			Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(112)
			this->spacing = tmp15;
		}
		HX_STACK_LINE(114)
		bool tmp14 = source->has->resolve(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(114)
		if ((tmp14)){
			HX_STACK_LINE(116)
			::String tmp15 = source->att->resolve(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(116)
			Dynamic tmp16 = ::Std_obj::parseInt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(116)
			this->margin = tmp16;
		}
		HX_STACK_LINE(120)
		::flixel::addons::editors::tiled::TiledPropertySet tmp15 = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(120)
		this->properties = tmp15;
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			::_List::ListIterator tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				::List tmp17 = source->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(121)
				::List _this = tmp17;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(121)
				tmp16 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(121)
			::_List::ListIterator _g = tmp16;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(121)
			while((true)){
				HX_STACK_LINE(121)
				bool tmp17 = (_g->head != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(121)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(121)
				if ((tmp18)){
					HX_STACK_LINE(121)
					break;
				}
				HX_STACK_LINE(121)
				Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(121)
				{
					HX_STACK_LINE(121)
					Dynamic tmp20 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(121)
					_g->val = tmp20;
					HX_STACK_LINE(121)
					Dynamic tmp21 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(121)
					_g->head = tmp21;
					HX_STACK_LINE(121)
					tmp19 = _g->val;
				}
				HX_STACK_LINE(121)
				::haxe::xml::Fast prop = ((::haxe::xml::Fast)(tmp19));		HX_STACK_VAR(prop,"prop");
				HX_STACK_LINE(122)
				::flixel::addons::editors::tiled::TiledPropertySet tmp20 = this->properties;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(122)
				::haxe::xml::Fast tmp21 = prop;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(122)
				tmp20->extend(tmp21);
			}
		}
		HX_STACK_LINE(125)
		this->tileProps = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::_List::ListIterator tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(127)
			{
				HX_STACK_LINE(127)
				::List tmp17 = source->nodes->resolve(HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(127)
				::List _this = tmp17;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(127)
				tmp16 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(127)
			::_List::ListIterator _g = tmp16;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(127)
			while((true)){
				HX_STACK_LINE(127)
				bool tmp17 = (_g->head != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(127)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(127)
				if ((tmp18)){
					HX_STACK_LINE(127)
					break;
				}
				HX_STACK_LINE(127)
				Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(127)
				{
					HX_STACK_LINE(127)
					Dynamic tmp20 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(127)
					_g->val = tmp20;
					HX_STACK_LINE(127)
					Dynamic tmp21 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(127)
					_g->head = tmp21;
					HX_STACK_LINE(127)
					tmp19 = _g->val;
				}
				HX_STACK_LINE(127)
				::haxe::xml::Fast node2 = ((::haxe::xml::Fast)(tmp19));		HX_STACK_VAR(node2,"node2");
				HX_STACK_LINE(129)
				bool tmp20 = node2->has->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(129)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(129)
				if ((tmp21)){
					HX_STACK_LINE(131)
					continue;
				}
				HX_STACK_LINE(134)
				::String tmp22 = node2->att->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(134)
				Dynamic tmp23 = ::Std_obj::parseInt(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(134)
				int id = tmp23;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(135)
				::flixel::addons::editors::tiled::TiledPropertySet tmp24 = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(135)
				this->tileProps[id] = tmp24;
				HX_STACK_LINE(136)
				::flixel::addons::editors::tiled::TiledPropertySet tmp25 = this->tileProps->__get(id).StaticCast< ::flixel::addons::editors::tiled::TiledPropertySet >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(136)
				int tmp26 = id;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(136)
				::String tmp27 = ::Std_obj::string(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(136)
				tmp25->keys->set(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),tmp27);
				HX_STACK_LINE(137)
				{
					HX_STACK_LINE(137)
					::_List::ListIterator tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(137)
					{
						HX_STACK_LINE(137)
						::List tmp29 = node2->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(137)
						::List _this = tmp29;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(137)
						tmp28 = ::_List::ListIterator_obj::__new(_this->h);
					}
					HX_STACK_LINE(137)
					::_List::ListIterator _g1 = tmp28;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(137)
					while((true)){
						HX_STACK_LINE(137)
						bool tmp29 = (_g1->head != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(137)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(137)
						if ((tmp30)){
							HX_STACK_LINE(137)
							break;
						}
						HX_STACK_LINE(137)
						Dynamic tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(137)
						{
							HX_STACK_LINE(137)
							Dynamic tmp32 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(137)
							_g1->val = tmp32;
							HX_STACK_LINE(137)
							Dynamic tmp33 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(137)
							_g1->head = tmp33;
							HX_STACK_LINE(137)
							tmp31 = _g1->val;
						}
						HX_STACK_LINE(137)
						::haxe::xml::Fast prop = ((::haxe::xml::Fast)(tmp31));		HX_STACK_VAR(prop,"prop");
						HX_STACK_LINE(139)
						::flixel::addons::editors::tiled::TiledPropertySet tmp32 = this->tileProps->__get(id).StaticCast< ::flixel::addons::editors::tiled::TiledPropertySet >();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(139)
						::haxe::xml::Fast tmp33 = prop;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(139)
						tmp32->extend(tmp33);
					}
				}
			}
		}
		HX_STACK_LINE(143)
		int tmp16 = this->tileWidth;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(143)
		bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(143)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(143)
		if ((tmp17)){
			HX_STACK_LINE(143)
			int tmp19 = this->tileHeight;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(143)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(143)
			tmp18 = (tmp20 > (int)0);
		}
		else{
			HX_STACK_LINE(143)
			tmp18 = false;
		}
		HX_STACK_LINE(143)
		if ((tmp18)){
			HX_STACK_LINE(145)
			int tmp19 = imgWidth;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(145)
			int tmp20 = this->tileWidth;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(145)
			Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(145)
			int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(145)
			this->numRows = tmp22;
			HX_STACK_LINE(146)
			int tmp23 = imgHeight;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(146)
			int tmp24 = this->tileHeight;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(146)
			Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(146)
			int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(146)
			this->numCols = tmp26;
			HX_STACK_LINE(147)
			int tmp27 = this->numRows;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(147)
			int tmp28 = this->numCols;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(147)
			int tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(147)
			this->numTiles = tmp29;
		}
	}
}
;
	return null();
}

//TiledTileSet_obj::~TiledTileSet_obj() { }

Dynamic TiledTileSet_obj::__CreateEmpty() { return  new TiledTileSet_obj; }
hx::ObjectPtr< TiledTileSet_obj > TiledTileSet_obj::__new(Dynamic data)
{  hx::ObjectPtr< TiledTileSet_obj > _result_ = new TiledTileSet_obj();
	_result_->__construct(data);
	return _result_;}

Dynamic TiledTileSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledTileSet_obj > _result_ = new TiledTileSet_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool TiledTileSet_obj::hasGid( int Gid){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","hasGid",0x55a8bbaf,"flixel.addons.editors.tiled.TiledTileSet.hasGid","flixel/addons/editors/tiled/TiledTileSet.hx",153,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Gid,"Gid")
	HX_STACK_LINE(154)
	int tmp = Gid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	int tmp1 = this->firstGID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	if ((tmp2)){
		HX_STACK_LINE(154)
		int tmp4 = Gid;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		int tmp5 = this->firstGID;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		int tmp7 = this->numTiles;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		int tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(154)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(154)
		tmp3 = (tmp4 < tmp10);
	}
	else{
		HX_STACK_LINE(154)
		tmp3 = false;
	}
	HX_STACK_LINE(154)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,hasGid,return )

int TiledTileSet_obj::fromGid( int Gid){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","fromGid",0xe24bb3f1,"flixel.addons.editors.tiled.TiledTileSet.fromGid","flixel/addons/editors/tiled/TiledTileSet.hx",158,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Gid,"Gid")
	HX_STACK_LINE(159)
	int tmp = Gid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	int tmp1 = this->firstGID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	int tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(159)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,fromGid,return )

int TiledTileSet_obj::toGid( int ID){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","toGid",0xbfce2440,"flixel.addons.editors.tiled.TiledTileSet.toGid","flixel/addons/editors/tiled/TiledTileSet.hx",163,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(164)
	int tmp = this->firstGID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	int tmp1 = ID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,toGid,return )

::flixel::addons::editors::tiled::TiledPropertySet TiledTileSet_obj::getPropertiesByGid( int Gid){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getPropertiesByGid",0x4c2032e9,"flixel.addons.editors.tiled.TiledTileSet.getPropertiesByGid","flixel/addons/editors/tiled/TiledTileSet.hx",168,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Gid,"Gid")
	HX_STACK_LINE(169)
	bool tmp = (this->tileProps != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	if ((tmp)){
		HX_STACK_LINE(171)
		int tmp1 = Gid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		int tmp2 = this->firstGID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		::flixel::addons::editors::tiled::TiledPropertySet tmp4 = this->tileProps->__get(tmp3).StaticCast< ::flixel::addons::editors::tiled::TiledPropertySet >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		return tmp4;
	}
	HX_STACK_LINE(174)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getPropertiesByGid,return )

::flixel::addons::editors::tiled::TiledPropertySet TiledTileSet_obj::getProperties( int ID){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getProperties",0x8aac6822,"flixel.addons.editors.tiled.TiledTileSet.getProperties","flixel/addons/editors/tiled/TiledTileSet.hx",178,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(179)
	::flixel::addons::editors::tiled::TiledPropertySet tmp = this->tileProps->__get(ID).StaticCast< ::flixel::addons::editors::tiled::TiledPropertySet >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getProperties,return )

::flixel::addons::editors::tiled::TiledImageTile TiledTileSet_obj::getImageSourceByGid( int Gid){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getImageSourceByGid",0x251eb564,"flixel.addons.editors.tiled.TiledTileSet.getImageSourceByGid","flixel/addons/editors/tiled/TiledTileSet.hx",183,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Gid,"Gid")
	HX_STACK_LINE(184)
	bool tmp = (this->tileImagesSources != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	if ((tmp)){
		HX_STACK_LINE(186)
		int tmp1 = Gid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		int tmp2 = this->firstGID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		::flixel::addons::editors::tiled::TiledImageTile tmp4 = this->tileImagesSources->__get(tmp3).StaticCast< ::flixel::addons::editors::tiled::TiledImageTile >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(186)
		return tmp4;
	}
	HX_STACK_LINE(189)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getImageSourceByGid,return )

::flixel::addons::editors::tiled::TiledImageTile TiledTileSet_obj::getImageSource( int ID){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getImageSource",0xba92f787,"flixel.addons.editors.tiled.TiledTileSet.getImageSource","flixel/addons/editors/tiled/TiledTileSet.hx",193,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(194)
	::flixel::addons::editors::tiled::TiledImageTile tmp = this->tileImagesSources->__get(ID).StaticCast< ::flixel::addons::editors::tiled::TiledImageTile >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getImageSource,return )

::openfl::_legacy::geom::Rectangle TiledTileSet_obj::getRect( int ID){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getRect",0xa87c5c13,"flixel.addons.editors.tiled.TiledTileSet.getRect","flixel/addons/editors/tiled/TiledTileSet.hx",198,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(200)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	int tmp1 = this->numCols;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	int tmp2 = hx::Mod(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(200)
	int tmp3 = this->tileWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(200)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(200)
	int tmp5 = ID;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(200)
	int tmp6 = this->numCols;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(200)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(200)
	int tmp8 = this->tileHeight;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(200)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(200)
	::openfl::_legacy::geom::Rectangle tmp10 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp4,tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(200)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getRect,return )


TiledTileSet_obj::TiledTileSet_obj()
{
}

void TiledTileSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledTileSet);
	HX_MARK_MEMBER_NAME(firstGID,"firstGID");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(imageSource,"imageSource");
	HX_MARK_MEMBER_NAME(numTiles,"numTiles");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(tileProps,"tileProps");
	HX_MARK_MEMBER_NAME(tileImagesSources,"tileImagesSources");
	HX_MARK_END_CLASS();
}

void TiledTileSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(firstGID,"firstGID");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(imageSource,"imageSource");
	HX_VISIT_MEMBER_NAME(numTiles,"numTiles");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(tileProps,"tileProps");
	HX_VISIT_MEMBER_NAME(tileImagesSources,"tileImagesSources");
}

Dynamic TiledTileSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toGid") ) { return toGid_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		if (HX_FIELD_EQ(inName,"hasGid") ) { return hasGid_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { return spacing; }
		if (HX_FIELD_EQ(inName,"numRows") ) { return numRows; }
		if (HX_FIELD_EQ(inName,"numCols") ) { return numCols; }
		if (HX_FIELD_EQ(inName,"fromGid") ) { return fromGid_dyn(); }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { return firstGID; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { return numTiles; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		if (HX_FIELD_EQ(inName,"tileProps") ) { return tileProps; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { return imageSource; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getProperties") ) { return getProperties_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getImageSource") ) { return getImageSource_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tileImagesSources") ) { return tileImagesSources; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPropertiesByGid") ) { return getPropertiesByGid_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getImageSourceByGid") ) { return getImageSourceByGid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledTileSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { spacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { firstGID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileProps") ) { tileProps=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { imageSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tileImagesSources") ) { tileImagesSources=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledTileSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("firstGID","\xb2","\xe5","\x0d","\xf1"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"));
	outFields->push(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"));
	outFields->push(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));
	outFields->push(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));
	outFields->push(HX_HCSTRING("imageSource","\x96","\xba","\x71","\x7a"));
	outFields->push(HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"));
	outFields->push(HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"));
	outFields->push(HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("tileProps","\x62","\x45","\xeb","\x53"));
	outFields->push(HX_HCSTRING("tileImagesSources","\x52","\x8d","\xe9","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,firstGID),HX_HCSTRING("firstGID","\xb2","\xe5","\x0d","\xf1")},
	{hx::fsString,(int)offsetof(TiledTileSet_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,tileWidth),HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,tileHeight),HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,spacing),HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,margin),HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")},
	{hx::fsString,(int)offsetof(TiledTileSet_obj,imageSource),HX_HCSTRING("imageSource","\x96","\xba","\x71","\x7a")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,numTiles),HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,numRows),HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,numCols),HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledTileSet_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledTileSet_obj,tileProps),HX_HCSTRING("tileProps","\x62","\x45","\xeb","\x53")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledTileSet_obj,tileImagesSources),HX_HCSTRING("tileImagesSources","\x52","\x8d","\xe9","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("firstGID","\xb2","\xe5","\x0d","\xf1"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"),
	HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"),
	HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	HX_HCSTRING("imageSource","\x96","\xba","\x71","\x7a"),
	HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"),
	HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"),
	HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("tileProps","\x62","\x45","\xeb","\x53"),
	HX_HCSTRING("tileImagesSources","\x52","\x8d","\xe9","\x37"),
	HX_HCSTRING("hasGid","\xc8","\x90","\x35","\xbb"),
	HX_HCSTRING("fromGid","\xb8","\x54","\xf9","\x57"),
	HX_HCSTRING("toGid","\x47","\x35","\x10","\x14"),
	HX_HCSTRING("getPropertiesByGid","\x82","\xc9","\xe4","\xcb"),
	HX_HCSTRING("getProperties","\x29","\x58","\x81","\xbd"),
	HX_HCSTRING("getImageSourceByGid","\xab","\xe4","\x5d","\x71"),
	HX_HCSTRING("getImageSource","\xa0","\x0d","\x10","\x02"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledTileSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledTileSet_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledTileSet_obj::__mClass;

void TiledTileSet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledTileSet","\xa7","\x5e","\x38","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledTileSet_obj >;
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
