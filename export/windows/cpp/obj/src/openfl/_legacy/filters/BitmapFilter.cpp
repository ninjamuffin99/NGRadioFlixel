// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ee8120f3a30d9c30_12_new,"openfl._legacy.filters.BitmapFilter","new",0x2f0b3990,"openfl._legacy.filters.BitmapFilter.new","openfl/_legacy/filters/BitmapFilter.hx",12,0xbc61c83d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee8120f3a30d9c30_19_clone,"openfl._legacy.filters.BitmapFilter","clone",0x22ab288d,"openfl._legacy.filters.BitmapFilter.clone","openfl/_legacy/filters/BitmapFilter.hx",19,0xbc61c83d)
namespace openfl{
namespace _legacy{
namespace filters{

void BitmapFilter_obj::__construct(::String __o_type){
::String type = __o_type.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_ee8120f3a30d9c30_12_new)
HXDLIN(  12)		this->type = type;
            	}

Dynamic BitmapFilter_obj::__CreateEmpty() { return new BitmapFilter_obj; }

void *BitmapFilter_obj::_hx_vtable = 0;

Dynamic BitmapFilter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BitmapFilter_obj > _hx_result = new BitmapFilter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BitmapFilter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x42644652;
}

 ::openfl::_legacy::filters::BitmapFilter BitmapFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_ee8120f3a30d9c30_19_clone)
HXDLIN(  19)		return  ::openfl::_legacy::filters::BitmapFilter_obj::__alloc( HX_CTX ,this->type);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFilter_obj,clone,return )


BitmapFilter_obj::BitmapFilter_obj()
{
}

void BitmapFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFilter);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void BitmapFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
}

hx::Val BitmapFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BitmapFilter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BitmapFilter_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(BitmapFilter_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BitmapFilter_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapFilter_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void BitmapFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BitmapFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapFilter_obj::__mClass;

void BitmapFilter_obj::__register()
{
	hx::Object *dummy = new BitmapFilter_obj;
	BitmapFilter_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.filters.BitmapFilter","\x9e","\x71","\xf3","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BitmapFilter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BitmapFilter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BitmapFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapFilter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace filters
