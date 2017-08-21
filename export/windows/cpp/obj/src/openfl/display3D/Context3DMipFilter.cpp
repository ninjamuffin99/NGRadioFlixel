// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DMipFilter
#include <openfl/display3D/Context3DMipFilter.h>
#endif
namespace openfl{
namespace display3D{

::openfl::display3D::Context3DMipFilter Context3DMipFilter_obj::MIPLINEAR;

::openfl::display3D::Context3DMipFilter Context3DMipFilter_obj::MIPNEAREST;

::openfl::display3D::Context3DMipFilter Context3DMipFilter_obj::MIPNONE;

bool Context3DMipFilter_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MIPLINEAR",59,3a,d7,5f)) { outValue = Context3DMipFilter_obj::MIPLINEAR; return true; }
	if (inName==HX_("MIPNEAREST",4a,95,9e,c2)) { outValue = Context3DMipFilter_obj::MIPNEAREST; return true; }
	if (inName==HX_("MIPNONE",2c,52,db,f5)) { outValue = Context3DMipFilter_obj::MIPNONE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Context3DMipFilter_obj)

int Context3DMipFilter_obj::__FindIndex(::String inName)
{
	if (inName==HX_("MIPLINEAR",59,3a,d7,5f)) return 0;
	if (inName==HX_("MIPNEAREST",4a,95,9e,c2)) return 1;
	if (inName==HX_("MIPNONE",2c,52,db,f5)) return 2;
	return super::__FindIndex(inName);
}

int Context3DMipFilter_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("MIPLINEAR",59,3a,d7,5f)) return 0;
	if (inName==HX_("MIPNEAREST",4a,95,9e,c2)) return 0;
	if (inName==HX_("MIPNONE",2c,52,db,f5)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Context3DMipFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MIPLINEAR",59,3a,d7,5f)) return MIPLINEAR;
	if (inName==HX_("MIPNEAREST",4a,95,9e,c2)) return MIPNEAREST;
	if (inName==HX_("MIPNONE",2c,52,db,f5)) return MIPNONE;
	return super::__Field(inName,inCallProp);
}

static ::String Context3DMipFilter_obj_sStaticFields[] = {
	HX_("MIPLINEAR",59,3a,d7,5f),
	HX_("MIPNEAREST",4a,95,9e,c2),
	HX_("MIPNONE",2c,52,db,f5),
	::String(null())
};

static void Context3DMipFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DMipFilter_obj::MIPLINEAR,"MIPLINEAR");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_obj::MIPNEAREST,"MIPNEAREST");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_obj::MIPNONE,"MIPNONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DMipFilter_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_obj::MIPLINEAR,"MIPLINEAR");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_obj::MIPNEAREST,"MIPNEAREST");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_obj::MIPNONE,"MIPNONE");
};
#endif

hx::Class Context3DMipFilter_obj::__mClass;

Dynamic __Create_Context3DMipFilter_obj() { return new Context3DMipFilter_obj; }

void Context3DMipFilter_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl.display3D.Context3DMipFilter","\xc5","\x7f","\xde","\xaf"), hx::TCanCast< Context3DMipFilter_obj >,Context3DMipFilter_obj_sStaticFields,0,
	&__Create_Context3DMipFilter_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DMipFilter_obj, Context3DMipFilter_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Context3DMipFilter_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Context3DMipFilter_obj::__GetStatic;
}

void Context3DMipFilter_obj::__boot()
{
MIPLINEAR = hx::CreateEnum< Context3DMipFilter_obj >(HX_HCSTRING("MIPLINEAR","\x59","\x3a","\xd7","\x5f"),0,0);
MIPNEAREST = hx::CreateEnum< Context3DMipFilter_obj >(HX_HCSTRING("MIPNEAREST","\x4a","\x95","\x9e","\xc2"),1,0);
MIPNONE = hx::CreateEnum< Context3DMipFilter_obj >(HX_HCSTRING("MIPNONE","\x2c","\x52","\xdb","\xf5"),2,0);
}


} // end namespace openfl
} // end namespace display3D
