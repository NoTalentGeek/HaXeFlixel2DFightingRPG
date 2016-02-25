#ifndef INCLUDED_FlxSpriteCharacter
#define INCLUDED_FlxSpriteCharacter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(AgnosticCharacter)
HX_DECLARE_CLASS0(FlxSpriteCharacter)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)


class HXCPP_CLASS_ATTRIBUTES  FlxSpriteCharacter_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxSpriteCharacter_obj OBJ_;
		FlxSpriteCharacter_obj();
		Void __construct(Float _xPositionFloat,Float _yPositionFloat);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="FlxSpriteCharacter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxSpriteCharacter_obj > __new(Float _xPositionFloat,Float _yPositionFloat);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSpriteCharacter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxSpriteCharacter","\xb2","\xee","\x36","\x4b"); }

		::AgnosticCharacter agnosticObjectCharacter;
		::flixel::math::FlxPoint playerPositionFlxPoint;
		virtual Void update( Float _elapsedFloat);

		virtual ::FlxSpriteCharacter SyncAgnosticFlxSpriteCharacter( );
		Dynamic SyncAgnosticFlxSpriteCharacter_dyn();

};


#endif /* INCLUDED_FlxSpriteCharacter */ 
