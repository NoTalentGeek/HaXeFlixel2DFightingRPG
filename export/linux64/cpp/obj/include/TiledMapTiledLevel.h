#ifndef INCLUDED_TiledMapTiledLevel
#define INCLUDED_TiledMapTiledLevel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
HX_DECLARE_CLASS0(FlxStateMenu)
HX_DECLARE_CLASS0(TiledMapTiledLevel)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObject)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObjectLayer)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  TiledMapTiledLevel_obj : public ::flixel::addons::editors::tiled::TiledMap_obj{
	public:
		typedef ::flixel::addons::editors::tiled::TiledMap_obj super;
		typedef TiledMapTiledLevel_obj OBJ_;
		TiledMapTiledLevel_obj();
		Void __construct(Dynamic tiledLevel,::FlxStateMenu state);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="TiledMapTiledLevel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledMapTiledLevel_obj > __new(Dynamic tiledLevel,::FlxStateMenu state);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledMapTiledLevel_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledMapTiledLevel","\xb4","\xaa","\xc8","\x07"); }

		static void __boot();
		static ::String c_PATH_LEVEL_TILESHEETS;
		::flixel::group::FlxTypedGroup foregroundTiles;
		::flixel::group::FlxTypedGroup objectsLayer;
		::flixel::group::FlxTypedGroup backgroundLayer;
		Array< ::Dynamic > collidableTileLayers;
		::flixel::group::FlxTypedGroup imagesLayer;
		virtual Void loadObjects( ::FlxStateMenu state);
		Dynamic loadObjects_dyn();

		virtual Void loadImageObject( ::flixel::addons::editors::tiled::TiledObject object);
		Dynamic loadImageObject_dyn();

		virtual Void loadObject( ::FlxStateMenu state,::flixel::addons::editors::tiled::TiledObject o,::flixel::addons::editors::tiled::TiledObjectLayer g,::flixel::group::FlxTypedGroup group);
		Dynamic loadObject_dyn();

		virtual Void loadImages( );
		Dynamic loadImages_dyn();

		virtual bool collideWithLevel( ::flixel::FlxObject obj,Dynamic notifyCallback,Dynamic processCallback);
		Dynamic collideWithLevel_dyn();

};


#endif /* INCLUDED_TiledMapTiledLevel */ 
