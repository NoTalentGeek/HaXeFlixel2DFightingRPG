#ifndef INCLUDED_ObjectCharacter
#define INCLUDED_ObjectCharacter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ObjectCharacter)


class HXCPP_CLASS_ATTRIBUTES  ObjectCharacter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectCharacter_obj OBJ_;
		ObjectCharacter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ObjectCharacter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectCharacter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectCharacter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectCharacter","\xca","\xf4","\xa0","\x2d"); }

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
		virtual ::ObjectCharacter MovementObjectCharacter( );
		Dynamic MovementObjectCharacter_dyn();

		virtual ::ObjectCharacter PreventMovementContradictionObjectCharacter( );
		Dynamic PreventMovementContradictionObjectCharacter_dyn();

};


#endif /* INCLUDED_ObjectCharacter */ 
