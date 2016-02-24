#ifndef INCLUDED_AgnosticCharacter
#define INCLUDED_AgnosticCharacter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AgnosticCharacter)


class HXCPP_CLASS_ATTRIBUTES  AgnosticCharacter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AgnosticCharacter_obj OBJ_;
		AgnosticCharacter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="AgnosticCharacter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AgnosticCharacter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AgnosticCharacter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AgnosticCharacter","\x47","\xca","\x6f","\x0d"); }

		bool downButtonPressedBool;
		::String facingString;
		bool leftButtonPressedBool;
		Float moveDegreeFloat;
		bool rightButtonPressedBool;
		::String spriteAssetPathString;
		bool upButtonPressedBool;
		Float xPositionFloat;
		Float yPositionFloat;
		Float speedFloat;
		virtual ::AgnosticCharacter MovementObjectCharacter( );
		Dynamic MovementObjectCharacter_dyn();

		virtual ::AgnosticCharacter PreventMovementContradictionObjectCharacter( );
		Dynamic PreventMovementContradictionObjectCharacter_dyn();

};


#endif /* INCLUDED_AgnosticCharacter */ 
