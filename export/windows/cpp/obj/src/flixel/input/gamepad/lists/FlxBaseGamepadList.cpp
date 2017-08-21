// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b9fe46732284793f_13_new,"flixel.input.gamepad.lists.FlxBaseGamepadList","new",0x1c38506a,"flixel.input.gamepad.lists.FlxBaseGamepadList.new","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",13,0x249eb6c2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9fe46732284793f_20_check,"flixel.input.gamepad.lists.FlxBaseGamepadList","check",0x83c2af52,"flixel.input.gamepad.lists.FlxBaseGamepadList.check","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",20,0x249eb6c2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9fe46732284793f_25_checkRaw,"flixel.input.gamepad.lists.FlxBaseGamepadList","checkRaw",0xa446bdb6,"flixel.input.gamepad.lists.FlxBaseGamepadList.checkRaw","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",25,0x249eb6c2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9fe46732284793f_31_get_ANY,"flixel.input.gamepad.lists.FlxBaseGamepadList","get_ANY",0x10ccac6d,"flixel.input.gamepad.lists.FlxBaseGamepadList.get_ANY","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",31,0x249eb6c2)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

void FlxBaseGamepadList_obj::__construct(int status, ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_b9fe46732284793f_13_new)
HXLINE(  14)		this->status = status;
HXLINE(  15)		this->gamepad = gamepad;
            	}

Dynamic FlxBaseGamepadList_obj::__CreateEmpty() { return new FlxBaseGamepadList_obj; }

void *FlxBaseGamepadList_obj::_hx_vtable = 0;

Dynamic FlxBaseGamepadList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxBaseGamepadList_obj > _hx_result = new FlxBaseGamepadList_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxBaseGamepadList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24eed6de;
}

bool FlxBaseGamepadList_obj::check(int id){
            	HX_STACKFRAME(&_hx_pos_b9fe46732284793f_20_check)
HXDLIN(  20)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  20)		int Status = this->status;
HXDLIN(  20)		return _this->checkStatusRaw(_this->mapping->getRawID(id),Status);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseGamepadList_obj,check,return )

bool FlxBaseGamepadList_obj::checkRaw(int id){
            	HX_STACKFRAME(&_hx_pos_b9fe46732284793f_25_checkRaw)
HXDLIN(  25)		return this->gamepad->checkStatusRaw(id,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseGamepadList_obj,checkRaw,return )

bool FlxBaseGamepadList_obj::get_ANY(){
            	HX_STACKFRAME(&_hx_pos_b9fe46732284793f_31_get_ANY)
HXLINE(  32)		{
HXLINE(  32)			int _g = (int)0;
HXDLIN(  32)			::Array< ::Dynamic> _g1 = this->gamepad->buttons;
HXDLIN(  32)			while((_g < _g1->length)){
HXLINE(  32)				 ::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  32)				_g = (_g + (int)1);
HXLINE(  34)				bool _hx_tmp;
HXDLIN(  34)				if (hx::IsNotNull( button )) {
HXLINE(  34)					_hx_tmp = this->gamepad->checkStatusRaw(( (int)(button->ID) ),this->status);
            				}
            				else {
HXLINE(  34)					_hx_tmp = false;
            				}
HXDLIN(  34)				if (_hx_tmp) {
HXLINE(  36)					return true;
            				}
            			}
            		}
HXLINE(  40)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseGamepadList_obj,get_ANY,return )


hx::ObjectPtr< FlxBaseGamepadList_obj > FlxBaseGamepadList_obj::__new(int status, ::flixel::input::gamepad::FlxGamepad gamepad) {
	hx::ObjectPtr< FlxBaseGamepadList_obj > __this = new FlxBaseGamepadList_obj();
	__this->__construct(status,gamepad);
	return __this;
}

hx::ObjectPtr< FlxBaseGamepadList_obj > FlxBaseGamepadList_obj::__alloc(hx::Ctx *_hx_ctx,int status, ::flixel::input::gamepad::FlxGamepad gamepad) {
	FlxBaseGamepadList_obj *__this = (FlxBaseGamepadList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxBaseGamepadList_obj), true, "flixel.input.gamepad.lists.FlxBaseGamepadList"));
	*(void **)__this = FlxBaseGamepadList_obj::_hx_vtable;
	__this->__construct(status,gamepad);
	return __this;
}

FlxBaseGamepadList_obj::FlxBaseGamepadList_obj()
{
}

void FlxBaseGamepadList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseGamepadList);
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_END_CLASS();
}

void FlxBaseGamepadList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
}

hx::Val FlxBaseGamepadList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_ANY() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return hx::Val( check_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return hx::Val( status ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return hx::Val( gamepad ); }
		if (HX_FIELD_EQ(inName,"get_ANY") ) { return hx::Val( get_ANY_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"checkRaw") ) { return hx::Val( checkRaw_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxBaseGamepadList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast<  ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseGamepadList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	outFields->push(HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxBaseGamepadList_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxBaseGamepadList_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxBaseGamepadList_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxBaseGamepadList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBaseGamepadList_obj_sMemberFields[] = {
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("check","\xc8","\x98","\xb6","\x45"),
	HX_HCSTRING("checkRaw","\x00","\xa2","\xe9","\xac"),
	HX_HCSTRING("get_ANY","\x63","\x5f","\xa6","\x26"),
	::String(null()) };

static void FlxBaseGamepadList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseGamepadList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBaseGamepadList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseGamepadList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBaseGamepadList_obj::__mClass;

void FlxBaseGamepadList_obj::__register()
{
	hx::Object *dummy = new FlxBaseGamepadList_obj;
	FlxBaseGamepadList_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.lists.FlxBaseGamepadList","\x78","\x93","\xa1","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxBaseGamepadList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxBaseGamepadList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBaseGamepadList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBaseGamepadList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBaseGamepadList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBaseGamepadList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists
