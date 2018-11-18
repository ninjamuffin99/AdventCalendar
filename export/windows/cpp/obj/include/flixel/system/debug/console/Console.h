// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#ifndef INCLUDED_flixel_system_debug_console_Console
#define INCLUDED_flixel_system_debug_console_Console

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,completion,CompletionList)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,console,Console)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,console,ConsoleHistory)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{


class HXCPP_CLASS_ATTRIBUTES Console_obj : public  ::flixel::_hx_system::debug::Window_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::Window_obj super;
		typedef Console_obj OBJ_;
		Console_obj();

	public:
		enum { _hx_ClassId = 0x55cf6de8 };

		void __construct( ::flixel::_hx_system::debug::completion::CompletionList completionList);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.console.Console")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.console.Console"); }
		static hx::ObjectPtr< Console_obj > __new( ::flixel::_hx_system::debug::completion::CompletionList completionList);
		static hx::ObjectPtr< Console_obj > __alloc(hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::completion::CompletionList completionList);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Console_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Console","\x37","\x13","\x27","\xe6"); }

		static void __boot();
		static ::String DEFAULT_TEXT;
		 ::haxe::ds::StringMap registeredObjects;
		 ::haxe::ds::StringMap registeredFunctions;
		 ::haxe::ds::StringMap registeredHelp;
		::Array< ::Dynamic> objectStack;
		 ::openfl::_legacy::text::TextField input;
		bool inputMouseDown;
		bool stageMouseDown;
		 ::flixel::_hx_system::debug::console::ConsoleHistory history;
		 ::flixel::_hx_system::debug::completion::CompletionList completionList;
		void createInputTextField();
		::Dynamic createInputTextField_dyn();

		void registerEventListeners();
		::Dynamic registerEventListeners_dyn();

		void update();

		void onFocus( ::Dynamic _);
		::Dynamic onFocus_dyn();

		void onFocusLost( ::Dynamic _);
		::Dynamic onFocusLost_dyn();

		void onKeyDown( ::openfl::_legacy::events::KeyboardEvent e);
		::Dynamic onKeyDown_dyn();

		void setText(::String text);
		::Dynamic setText_dyn();

		void processCommand();
		::Dynamic processCommand_dyn();

		void reposition(Float X,Float Y);

		void registerFunction(::String functionAlias, ::Dynamic func,::String helpText);
		::Dynamic registerFunction_dyn();

		void registerObject(::String objectAlias, ::Dynamic anyObject);
		::Dynamic registerObject_dyn();

		void registerClass(hx::Class cl);
		::Dynamic registerClass_dyn();

		void registerEnum(hx::Class e);
		::Dynamic registerEnum_dyn();

		void destroy();

		void updateSize();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console

#endif /* INCLUDED_flixel_system_debug_console_Console */ 
