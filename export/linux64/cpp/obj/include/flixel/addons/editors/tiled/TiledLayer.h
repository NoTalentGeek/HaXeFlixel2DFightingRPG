#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#define INCLUDED_flixel_addons_editors_tiled_TiledLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayerType)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledLayer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledLayer_obj OBJ_;
		TiledLayer_obj();
		Void __construct(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledLayer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledLayer_obj > __new(::haxe::xml::Fast source,::flixel::addons::editors::tiled::TiledMap parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledLayer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledLayer","\x9b","\x6c","\x51","\x25"); }

		::flixel::addons::editors::tiled::TiledLayerType type;
		::flixel::addons::editors::tiled::TiledMap map;
		::String name;
		Float opacity;
		bool visible;
		::flixel::addons::editors::tiled::TiledPropertySet properties;
		virtual Void loadProperties( ::haxe::xml::Fast source);
		Dynamic loadProperties_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledLayer */ 
