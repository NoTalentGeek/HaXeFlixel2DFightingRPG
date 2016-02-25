#include <hxcpp.h>

#ifndef INCLUDED_AgnosticCharacter
#include <AgnosticCharacter.h>
#endif

Void AgnosticCharacter_obj::__construct()
{
HX_STACK_FRAME("AgnosticCharacter","new",0xe24b9ab9,"AgnosticCharacter.new","AgnosticCharacter.hx",7,0x761bded7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	this->yPositionFloat = ((Float)-1);
	HX_STACK_LINE(23)
	this->xPositionFloat = ((Float)-1);
	HX_STACK_LINE(22)
	this->spriteAssetPathString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(21)
	this->speedXFloat = ((Float)80.0);
	HX_STACK_LINE(20)
	this->rightButtonPressedBool = false;
	HX_STACK_LINE(19)
	this->moveDegreeFloat = ((Float)-1.0);
	HX_STACK_LINE(18)
	this->leftButtonPressedBool = false;
	HX_STACK_LINE(17)
	this->facingString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(16)
	this->accelerationYFloat = ((Float)0.0);
	HX_STACK_LINE(15)
	this->accelerationXFloat = ((Float)0.0);
	HX_STACK_LINE(11)
	this->CONST_SPEED_FLOAT = ((Float)4.0);
}
;
	return null();
}

//AgnosticCharacter_obj::~AgnosticCharacter_obj() { }

Dynamic AgnosticCharacter_obj::__CreateEmpty() { return  new AgnosticCharacter_obj; }
hx::ObjectPtr< AgnosticCharacter_obj > AgnosticCharacter_obj::__new()
{  hx::ObjectPtr< AgnosticCharacter_obj > _result_ = new AgnosticCharacter_obj();
	_result_->__construct();
	return _result_;}

Dynamic AgnosticCharacter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AgnosticCharacter_obj > _result_ = new AgnosticCharacter_obj();
	_result_->__construct();
	return _result_;}

::AgnosticCharacter AgnosticCharacter_obj::MovementObjectCharacter( ){
	HX_STACK_FRAME("AgnosticCharacter","MovementObjectCharacter",0x5f14f134,"AgnosticCharacter.MovementObjectCharacter","AgnosticCharacter.hx",36,0x761bded7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	bool tmp = this->leftButtonPressedBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	if ((tmp1)){
		HX_STACK_LINE(42)
		tmp2 = this->rightButtonPressedBool;
	}
	else{
		HX_STACK_LINE(41)
		tmp2 = true;
	}
	HX_STACK_LINE(38)
	if ((tmp2)){
		HX_STACK_LINE(63)
		bool tmp3 = this->leftButtonPressedBool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		if ((tmp3)){
			HX_STACK_LINE(65)
			this->facingString = HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32");
			HX_STACK_LINE(66)
			int tmp4 = (int)-1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			Float tmp5 = this->CONST_SPEED_FLOAT;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			Float tmp7 = this->speedXFloat;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(66)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(66)
			this->accelerationXFloat = tmp8;
		}
		else{
			HX_STACK_LINE(69)
			bool tmp4 = this->rightButtonPressedBool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			if ((tmp4)){
				HX_STACK_LINE(71)
				this->facingString = HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67");
				HX_STACK_LINE(72)
				Float tmp5 = this->CONST_SPEED_FLOAT;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(72)
				Float tmp6 = this->speedXFloat;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(72)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(72)
				this->accelerationXFloat = tmp7;
			}
		}
	}
	HX_STACK_LINE(78)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(AgnosticCharacter_obj,MovementObjectCharacter,return )

::AgnosticCharacter AgnosticCharacter_obj::PreventMovementContradictionObjectCharacter( ){
	HX_STACK_FRAME("AgnosticCharacter","PreventMovementContradictionObjectCharacter",0x4274bdd9,"AgnosticCharacter.PreventMovementContradictionObjectCharacter","AgnosticCharacter.hx",87,0x761bded7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	bool tmp = this->leftButtonPressedBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	if ((tmp)){
		HX_STACK_LINE(90)
		tmp1 = this->rightButtonPressedBool;
	}
	else{
		HX_STACK_LINE(90)
		tmp1 = false;
	}
	HX_STACK_LINE(90)
	if ((tmp1)){
		HX_STACK_LINE(90)
		bool tmp2 = this->rightButtonPressedBool = false;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		this->leftButtonPressedBool = tmp2;
	}
	HX_STACK_LINE(92)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(AgnosticCharacter_obj,PreventMovementContradictionObjectCharacter,return )


AgnosticCharacter_obj::AgnosticCharacter_obj()
{
}

void AgnosticCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AgnosticCharacter);
	HX_MARK_MEMBER_NAME(CONST_SPEED_FLOAT,"CONST_SPEED_FLOAT");
	HX_MARK_MEMBER_NAME(accelerationXFloat,"accelerationXFloat");
	HX_MARK_MEMBER_NAME(accelerationYFloat,"accelerationYFloat");
	HX_MARK_MEMBER_NAME(facingString,"facingString");
	HX_MARK_MEMBER_NAME(leftButtonPressedBool,"leftButtonPressedBool");
	HX_MARK_MEMBER_NAME(moveDegreeFloat,"moveDegreeFloat");
	HX_MARK_MEMBER_NAME(rightButtonPressedBool,"rightButtonPressedBool");
	HX_MARK_MEMBER_NAME(speedXFloat,"speedXFloat");
	HX_MARK_MEMBER_NAME(spriteAssetPathString,"spriteAssetPathString");
	HX_MARK_MEMBER_NAME(xPositionFloat,"xPositionFloat");
	HX_MARK_MEMBER_NAME(yPositionFloat,"yPositionFloat");
	HX_MARK_END_CLASS();
}

void AgnosticCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(CONST_SPEED_FLOAT,"CONST_SPEED_FLOAT");
	HX_VISIT_MEMBER_NAME(accelerationXFloat,"accelerationXFloat");
	HX_VISIT_MEMBER_NAME(accelerationYFloat,"accelerationYFloat");
	HX_VISIT_MEMBER_NAME(facingString,"facingString");
	HX_VISIT_MEMBER_NAME(leftButtonPressedBool,"leftButtonPressedBool");
	HX_VISIT_MEMBER_NAME(moveDegreeFloat,"moveDegreeFloat");
	HX_VISIT_MEMBER_NAME(rightButtonPressedBool,"rightButtonPressedBool");
	HX_VISIT_MEMBER_NAME(speedXFloat,"speedXFloat");
	HX_VISIT_MEMBER_NAME(spriteAssetPathString,"spriteAssetPathString");
	HX_VISIT_MEMBER_NAME(xPositionFloat,"xPositionFloat");
	HX_VISIT_MEMBER_NAME(yPositionFloat,"yPositionFloat");
}

Dynamic AgnosticCharacter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"speedXFloat") ) { return speedXFloat; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"facingString") ) { return facingString; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"xPositionFloat") ) { return xPositionFloat; }
		if (HX_FIELD_EQ(inName,"yPositionFloat") ) { return yPositionFloat; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"moveDegreeFloat") ) { return moveDegreeFloat; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CONST_SPEED_FLOAT") ) { return CONST_SPEED_FLOAT; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"accelerationXFloat") ) { return accelerationXFloat; }
		if (HX_FIELD_EQ(inName,"accelerationYFloat") ) { return accelerationYFloat; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"leftButtonPressedBool") ) { return leftButtonPressedBool; }
		if (HX_FIELD_EQ(inName,"spriteAssetPathString") ) { return spriteAssetPathString; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"rightButtonPressedBool") ) { return rightButtonPressedBool; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"MovementObjectCharacter") ) { return MovementObjectCharacter_dyn(); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"PreventMovementContradictionObjectCharacter") ) { return PreventMovementContradictionObjectCharacter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AgnosticCharacter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"speedXFloat") ) { speedXFloat=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"facingString") ) { facingString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"xPositionFloat") ) { xPositionFloat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yPositionFloat") ) { yPositionFloat=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"moveDegreeFloat") ) { moveDegreeFloat=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CONST_SPEED_FLOAT") ) { CONST_SPEED_FLOAT=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"accelerationXFloat") ) { accelerationXFloat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accelerationYFloat") ) { accelerationYFloat=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"leftButtonPressedBool") ) { leftButtonPressedBool=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spriteAssetPathString") ) { spriteAssetPathString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"rightButtonPressedBool") ) { rightButtonPressedBool=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AgnosticCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("CONST_SPEED_FLOAT","\x28","\x53","\xe8","\x36"));
	outFields->push(HX_HCSTRING("accelerationXFloat","\x64","\xa6","\xaa","\x43"));
	outFields->push(HX_HCSTRING("accelerationYFloat","\xc3","\x02","\x06","\xaa"));
	outFields->push(HX_HCSTRING("facingString","\x8b","\x2b","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("leftButtonPressedBool","\x13","\x33","\x70","\x57"));
	outFields->push(HX_HCSTRING("moveDegreeFloat","\x1f","\x9f","\x5f","\xbf"));
	outFields->push(HX_HCSTRING("rightButtonPressedBool","\x9e","\x8f","\x2e","\x04"));
	outFields->push(HX_HCSTRING("speedXFloat","\xeb","\x6c","\x32","\xd2"));
	outFields->push(HX_HCSTRING("spriteAssetPathString","\xe1","\x7f","\xf0","\xdf"));
	outFields->push(HX_HCSTRING("xPositionFloat","\x9b","\xf4","\xc4","\xf5"));
	outFields->push(HX_HCSTRING("yPositionFloat","\xfa","\x47","\x72","\xb8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(AgnosticCharacter_obj,CONST_SPEED_FLOAT),HX_HCSTRING("CONST_SPEED_FLOAT","\x28","\x53","\xe8","\x36")},
	{hx::fsFloat,(int)offsetof(AgnosticCharacter_obj,accelerationXFloat),HX_HCSTRING("accelerationXFloat","\x64","\xa6","\xaa","\x43")},
	{hx::fsFloat,(int)offsetof(AgnosticCharacter_obj,accelerationYFloat),HX_HCSTRING("accelerationYFloat","\xc3","\x02","\x06","\xaa")},
	{hx::fsString,(int)offsetof(AgnosticCharacter_obj,facingString),HX_HCSTRING("facingString","\x8b","\x2b","\xf1","\x7c")},
	{hx::fsBool,(int)offsetof(AgnosticCharacter_obj,leftButtonPressedBool),HX_HCSTRING("leftButtonPressedBool","\x13","\x33","\x70","\x57")},
	{hx::fsFloat,(int)offsetof(AgnosticCharacter_obj,moveDegreeFloat),HX_HCSTRING("moveDegreeFloat","\x1f","\x9f","\x5f","\xbf")},
	{hx::fsBool,(int)offsetof(AgnosticCharacter_obj,rightButtonPressedBool),HX_HCSTRING("rightButtonPressedBool","\x9e","\x8f","\x2e","\x04")},
	{hx::fsFloat,(int)offsetof(AgnosticCharacter_obj,speedXFloat),HX_HCSTRING("speedXFloat","\xeb","\x6c","\x32","\xd2")},
	{hx::fsString,(int)offsetof(AgnosticCharacter_obj,spriteAssetPathString),HX_HCSTRING("spriteAssetPathString","\xe1","\x7f","\xf0","\xdf")},
	{hx::fsFloat,(int)offsetof(AgnosticCharacter_obj,xPositionFloat),HX_HCSTRING("xPositionFloat","\x9b","\xf4","\xc4","\xf5")},
	{hx::fsFloat,(int)offsetof(AgnosticCharacter_obj,yPositionFloat),HX_HCSTRING("yPositionFloat","\xfa","\x47","\x72","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("CONST_SPEED_FLOAT","\x28","\x53","\xe8","\x36"),
	HX_HCSTRING("accelerationXFloat","\x64","\xa6","\xaa","\x43"),
	HX_HCSTRING("accelerationYFloat","\xc3","\x02","\x06","\xaa"),
	HX_HCSTRING("facingString","\x8b","\x2b","\xf1","\x7c"),
	HX_HCSTRING("leftButtonPressedBool","\x13","\x33","\x70","\x57"),
	HX_HCSTRING("moveDegreeFloat","\x1f","\x9f","\x5f","\xbf"),
	HX_HCSTRING("rightButtonPressedBool","\x9e","\x8f","\x2e","\x04"),
	HX_HCSTRING("speedXFloat","\xeb","\x6c","\x32","\xd2"),
	HX_HCSTRING("spriteAssetPathString","\xe1","\x7f","\xf0","\xdf"),
	HX_HCSTRING("xPositionFloat","\x9b","\xf4","\xc4","\xf5"),
	HX_HCSTRING("yPositionFloat","\xfa","\x47","\x72","\xb8"),
	HX_HCSTRING("MovementObjectCharacter","\x5b","\x84","\x25","\x94"),
	HX_HCSTRING("PreventMovementContradictionObjectCharacter","\x80","\x6e","\x7d","\x5c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AgnosticCharacter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AgnosticCharacter_obj::__mClass,"__mClass");
};

#endif

hx::Class AgnosticCharacter_obj::__mClass;

void AgnosticCharacter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AgnosticCharacter","\x47","\xca","\x6f","\x0d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AgnosticCharacter_obj >;
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

