// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#define INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_util_LabelValuePair)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)
HX_DECLARE_CLASS2(flixel,util,LabelValuePair)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxPool_flixel_util_LabelValuePair_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxPool_flixel_util_LabelValuePair_obj OBJ_;
		FlxPool_flixel_util_LabelValuePair_obj();

	public:
		enum { _hx_ClassId = 0x7f541560 };

		void __construct(hx::Class classObj);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxPool_flixel_util_LabelValuePair")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.util.FlxPool_flixel_util_LabelValuePair"); }
		static hx::ObjectPtr< FlxPool_flixel_util_LabelValuePair_obj > __new(hx::Class classObj);
		static hx::ObjectPtr< FlxPool_flixel_util_LabelValuePair_obj > __alloc(hx::Ctx *_hx_ctx,hx::Class classObj);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPool_flixel_util_LabelValuePair_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::cpp::VirtualArray clear_615cc599();
		::String __ToString() const { return HX_HCSTRING("FlxPool_flixel_util_LabelValuePair","\x82","\xb9","\x6f","\xa4"); }

		::Array< ::Dynamic> _pool;
		hx::Class _class;
		int _count;
		 ::flixel::util::LabelValuePair get();
		::Dynamic get_dyn();

		void put( ::flixel::util::LabelValuePair obj);
		::Dynamic put_dyn();

		void putUnsafe( ::flixel::util::LabelValuePair obj);
		::Dynamic putUnsafe_dyn();

		void preAllocate(int numObjects);
		::Dynamic preAllocate_dyn();

		::Array< ::Dynamic> clear();
		::Dynamic clear_dyn();

		int get_length();
		::Dynamic get_length_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair */ 
