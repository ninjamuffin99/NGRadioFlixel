// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_effects_particles_FlxEmitterMode
#include <flixel/effects/particles/FlxEmitterMode.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

::flixel::effects::particles::FlxEmitterMode FlxEmitterMode_obj::CIRCLE;

::flixel::effects::particles::FlxEmitterMode FlxEmitterMode_obj::SQUARE;

bool FlxEmitterMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CIRCLE",10,1e,90,08)) { outValue = FlxEmitterMode_obj::CIRCLE; return true; }
	if (inName==HX_("SQUARE",9d,ac,74,0b)) { outValue = FlxEmitterMode_obj::SQUARE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxEmitterMode_obj)

int FlxEmitterMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CIRCLE",10,1e,90,08)) return 1;
	if (inName==HX_("SQUARE",9d,ac,74,0b)) return 0;
	return super::__FindIndex(inName);
}

int FlxEmitterMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CIRCLE",10,1e,90,08)) return 0;
	if (inName==HX_("SQUARE",9d,ac,74,0b)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FlxEmitterMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CIRCLE",10,1e,90,08)) return CIRCLE;
	if (inName==HX_("SQUARE",9d,ac,74,0b)) return SQUARE;
	return super::__Field(inName,inCallProp);
}

static ::String FlxEmitterMode_obj_sStaticFields[] = {
	HX_("SQUARE",9d,ac,74,0b),
	HX_("CIRCLE",10,1e,90,08),
	::String(null())
};

static void FlxEmitterMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxEmitterMode_obj::CIRCLE,"CIRCLE");
	HX_MARK_MEMBER_NAME(FlxEmitterMode_obj::SQUARE,"SQUARE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxEmitterMode_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxEmitterMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxEmitterMode_obj::CIRCLE,"CIRCLE");
	HX_VISIT_MEMBER_NAME(FlxEmitterMode_obj::SQUARE,"SQUARE");
};
#endif

hx::Class FlxEmitterMode_obj::__mClass;

Dynamic __Create_FlxEmitterMode_obj() { return new FlxEmitterMode_obj; }

void FlxEmitterMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("flixel.effects.particles.FlxEmitterMode","\x1e","\xd4","\x79","\xe9"), hx::TCanCast< FlxEmitterMode_obj >,FlxEmitterMode_obj_sStaticFields,0,
	&__Create_FlxEmitterMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxEmitterMode_obj, FlxEmitterMode_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FlxEmitterMode_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxEmitterMode_obj::__GetStatic;
}

void FlxEmitterMode_obj::__boot()
{
CIRCLE = hx::CreateEnum< FlxEmitterMode_obj >(HX_HCSTRING("CIRCLE","\x10","\x1e","\x90","\x08"),1,0);
SQUARE = hx::CreateEnum< FlxEmitterMode_obj >(HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b"),0,0);
}


} // end namespace flixel
} // end namespace effects
} // end namespace particles
