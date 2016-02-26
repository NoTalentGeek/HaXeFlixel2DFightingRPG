#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageLayer
#define INCLUDED_flixel_addons_editors_tiled_TiledImageLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledImageLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledImageLayer_obj : public ::flixel::addons::editors::tiled::TiledLayer_obj{
	public:
		typedef ::flixel::addons::editors::tiled::TiledLayer_obj super;
		typedef TiledImageLayer_obj OBJ_;
		TiledImageLayer_obj();
		Void __construct(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledImageLayer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledImageLayer_obj > __new(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledImageLayer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledImageLayer","\x6c","\x01","\x84","\xe2"); }

		::String imagePath;
		int x;
		int y;
};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledImageLayer */ 
