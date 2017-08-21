// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#define INCLUDED_openfl__legacy_text_TextFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_6a72aef085c91603_28_new)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)

namespace openfl{
namespace _legacy{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextFormat_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextFormat_obj OBJ_;
		TextFormat_obj();

	public:
		enum { _hx_ClassId = 0x7e602729 };

		void __construct(::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target,::String align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.text.TextFormat")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.text.TextFormat"); }

		hx::ObjectPtr< TextFormat_obj > __new(::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target,::String align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading) {
			hx::ObjectPtr< TextFormat_obj > __this = new TextFormat_obj();
			__this->__construct(font,size,color,bold,italic,underline,url,target,align,leftMargin,rightMargin,indent,leading);
			return __this;
		}

		static hx::ObjectPtr< TextFormat_obj > __alloc(hx::Ctx *_hx_ctx,::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target,::String align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading) {
			TextFormat_obj *__this = (TextFormat_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextFormat_obj), true, "openfl._legacy.text.TextFormat"));
			*(void **)__this = TextFormat_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_6a72aef085c91603_28_new)
HXLINE(  30)		( ( ::openfl::_legacy::text::TextFormat)(__this) )->font = font;
HXLINE(  31)		( ( ::openfl::_legacy::text::TextFormat)(__this) )->size = size;
HXLINE(  32)		( ( ::openfl::_legacy::text::TextFormat)(__this) )->color = color;
HXLINE(  33)		( ( ::openfl::_legacy::text::TextFormat)(__this) )->bold = bold;
HXLINE(  34)		( ( ::openfl::_legacy::text::TextFormat)(__this) )->italic = italic;
HXLINE(  35)		( ( ::openfl::_legacy::text::TextFormat)(__this) )->underline = underline;
HXLINE(  36)		( ( ::openfl::_legacy::text::TextFormat)(__this) )->url = url;
HXLINE(  37)		( ( ::openfl::_legacy::text::TextFormat)(__this) )->target = target;
HXLINE(  38)		( ( ::openfl::_legacy::text::TextFormat)(__this) )->align = align;
HXLINE(  39)		( ( ::openfl::_legacy::text::TextFormat)(__this) )->leftMargin = leftMargin;
HXLINE(  40)		( ( ::openfl::_legacy::text::TextFormat)(__this) )->rightMargin = rightMargin;
HXLINE(  41)		( ( ::openfl::_legacy::text::TextFormat)(__this) )->indent = indent;
HXLINE(  42)		( ( ::openfl::_legacy::text::TextFormat)(__this) )->leading = leading;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFormat_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextFormat","\xe4","\x13","\x30","\x2b"); }

		::String align;
		 ::Dynamic blockIndent;
		 ::Dynamic bold;
		 ::Dynamic bullet;
		 ::Dynamic color;
		::String display;
		::String font;
		 ::Dynamic indent;
		 ::Dynamic italic;
		 ::Dynamic kerning;
		 ::Dynamic leading;
		 ::Dynamic leftMargin;
		 ::Dynamic letterSpacing;
		 ::Dynamic rightMargin;
		 ::Dynamic size;
		::Array< int > tabStops;
		::String target;
		 ::Dynamic underline;
		::String url;
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace text

#endif /* INCLUDED_openfl__legacy_text_TextFormat */ 
