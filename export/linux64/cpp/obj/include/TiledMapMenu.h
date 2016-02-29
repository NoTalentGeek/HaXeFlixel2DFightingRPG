#ifndef INCLUDED_TiledMapMenu
#define INCLUDED_TiledMapMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
HX_DECLARE_CLASS0(TiledMapMenu)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  TiledMapMenu_obj : public ::flixel::addons::editors::tiled::TiledMap_obj{
	public:
		typedef ::flixel::addons::editors::tiled::TiledMap_obj super;
		typedef TiledMapMenu_obj OBJ_;
		TiledMapMenu_obj();
		Void __construct(::flixel::FlxState _flxState,::String _tiledDirectoryString);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="TiledMapMenu")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledMapMenu_obj > __new(::flixel::FlxState _flxState,::String _tiledDirectoryString);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledMapMenu_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledMapMenu","\xa5","\xab","\x0d","\x19"); }

		static void __boot();
		static ::String c_MAP_TILESET_DIRECTORY_STRING;
		Array< ::Dynamic > collisionLayerFlxTilemapArray;
		::flixel::group::FlxTypedGroup foregroundTileLayerFlxGroup;
		virtual bool ObjectCollideWithLayerBool( ::flixel::FlxObject _flxObject,Dynamic _notifyFunction,Dynamic _processFunction);
		Dynamic ObjectCollideWithLayerBool_dyn();

};


#endif /* INCLUDED_TiledMapMenu */ 
