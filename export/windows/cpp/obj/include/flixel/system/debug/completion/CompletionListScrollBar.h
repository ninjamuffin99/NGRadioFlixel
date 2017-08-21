// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_flixel_system_debug_completion_CompletionListScrollBar
#define INCLUDED_flixel_system_debug_completion_CompletionListScrollBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS4(flixel,_hx_system,debug,completion,CompletionListScrollBar)
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace completion{


class HXCPP_CLASS_ATTRIBUTES CompletionListScrollBar_obj : public  ::openfl::_legacy::display::Sprite_obj
{
	public:
		typedef  ::openfl::_legacy::display::Sprite_obj super;
		typedef CompletionListScrollBar_obj OBJ_;
		CompletionListScrollBar_obj();

	public:
		enum { _hx_ClassId = 0x01190ea8 };

		void __construct(int x,int y,int width,int height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.completion.CompletionListScrollBar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.completion.CompletionListScrollBar"); }
		static hx::ObjectPtr< CompletionListScrollBar_obj > __new(int x,int y,int width,int height);
		static hx::ObjectPtr< CompletionListScrollBar_obj > __alloc(hx::Ctx *_hx_ctx,int x,int y,int width,int height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CompletionListScrollBar_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CompletionListScrollBar","\xac","\x4a","\x22","\x5b"); }

		static void __boot();
		static int BG_COLOR;
		static int HANDLE_COLOR;
		 ::openfl::_legacy::display::Bitmap handle;
		void updateHandle(int lower,int items,int entries);
		::Dynamic updateHandle_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion

#endif /* INCLUDED_flixel_system_debug_completion_CompletionListScrollBar */ 
