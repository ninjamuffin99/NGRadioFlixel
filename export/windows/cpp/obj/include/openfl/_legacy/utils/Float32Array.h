// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl__legacy_utils_Float32Array
#define INCLUDED_openfl__legacy_utils_Float32Array

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,_legacy,utils,Float32Array)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES Float32Array_obj : public  ::openfl::_legacy::utils::ArrayBufferView_obj
{
	public:
		typedef  ::openfl::_legacy::utils::ArrayBufferView_obj super;
		typedef Float32Array_obj OBJ_;
		Float32Array_obj();

	public:
		enum { _hx_ClassId = 0x446145d7 };

		void __construct( ::Dynamic bufferOrArray,hx::Null< int >  __o_start, ::Dynamic elements);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.utils.Float32Array")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.utils.Float32Array"); }
		static hx::ObjectPtr< Float32Array_obj > __new( ::Dynamic bufferOrArray,hx::Null< int >  __o_start, ::Dynamic elements);
		static hx::ObjectPtr< Float32Array_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic bufferOrArray,hx::Null< int >  __o_start, ::Dynamic elements);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Float32Array_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Float32Array","\x7e","\x42","\x27","\x90"); }

		static void __boot();
		typedef Float __array_access;
		static int SBYTES_PER_ELEMENT;
		static  ::openfl::_legacy::utils::Float32Array fromMatrix( ::openfl::geom::Matrix3D matrix);
		static ::Dynamic fromMatrix_dyn();

		int BYTES_PER_ELEMENT;
		int length;
		void _hx___setLength(int nbFloat);
		::Dynamic _hx___setLength_dyn();

		virtual Float __get(int index);
		::Dynamic __get_dyn();

		virtual void __set(int index,Float value);
		::Dynamic __set_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_Float32Array */ 
