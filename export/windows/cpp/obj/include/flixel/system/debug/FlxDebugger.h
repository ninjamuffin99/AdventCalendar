// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#define INCLUDED_flixel_system_debug_FlxDebugger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,debug,FlxDebugger)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,FlxDebuggerLayout)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,VCR)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,completion,CompletionList)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,console,Console)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,interaction,Interaction)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,log,BitmapLog)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,log,Log)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,stats,Stats)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,Watch)
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,FlxHorizontalAlign)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)

namespace flixel{
namespace _hx_system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES FlxDebugger_obj : public  ::openfl::_legacy::display::Sprite_obj
{
	public:
		typedef  ::openfl::_legacy::display::Sprite_obj super;
		typedef FlxDebugger_obj OBJ_;
		FlxDebugger_obj();

	public:
		enum { _hx_ClassId = 0x22273017 };

		void __construct(Float Width,Float Height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.FlxDebugger")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.FlxDebugger"); }
		static hx::ObjectPtr< FlxDebugger_obj > __new(Float Width,Float Height);
		static hx::ObjectPtr< FlxDebugger_obj > __alloc(hx::Ctx *_hx_ctx,Float Width,Float Height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxDebugger_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxDebugger","\x93","\xfe","\x01","\xa8"); }

		static void __boot();
		static int GUTTER;
		static int TOP_HEIGHT;
		 ::flixel::_hx_system::debug::stats::Stats stats;
		 ::flixel::_hx_system::debug::log::Log log;
		 ::flixel::_hx_system::debug::watch::Watch watch;
		 ::flixel::_hx_system::debug::log::BitmapLog bitmapLog;
		 ::flixel::_hx_system::debug::VCR vcr;
		 ::flixel::_hx_system::debug::console::Console console;
		 ::flixel::_hx_system::debug::interaction::Interaction interaction;
		 ::flixel::_hx_system::debug::completion::CompletionList completionList;
		 ::flixel::_hx_system::debug::FlxDebuggerLayout _layout;
		 ::openfl::_legacy::geom::Point _screen;
		 ::openfl::_legacy::geom::Rectangle _screenBounds;
		 ::haxe::ds::EnumValueMap _buttons;
		 ::openfl::_legacy::display::Sprite _topBar;
		::Array< ::Dynamic> _windows;
		bool _usingSystemCursor;
		bool _wasMouseVisible;
		bool _wasUsingSystemCursor;
		void destroy();
		::Dynamic destroy_dyn();

		void update();
		::Dynamic update_dyn();

		void setLayout( ::flixel::_hx_system::debug::FlxDebuggerLayout Layout);
		::Dynamic setLayout_dyn();

		void resetLayout();
		::Dynamic resetLayout_dyn();

		void onResize(Float Width,Float Height);
		::Dynamic onResize_dyn();

		void updateBounds();
		::Dynamic updateBounds_dyn();

		Float hAlignButtons(::Array< ::Dynamic> Sprites,hx::Null< Float >  Padding,hx::Null< bool >  Set,hx::Null< Float >  LeftOffset);
		::Dynamic hAlignButtons_dyn();

		void resetButtonLayout();
		::Dynamic resetButtonLayout_dyn();

		 ::flixel::_hx_system::ui::FlxSystemButton addButton( ::flixel::util::FlxHorizontalAlign Position, ::openfl::_legacy::display::BitmapData Icon, ::Dynamic UpHandler,hx::Null< bool >  ToggleMode,hx::Null< bool >  UpdateLayout);
		::Dynamic addButton_dyn();

		void removeButton( ::flixel::_hx_system::ui::FlxSystemButton Button,hx::Null< bool >  UpdateLayout);
		::Dynamic removeButton_dyn();

		void addWindowToggleButton( ::flixel::_hx_system::debug::Window window,hx::Class icon);
		::Dynamic addWindowToggleButton_dyn();

		 ::flixel::_hx_system::debug::Window addWindow( ::flixel::_hx_system::debug::Window window);
		::Dynamic addWindow_dyn();

		void removeWindow( ::flixel::_hx_system::debug::Window window);
		::Dynamic removeWindow_dyn();

		 ::openfl::_legacy::display::DisplayObject addChild( ::openfl::_legacy::display::DisplayObject child);

		void onMouseOver( ::Dynamic _);
		::Dynamic onMouseOver_dyn();

		void onMouseOut( ::Dynamic _);
		::Dynamic onMouseOut_dyn();

		void onMouseFocus();
		::Dynamic onMouseFocus_dyn();

		void onMouseFocusLost();
		::Dynamic onMouseFocusLost_dyn();

		void toggleDrawDebug();
		::Dynamic toggleDrawDebug_dyn();

		void openHomepage();
		::Dynamic openHomepage_dyn();

		void openGitHub();
		::Dynamic openGitHub_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_FlxDebugger */ 
