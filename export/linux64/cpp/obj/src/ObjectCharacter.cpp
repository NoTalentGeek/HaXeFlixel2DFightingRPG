#include <hxcpp.h>

#ifndef INCLUDED_ObjectCharacter
#include <ObjectCharacter.h>
#endif

Void ObjectCharacter_obj::__construct()
{
HX_STACK_FRAME("ObjectCharacter","new",0xb0d7c2bc,"ObjectCharacter.new","ObjectCharacter.hx",7,0xe417e834)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	this->speedFloat = ((Float)200.0);
	HX_STACK_LINE(21)
	this->yPositionFloat = ((Float)-1);
	HX_STACK_LINE(20)
	this->xPositionFloat = ((Float)-1);
	HX_STACK_LINE(19)
	this->upButtonPressedBool = false;
	HX_STACK_LINE(18)
	this->spriteAssetPathString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(17)
	this->rightButtonPressedBool = false;
	HX_STACK_LINE(16)
	this->moveDegreeFloat = ((Float)-1.0);
	HX_STACK_LINE(15)
	this->leftButtonPressedBool = false;
	HX_STACK_LINE(14)
	this->facingString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(13)
	this->downButtonPressedBool = false;
}
;
	return null();
}

//ObjectCharacter_obj::~ObjectCharacter_obj() { }

Dynamic ObjectCharacter_obj::__CreateEmpty() { return  new ObjectCharacter_obj; }
hx::ObjectPtr< ObjectCharacter_obj > ObjectCharacter_obj::__new()
{  hx::ObjectPtr< ObjectCharacter_obj > _result_ = new ObjectCharacter_obj();
	_result_->__construct();
	return _result_;}

Dynamic ObjectCharacter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectCharacter_obj > _result_ = new ObjectCharacter_obj();
	_result_->__construct();
	return _result_;}

::ObjectCharacter ObjectCharacter_obj::MovementObjectCharacter( ){
	HX_STACK_FRAME("ObjectCharacter","MovementObjectCharacter",0x98a74cb7,"ObjectCharacter.MovementObjectCharacter","ObjectCharacter.hx",34,0xe417e834)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	bool tmp = this->downButtonPressedBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	if ((tmp2)){
		HX_STACK_LINE(38)
		tmp3 = this->leftButtonPressedBool;
	}
	else{
		HX_STACK_LINE(37)
		tmp3 = true;
	}
	HX_STACK_LINE(37)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	if ((tmp5)){
		HX_STACK_LINE(39)
		tmp6 = this->rightButtonPressedBool;
	}
	else{
		HX_STACK_LINE(37)
		tmp6 = true;
	}
	HX_STACK_LINE(37)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(37)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(37)
	if ((tmp7)){
		HX_STACK_LINE(40)
		tmp8 = this->upButtonPressedBool;
	}
	else{
		HX_STACK_LINE(37)
		tmp8 = true;
	}
	HX_STACK_LINE(36)
	if ((tmp8)){
		HX_STACK_LINE(43)
		bool tmp9 = this->downButtonPressedBool;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		if ((tmp9)){
			HX_STACK_LINE(45)
			this->facingString = HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d");
			HX_STACK_LINE(46)
			this->moveDegreeFloat = (int)90;
			HX_STACK_LINE(47)
			bool tmp10 = this->leftButtonPressedBool;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			if ((tmp10)){
				HX_STACK_LINE(47)
				hx::AddEq(this->moveDegreeFloat,(int)45);
			}
			else{
				HX_STACK_LINE(48)
				bool tmp11 = this->rightButtonPressedBool;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(48)
				if ((tmp11)){
					HX_STACK_LINE(48)
					hx::SubEq(this->moveDegreeFloat,(int)45);
				}
			}
		}
		else{
			HX_STACK_LINE(51)
			bool tmp10 = this->upButtonPressedBool;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(51)
			if ((tmp10)){
				HX_STACK_LINE(53)
				this->facingString = HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00");
				HX_STACK_LINE(54)
				this->moveDegreeFloat = (int)-90;
				HX_STACK_LINE(55)
				bool tmp11 = this->leftButtonPressedBool;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(55)
				if ((tmp11)){
					HX_STACK_LINE(55)
					hx::SubEq(this->moveDegreeFloat,(int)45);
				}
				else{
					HX_STACK_LINE(56)
					bool tmp12 = this->rightButtonPressedBool;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(56)
					if ((tmp12)){
						HX_STACK_LINE(56)
						hx::AddEq(this->moveDegreeFloat,(int)45);
					}
				}
			}
			else{
				HX_STACK_LINE(59)
				bool tmp11 = this->leftButtonPressedBool;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(59)
				if ((tmp11)){
					HX_STACK_LINE(61)
					this->facingString = HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32");
					HX_STACK_LINE(62)
					this->moveDegreeFloat = (int)180;
				}
				else{
					HX_STACK_LINE(65)
					bool tmp12 = this->rightButtonPressedBool;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(65)
					if ((tmp12)){
						HX_STACK_LINE(67)
						this->facingString = HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67");
						HX_STACK_LINE(68)
						this->moveDegreeFloat = (int)0;
					}
				}
			}
		}
	}
	HX_STACK_LINE(74)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectCharacter_obj,MovementObjectCharacter,return )

::ObjectCharacter ObjectCharacter_obj::PreventMovementContradictionObjectCharacter( ){
	HX_STACK_FRAME("ObjectCharacter","PreventMovementContradictionObjectCharacter",0xc92c0cdc,"ObjectCharacter.PreventMovementContradictionObjectCharacter","ObjectCharacter.hx",83,0xe417e834)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	bool tmp = this->downButtonPressedBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	if ((tmp)){
		HX_STACK_LINE(85)
		tmp1 = this->upButtonPressedBool;
	}
	else{
		HX_STACK_LINE(85)
		tmp1 = false;
	}
	HX_STACK_LINE(85)
	if ((tmp1)){
		HX_STACK_LINE(85)
		bool tmp2 = this->upButtonPressedBool = false;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		this->downButtonPressedBool = tmp2;
	}
	HX_STACK_LINE(86)
	bool tmp2 = this->leftButtonPressedBool;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	if ((tmp2)){
		HX_STACK_LINE(86)
		tmp3 = this->rightButtonPressedBool;
	}
	else{
		HX_STACK_LINE(86)
		tmp3 = false;
	}
	HX_STACK_LINE(86)
	if ((tmp3)){
		HX_STACK_LINE(86)
		bool tmp4 = this->rightButtonPressedBool = false;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		this->leftButtonPressedBool = tmp4;
	}
	HX_STACK_LINE(88)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectCharacter_obj,PreventMovementContradictionObjectCharacter,return )


ObjectCharacter_obj::ObjectCharacter_obj()
{
}

void ObjectCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectCharacter);
	HX_MARK_MEMBER_NAME(downButtonPressedBool,"downButtonPressedBool");
	HX_MARK_MEMBER_NAME(facingString,"facingString");
	HX_MARK_MEMBER_NAME(leftButtonPressedBool,"leftButtonPressedBool");
	HX_MARK_MEMBER_NAME(moveDegreeFloat,"moveDegreeFloat");
	HX_MARK_MEMBER_NAME(rightButtonPressedBool,"rightButtonPressedBool");
	HX_MARK_MEMBER_NAME(spriteAssetPathString,"spriteAssetPathString");
	HX_MARK_MEMBER_NAME(upButtonPressedBool,"upButtonPressedBool");
	HX_MARK_MEMBER_NAME(xPositionFloat,"xPositionFloat");
	HX_MARK_MEMBER_NAME(yPositionFloat,"yPositionFloat");
	HX_MARK_MEMBER_NAME(speedFloat,"speedFloat");
	HX_MARK_END_CLASS();
}

void ObjectCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(downButtonPressedBool,"downButtonPressedBool");
	HX_VISIT_MEMBER_NAME(facingString,"facingString");
	HX_VISIT_MEMBER_NAME(leftButtonPressedBool,"leftButtonPressedBool");
	HX_VISIT_MEMBER_NAME(moveDegreeFloat,"moveDegreeFloat");
	HX_VISIT_MEMBER_NAME(rightButtonPressedBool,"rightButtonPressedBool");
	HX_VISIT_MEMBER_NAME(spriteAssetPathString,"spriteAssetPathString");
	HX_VISIT_MEMBER_NAME(upButtonPressedBool,"upButtonPressedBool");
	HX_VISIT_MEMBER_NAME(xPositionFloat,"xPositionFloat");
	HX_VISIT_MEMBER_NAME(yPositionFloat,"yPositionFloat");
	HX_VISIT_MEMBER_NAME(speedFloat,"speedFloat");
}

Dynamic ObjectCharacter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"speedFloat") ) { return speedFloat; }
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
	case 19:
		if (HX_FIELD_EQ(inName,"upButtonPressedBool") ) { return upButtonPressedBool; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"downButtonPressedBool") ) { return downButtonPressedBool; }
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

Dynamic ObjectCharacter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"speedFloat") ) { speedFloat=inValue.Cast< Float >(); return inValue; }
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
	case 19:
		if (HX_FIELD_EQ(inName,"upButtonPressedBool") ) { upButtonPressedBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"downButtonPressedBool") ) { downButtonPressedBool=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftButtonPressedBool") ) { leftButtonPressedBool=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spriteAssetPathString") ) { spriteAssetPathString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"rightButtonPressedBool") ) { rightButtonPressedBool=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("downButtonPressedBool","\x58","\x2c","\x8a","\xb1"));
	outFields->push(HX_HCSTRING("facingString","\x8b","\x2b","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("leftButtonPressedBool","\x13","\x33","\x70","\x57"));
	outFields->push(HX_HCSTRING("moveDegreeFloat","\x1f","\x9f","\x5f","\xbf"));
	outFields->push(HX_HCSTRING("rightButtonPressedBool","\x9e","\x8f","\x2e","\x04"));
	outFields->push(HX_HCSTRING("spriteAssetPathString","\xe1","\x7f","\xf0","\xdf"));
	outFields->push(HX_HCSTRING("upButtonPressedBool","\x3f","\x76","\xa0","\xff"));
	outFields->push(HX_HCSTRING("xPositionFloat","\x9b","\xf4","\xc4","\xf5"));
	outFields->push(HX_HCSTRING("yPositionFloat","\xfa","\x47","\x72","\xb8"));
	outFields->push(HX_HCSTRING("speedFloat","\x95","\xf4","\x64","\x35"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ObjectCharacter_obj,downButtonPressedBool),HX_HCSTRING("downButtonPressedBool","\x58","\x2c","\x8a","\xb1")},
	{hx::fsString,(int)offsetof(ObjectCharacter_obj,facingString),HX_HCSTRING("facingString","\x8b","\x2b","\xf1","\x7c")},
	{hx::fsBool,(int)offsetof(ObjectCharacter_obj,leftButtonPressedBool),HX_HCSTRING("leftButtonPressedBool","\x13","\x33","\x70","\x57")},
	{hx::fsFloat,(int)offsetof(ObjectCharacter_obj,moveDegreeFloat),HX_HCSTRING("moveDegreeFloat","\x1f","\x9f","\x5f","\xbf")},
	{hx::fsBool,(int)offsetof(ObjectCharacter_obj,rightButtonPressedBool),HX_HCSTRING("rightButtonPressedBool","\x9e","\x8f","\x2e","\x04")},
	{hx::fsString,(int)offsetof(ObjectCharacter_obj,spriteAssetPathString),HX_HCSTRING("spriteAssetPathString","\xe1","\x7f","\xf0","\xdf")},
	{hx::fsBool,(int)offsetof(ObjectCharacter_obj,upButtonPressedBool),HX_HCSTRING("upButtonPressedBool","\x3f","\x76","\xa0","\xff")},
	{hx::fsFloat,(int)offsetof(ObjectCharacter_obj,xPositionFloat),HX_HCSTRING("xPositionFloat","\x9b","\xf4","\xc4","\xf5")},
	{hx::fsFloat,(int)offsetof(ObjectCharacter_obj,yPositionFloat),HX_HCSTRING("yPositionFloat","\xfa","\x47","\x72","\xb8")},
	{hx::fsFloat,(int)offsetof(ObjectCharacter_obj,speedFloat),HX_HCSTRING("speedFloat","\x95","\xf4","\x64","\x35")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("downButtonPressedBool","\x58","\x2c","\x8a","\xb1"),
	HX_HCSTRING("facingString","\x8b","\x2b","\xf1","\x7c"),
	HX_HCSTRING("leftButtonPressedBool","\x13","\x33","\x70","\x57"),
	HX_HCSTRING("moveDegreeFloat","\x1f","\x9f","\x5f","\xbf"),
	HX_HCSTRING("rightButtonPressedBool","\x9e","\x8f","\x2e","\x04"),
	HX_HCSTRING("spriteAssetPathString","\xe1","\x7f","\xf0","\xdf"),
	HX_HCSTRING("upButtonPressedBool","\x3f","\x76","\xa0","\xff"),
	HX_HCSTRING("xPositionFloat","\x9b","\xf4","\xc4","\xf5"),
	HX_HCSTRING("yPositionFloat","\xfa","\x47","\x72","\xb8"),
	HX_HCSTRING("speedFloat","\x95","\xf4","\x64","\x35"),
	HX_HCSTRING("MovementObjectCharacter","\x5b","\x84","\x25","\x94"),
	HX_HCSTRING("PreventMovementContradictionObjectCharacter","\x80","\x6e","\x7d","\x5c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectCharacter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectCharacter_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectCharacter_obj::__mClass;

void ObjectCharacter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectCharacter","\xca","\xf4","\xa0","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectCharacter_obj >;
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

