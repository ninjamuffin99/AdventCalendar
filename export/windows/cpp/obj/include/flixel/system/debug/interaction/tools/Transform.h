// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Transform
#define INCLUDED_flixel_system_debug_interaction_tools_Transform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,TooltipOverlay)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,interaction,Interaction)
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,Tool)
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,Transform)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES Transform_obj : public  ::flixel::_hx_system::debug::interaction::tools::Tool_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::interaction::tools::Tool_obj super;
		typedef Transform_obj OBJ_;
		Transform_obj();

	public:
		enum { _hx_ClassId = 0x5b4b9abb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.tools.Transform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.interaction.tools.Transform"); }
		static hx::ObjectPtr< Transform_obj > __new();
		static hx::ObjectPtr< Transform_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Transform_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Transform","\x4c","\x0d","\x66","\xe7"); }

		static void __boot();
		static Float OUTLINE_PADDING;
		static Float MARKER_SIZE;
		static Float MARKER_INTERACTION_DISTANCE;
		static Float RESIZE_STEP;
		static ::String CURSOR_ROTATE;
		static ::String CURSOR_SCALE_X;
		static ::String CURSOR_SCALE_Y;
		static ::String CURSOR_SCALE_XY;
		static int MARKER_ROTATE;
		static int MARKER_SCALE_X;
		static int MARKER_SCALE_XY;
		static int MARKER_SCALE_Y;
		 ::flixel::math::FlxPoint _actionTargetStartScale;
		Float _actionTargetStartAngle;
		 ::flixel::math::FlxPoint _actionStartPoint;
		bool _actionHappening;
		int _actionMarker;
		 ::flixel::math::FlxPoint _actionScaleDirection;
		 ::flixel::_hx_system::debug::TooltipOverlay _tooltip;
		::Array< ::Dynamic> _markers;
		 ::flixel::FlxSprite _target;
		 ::flixel::math::FlxRect _targetArea;
		 ::flixel::math::FlxPoint _mouseCursor;
		 ::flixel::_hx_system::debug::interaction::tools::Tool init( ::flixel::_hx_system::debug::interaction::Interaction brain);

		void updateTargetArea();
		::Dynamic updateTargetArea_dyn();

		void startAction(int whichMarker);
		::Dynamic startAction_dyn();

		void stopAction();
		::Dynamic stopAction_dyn();

		::String getCursorNameByMarker(int marker);
		::Dynamic getCursorNameByMarker_dyn();

		void handleInteractionsWithMarkersUI();
		::Dynamic handleInteractionsWithMarkersUI_dyn();

		::String formatFloat(Float number);
		::Dynamic formatFloat_dyn();

		void showTooltip(::String text);
		::Dynamic showTooltip_dyn();

		void updateScaleActionDirection();
		::Dynamic updateScaleActionDirection_dyn();

		void updateScaleAction();
		::Dynamic updateScaleAction_dyn();

		void updateRotateAction();
		::Dynamic updateRotateAction_dyn();

		void updateAction();
		::Dynamic updateAction_dyn();

		void updateMarkersPosition();
		::Dynamic updateMarkersPosition_dyn();

		void updateMarkersRotation(Float outlineWidth,Float outlineHeight);
		::Dynamic updateMarkersRotation_dyn();

		void update();

		void drawTargetAreaOutline( ::openfl::_legacy::display::Graphics gfx);
		::Dynamic drawTargetAreaOutline_dyn();

		void drawMarkers( ::openfl::_legacy::display::Graphics gfx);
		::Dynamic drawMarkers_dyn();

		void draw();

		void activate();

		void deactivate();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools

#endif /* INCLUDED_flixel_system_debug_interaction_tools_Transform */ 
