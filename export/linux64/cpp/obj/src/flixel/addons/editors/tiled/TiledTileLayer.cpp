#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTile
#include <flixel/addons/editors/tiled/TiledTile.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileLayer
#include <flixel/addons/editors/tiled/TiledTileLayer.h>
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
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_CompressionAlgorithm
#include <openfl/_legacy/utils/CompressionAlgorithm.h>
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
#ifndef INCLUDED_openfl_utils__Endian_Endian_Impl_
#include <openfl/utils/_Endian/Endian_Impl_.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledTileLayer_obj::__construct(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileLayer","new",0x92503408,"flixel.addons.editors.tiled.TiledTileLayer.new","flixel/addons/editors/tiled/TiledTileLayer.hx",25,0x5f61a546)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(26)
	::haxe::xml::Fast tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::flixel::addons::editors::tiled::TiledMap tmp1 = parent;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(27)
	this->type = ::flixel::addons::editors::tiled::TiledLayerType_obj::TILE;
	HX_STACK_LINE(28)
	bool tmp2 = source->has->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	if ((tmp2)){
		HX_STACK_LINE(28)
		::String tmp4 = source->att->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		tmp3 = ::Std_obj::parseInt(tmp4);
	}
	else{
		HX_STACK_LINE(28)
		tmp3 = (int)0;
	}
	HX_STACK_LINE(28)
	this->x = tmp3;
	HX_STACK_LINE(29)
	bool tmp4 = source->has->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	if ((tmp4)){
		HX_STACK_LINE(29)
		::String tmp6 = source->att->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(29)
		tmp5 = ::Std_obj::parseInt(tmp6);
	}
	else{
		HX_STACK_LINE(29)
		tmp5 = (int)0;
	}
	HX_STACK_LINE(29)
	this->y = tmp5;
	HX_STACK_LINE(30)
	::String tmp6 = source->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(30)
	Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(30)
	this->width = tmp7;
	HX_STACK_LINE(31)
	::String tmp8 = source->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(31)
	Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(31)
	this->height = tmp9;
	HX_STACK_LINE(33)
	this->tiles = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(36)
	::haxe::xml::Fast tmp10 = source->node->resolve(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(36)
	this->xmlData = tmp10;
	HX_STACK_LINE(37)
	::haxe::xml::Fast tmp11 = this->xmlData;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(37)
	bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(37)
	if ((tmp12)){
		HX_STACK_LINE(39)
		HX_STACK_DO_THROW(HX_HCSTRING("Error loading TiledLayer level data","\x8f","\x52","\x0a","\xf4"));
	}
}
;
	return null();
}

//TiledTileLayer_obj::~TiledTileLayer_obj() { }

Dynamic TiledTileLayer_obj::__CreateEmpty() { return  new TiledTileLayer_obj; }
hx::ObjectPtr< TiledTileLayer_obj > TiledTileLayer_obj::__new(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent)
{  hx::ObjectPtr< TiledTileLayer_obj > _result_ = new TiledTileLayer_obj();
	_result_->__construct(source,parent);
	return _result_;}

Dynamic TiledTileLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledTileLayer_obj > _result_ = new TiledTileLayer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::openfl::_legacy::utils::ByteArray TiledTileLayer_obj::getByteArrayData( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileLayer","getByteArrayData",0x4a9ded1d,"flixel.addons.editors.tiled.TiledTileLayer.getByteArrayData","flixel/addons/editors/tiled/TiledTileLayer.hx",44,0x5f61a546)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	::openfl::_legacy::utils::ByteArray result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(47)
	::String tmp = this->get_encoding();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	bool tmp1 = (tmp == HX_HCSTRING("base64","\x8f","\xfd","\x27","\x55"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	if ((tmp1)){
		HX_STACK_LINE(49)
		::haxe::xml::Fast tmp2 = this->xmlData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		::String tmp3 = tmp2->get_innerData();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::String chunk = tmp3;		HX_STACK_VAR(chunk,"chunk");
		HX_STACK_LINE(50)
		bool compressed = false;		HX_STACK_VAR(compressed,"compressed");
		HX_STACK_LINE(52)
		::String tmp4 = chunk;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		::openfl::_legacy::utils::ByteArray tmp5 = this->base64ToByteArray(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		result = tmp5;
		HX_STACK_LINE(53)
		::String tmp6 = ::openfl::utils::_Endian::Endian_Impl__obj::toString(((Dynamic)((int)1)));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		result->set_endian(tmp6);
		HX_STACK_LINE(55)
		::haxe::xml::Fast tmp7 = this->xmlData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(55)
		bool tmp8 = tmp7->has->resolve(HX_HCSTRING("compression","\x66","\xb7","\x2b","\x77"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(55)
		if ((tmp8)){
			HX_STACK_LINE(57)
			::haxe::xml::Fast tmp9 = this->xmlData;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(57)
			::String tmp10 = tmp9->att->resolve(HX_HCSTRING("compression","\x66","\xb7","\x2b","\x77"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(57)
			::String _g = tmp10;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			::String tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(57)
			::String _switch_1 = (tmp11);
			if (  ( _switch_1==HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"))){
				HX_STACK_LINE(60)
				compressed = true;
			}
			else  {
				HX_STACK_LINE(62)
				HX_STACK_DO_THROW(HX_HCSTRING("TiledLayer - data compression type not supported!","\xce","\x90","\x21","\xa6"));
			}
;
;
		}
		HX_STACK_LINE(66)
		bool tmp9 = compressed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(66)
		if ((tmp9)){
			HX_STACK_LINE(71)
			result->uncompress(null());
		}
	}
	else{
		HX_STACK_LINE(77)
		HX_STACK_DO_THROW(HX_HCSTRING("Must use base64 encoding in order to get tileArray data.","\x41","\x92","\xe6","\x4d"));
	}
	HX_STACK_LINE(80)
	::String tmp2 = ::openfl::utils::_Endian::Endian_Impl__obj::toString(((Dynamic)((int)1)));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	result->set_endian(tmp2);
	HX_STACK_LINE(81)
	::openfl::_legacy::utils::ByteArray tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledTileLayer_obj,getByteArrayData,return )

::openfl::_legacy::utils::ByteArray TiledTileLayer_obj::base64ToByteArray( ::String data){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileLayer","base64ToByteArray",0x153e24cf,"flixel.addons.editors.tiled.TiledTileLayer.base64ToByteArray","flixel/addons/editors/tiled/TiledTileLayer.hx",85,0x5f61a546)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(86)
	::openfl::_legacy::utils::ByteArray tmp = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	::openfl::_legacy::utils::ByteArray output = tmp;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(89)
	Array< int > lookup = Array_obj< int >::__new();		HX_STACK_VAR(lookup,"lookup");
	HX_STACK_LINE(91)
	{
		HX_STACK_LINE(91)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(91)
		int tmp1 = HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=","\xda","\xa1","\xd5","\xa3").length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		while((true)){
			HX_STACK_LINE(91)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			if ((tmp3)){
				HX_STACK_LINE(91)
				break;
			}
			HX_STACK_LINE(91)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			int c = tmp4;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(93)
			int tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			Dynamic tmp6 = HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=","\xda","\xa1","\xd5","\xa3").charCodeAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			lookup[tmp6] = tmp7;
		}
	}
	HX_STACK_LINE(96)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(97)
	while((true)){
		HX_STACK_LINE(97)
		int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		int tmp2 = (data.length - (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		if ((tmp4)){
			HX_STACK_LINE(97)
			break;
		}
		HX_STACK_LINE(100)
		int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		::String tmp6 = data.charAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		bool tmp7 = (tmp6 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(100)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		if ((tmp9)){
			HX_STACK_LINE(100)
			int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(100)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(100)
			::String tmp14 = data.charAt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(100)
			::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(100)
			tmp10 = (tmp16 == HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(100)
			tmp10 = true;
		}
		HX_STACK_LINE(100)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(100)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		if ((tmp11)){
			HX_STACK_LINE(100)
			int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(100)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			::String tmp15 = data.charAt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(100)
			::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(100)
			tmp12 = (tmp16 == HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(100)
			tmp12 = true;
		}
		HX_STACK_LINE(100)
		if ((tmp12)){
			HX_STACK_LINE(102)
			(i)++;
			HX_STACK_LINE(102)
			continue;
		}
		HX_STACK_LINE(106)
		int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(106)
		Dynamic tmp14 = data.charCodeAt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(106)
		int tmp15 = lookup->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(106)
		int a0 = tmp15;		HX_STACK_VAR(a0,"a0");
		HX_STACK_LINE(107)
		int tmp16 = (i + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(107)
		Dynamic tmp17 = data.charCodeAt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(107)
		int tmp18 = lookup->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(107)
		int a1 = tmp18;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(108)
		int tmp19 = (i + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(108)
		Dynamic tmp20 = data.charCodeAt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(108)
		int tmp21 = lookup->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(108)
		int a2 = tmp21;		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(109)
		int tmp22 = (i + (int)3);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(109)
		Dynamic tmp23 = data.charCodeAt(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(109)
		int tmp24 = lookup->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(109)
		int a3 = tmp24;		HX_STACK_VAR(a3,"a3");
		HX_STACK_LINE(112)
		bool tmp25 = (a1 < (int)64);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(112)
		if ((tmp25)){
			HX_STACK_LINE(114)
			int tmp26 = output->position;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(114)
			output->ensureElem(tmp26,true);
			HX_STACK_LINE(114)
			int tmp27 = (output->position)++;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(114)
			int tmp28 = (int(a0) << int((int)2));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(114)
			int tmp29 = (int(a1) & int((int)48));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(114)
			int tmp30 = (int(tmp29) >> int((int)4));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(114)
			int tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(114)
			output->b[tmp27] = tmp31;
		}
		HX_STACK_LINE(116)
		bool tmp26 = (a2 < (int)64);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(116)
		if ((tmp26)){
			HX_STACK_LINE(118)
			int tmp27 = output->position;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(118)
			output->ensureElem(tmp27,true);
			HX_STACK_LINE(118)
			int tmp28 = (output->position)++;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(118)
			int tmp29 = (int(a1) & int((int)15));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(118)
			int tmp30 = (int(tmp29) << int((int)4));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(118)
			int tmp31 = (int(a2) & int((int)60));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(118)
			int tmp32 = (int(tmp31) >> int((int)2));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(118)
			int tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(118)
			output->b[tmp28] = tmp33;
		}
		HX_STACK_LINE(120)
		bool tmp27 = (a3 < (int)64);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(120)
		if ((tmp27)){
			HX_STACK_LINE(122)
			int tmp28 = output->position;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(122)
			output->ensureElem(tmp28,true);
			HX_STACK_LINE(122)
			int tmp29 = (output->position)++;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(122)
			int tmp30 = (int(a2) & int((int)3));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(122)
			int tmp31 = (int(tmp30) << int((int)6));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(122)
			int tmp32 = a3;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(122)
			int tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(122)
			output->b[tmp29] = tmp33;
		}
		HX_STACK_LINE(125)
		hx::AddEq(i,(int)4);
	}
	HX_STACK_LINE(129)
	output->position = (int)0;
	HX_STACK_LINE(131)
	::openfl::_legacy::utils::ByteArray tmp1 = output;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileLayer_obj,base64ToByteArray,return )

int TiledTileLayer_obj::resolveTile( int globalTileId){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileLayer","resolveTile",0xa03c3be2,"flixel.addons.editors.tiled.TiledTileLayer.resolveTile","flixel/addons/editors/tiled/TiledTileLayer.hx",135,0x5f61a546)
	HX_STACK_THIS(this)
	HX_STACK_ARG(globalTileId,"globalTileId")
	HX_STACK_LINE(136)
	::flixel::addons::editors::tiled::TiledTile tmp = ::flixel::addons::editors::tiled::TiledTile_obj::__new(globalTileId);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	::flixel::addons::editors::tiled::TiledTile tile = tmp;		HX_STACK_VAR(tile,"tile");
	HX_STACK_LINE(138)
	int tilesetID = tile->tilesetID;		HX_STACK_VAR(tilesetID,"tilesetID");
	HX_STACK_LINE(139)
	::flixel::addons::editors::tiled::TiledMap tmp1 = this->map;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	Dynamic tmp2 = tmp1->tilesets->iterator();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >(tmp2);  __it->hasNext(); ){
		::flixel::addons::editors::tiled::TiledTileSet tileset = __it->next();
		{
			HX_STACK_LINE(141)
			bool tmp3 = (tilesetID >= tileset->firstGID);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(141)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(141)
			if ((tmp3)){
				HX_STACK_LINE(141)
				int tmp5 = tilesetID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(141)
				int tmp6 = (tileset->firstGID + tileset->numTiles);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(141)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(141)
				tmp4 = (tmp5 < tmp7);
			}
			else{
				HX_STACK_LINE(141)
				tmp4 = false;
			}
			HX_STACK_LINE(141)
			if ((tmp4)){
				HX_STACK_LINE(143)
				::flixel::addons::editors::tiled::TiledTile tmp5 = tile;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(143)
				this->tiles->push(tmp5);
				HX_STACK_LINE(144)
				int tmp6 = tilesetID;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(144)
				return tmp6;
			}
		}
;
	}
	HX_STACK_LINE(147)
	this->tiles->push(null());
	HX_STACK_LINE(148)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileLayer_obj,resolveTile,return )

::String TiledTileLayer_obj::get_encoding( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileLayer","get_encoding",0x31302834,"flixel.addons.editors.tiled.TiledTileLayer.get_encoding","flixel/addons/editors/tiled/TiledTileLayer.hx",152,0x5f61a546)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	::String tmp = this->encoding;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	if ((tmp1)){
		HX_STACK_LINE(153)
		tmp2 = this->encoding;
	}
	else{
		HX_STACK_LINE(153)
		::haxe::xml::Fast tmp3 = this->xmlData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		tmp2 = tmp3->att->resolve(HX_HCSTRING("encoding","\xd3","\x8c","\x58","\x30"));
	}
	HX_STACK_LINE(153)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledTileLayer_obj,get_encoding,return )

::String TiledTileLayer_obj::get_csvData( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileLayer","get_csvData",0x6c5b0ccf,"flixel.addons.editors.tiled.TiledTileLayer.get_csvData","flixel/addons/editors/tiled/TiledTileLayer.hx",157,0x5f61a546)
	HX_STACK_THIS(this)
	HX_STACK_LINE(158)
	::String tmp = this->csvData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	if ((tmp1)){
		HX_STACK_LINE(160)
		::haxe::xml::Fast tmp2 = this->xmlData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		::String tmp3 = tmp2->att->resolve(HX_HCSTRING("encoding","\xd3","\x8c","\x58","\x30"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		bool tmp4 = (tmp3 == HX_HCSTRING("csv","\xc6","\x83","\x4b","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		if ((tmp4)){
			HX_STACK_LINE(162)
			::haxe::xml::Fast tmp5 = this->xmlData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(162)
			::String tmp6 = tmp5->get_innerData();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(162)
			::String tmp7 = ::StringTools_obj::ltrim(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(162)
			this->csvData = tmp7;
		}
		else{
			HX_STACK_LINE(166)
			HX_STACK_DO_THROW(HX_HCSTRING("Must use CSV encoding in order to get CSV data.","\x05","\x1a","\xfa","\xa5"));
		}
	}
	HX_STACK_LINE(169)
	::String tmp2 = this->csvData;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledTileLayer_obj,get_csvData,return )

Array< int > TiledTileLayer_obj::get_tileArray( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileLayer","get_tileArray",0x6cbb250a,"flixel.addons.editors.tiled.TiledTileLayer.get_tileArray","flixel/addons/editors/tiled/TiledTileLayer.hx",173,0x5f61a546)
	HX_STACK_THIS(this)
	HX_STACK_LINE(174)
	bool tmp = (this->tileArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	if ((tmp)){
		HX_STACK_LINE(176)
		::openfl::_legacy::utils::ByteArray tmp1 = this->getByteArrayData();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		::openfl::_legacy::utils::ByteArray mapData = tmp1;		HX_STACK_VAR(mapData,"mapData");
		HX_STACK_LINE(178)
		bool tmp2 = (mapData == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		if ((tmp2)){
			HX_STACK_LINE(180)
			HX_STACK_DO_THROW(HX_HCSTRING("Must use Base64 encoding (with or without zlip compression) in order to get 1D Array.","\x13","\x2f","\x11","\xcb"));
		}
		HX_STACK_LINE(183)
		this->tileArray = Array_obj< int >::__new();
		HX_STACK_LINE(185)
		while((true)){
			HX_STACK_LINE(185)
			int tmp3 = mapData->position;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			int tmp5 = mapData->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(185)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(185)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(185)
			if ((tmp8)){
				HX_STACK_LINE(185)
				break;
			}
			HX_STACK_LINE(187)
			int tmp9 = mapData->readUnsignedInt();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(187)
			int tmp10 = this->resolveTile(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(187)
			this->tileArray->push(tmp10);
		}
	}
	HX_STACK_LINE(191)
	return this->tileArray;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledTileLayer_obj,get_tileArray,return )

::String TiledTileLayer_obj::BASE64_CHARS;


TiledTileLayer_obj::TiledTileLayer_obj()
{
}

void TiledTileLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledTileLayer);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_MEMBER_NAME(encoding,"encoding");
	HX_MARK_MEMBER_NAME(csvData,"csvData");
	HX_MARK_MEMBER_NAME(tileArray,"tileArray");
	HX_MARK_MEMBER_NAME(xmlData,"xmlData");
	::flixel::addons::editors::tiled::TiledLayer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledTileLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	HX_VISIT_MEMBER_NAME(encoding,"encoding");
	HX_VISIT_MEMBER_NAME(csvData,"csvData");
	HX_VISIT_MEMBER_NAME(tileArray,"tileArray");
	HX_VISIT_MEMBER_NAME(xmlData,"xmlData");
	::flixel::addons::editors::tiled::TiledLayer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TiledTileLayer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"tiles") ) { return tiles; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"csvData") ) { return inCallProp == hx::paccAlways ? get_csvData() : csvData; }
		if (HX_FIELD_EQ(inName,"xmlData") ) { return xmlData; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"encoding") ) { return inCallProp == hx::paccAlways ? get_encoding() : encoding; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileArray") ) { return inCallProp == hx::paccAlways ? get_tileArray() : tileArray; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveTile") ) { return resolveTile_dyn(); }
		if (HX_FIELD_EQ(inName,"get_csvData") ) { return get_csvData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_encoding") ) { return get_encoding_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tileArray") ) { return get_tileArray_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getByteArrayData") ) { return getByteArrayData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"base64ToByteArray") ) { return base64ToByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledTileLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"csvData") ) { csvData=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xmlData") ) { xmlData=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"encoding") ) { encoding=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileArray") ) { tileArray=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledTileLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"));
	outFields->push(HX_HCSTRING("encoding","\xd3","\x8c","\x58","\x30"));
	outFields->push(HX_HCSTRING("csvData","\x10","\x61","\x5c","\x2e"));
	outFields->push(HX_HCSTRING("tileArray","\x8b","\xcb","\xea","\xb0"));
	outFields->push(HX_HCSTRING("xmlData","\xa1","\x27","\x79","\x6f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TiledTileLayer_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TiledTileLayer_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TiledTileLayer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TiledTileLayer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledTileLayer_obj,tiles),HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10")},
	{hx::fsString,(int)offsetof(TiledTileLayer_obj,encoding),HX_HCSTRING("encoding","\xd3","\x8c","\x58","\x30")},
	{hx::fsString,(int)offsetof(TiledTileLayer_obj,csvData),HX_HCSTRING("csvData","\x10","\x61","\x5c","\x2e")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TiledTileLayer_obj,tileArray),HX_HCSTRING("tileArray","\x8b","\xcb","\xea","\xb0")},
	{hx::fsObject /*::haxe::xml::Fast*/ ,(int)offsetof(TiledTileLayer_obj,xmlData),HX_HCSTRING("xmlData","\xa1","\x27","\x79","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TiledTileLayer_obj::BASE64_CHARS,HX_HCSTRING("BASE64_CHARS","\xcd","\xf6","\x92","\x21")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"),
	HX_HCSTRING("encoding","\xd3","\x8c","\x58","\x30"),
	HX_HCSTRING("csvData","\x10","\x61","\x5c","\x2e"),
	HX_HCSTRING("tileArray","\x8b","\xcb","\xea","\xb0"),
	HX_HCSTRING("xmlData","\xa1","\x27","\x79","\x6f"),
	HX_HCSTRING("getByteArrayData","\xc5","\x79","\x1d","\xa1"),
	HX_HCSTRING("base64ToByteArray","\x27","\xab","\x59","\x6e"),
	HX_HCSTRING("resolveTile","\x3a","\xf0","\x37","\xe8"),
	HX_HCSTRING("get_encoding","\xdc","\x40","\x72","\xe5"),
	HX_HCSTRING("get_csvData","\x27","\xc1","\x56","\xb4"),
	HX_HCSTRING("get_tileArray","\x62","\x9f","\x4e","\x72"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledTileLayer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TiledTileLayer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledTileLayer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledTileLayer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#endif

hx::Class TiledTileLayer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BASE64_CHARS","\xcd","\xf6","\x92","\x21"),
	::String(null()) };

void TiledTileLayer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledTileLayer","\x16","\xd0","\x9b","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledTileLayer_obj >;
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

void TiledTileLayer_obj::__boot()
{
	BASE64_CHARS= HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=","\xda","\xa1","\xd5","\xa3");
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
