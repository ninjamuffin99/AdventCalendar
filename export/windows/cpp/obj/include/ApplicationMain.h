// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#ifndef INCLUDED_ApplicationMain
#define INCLUDED_ApplicationMain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ApplicationMain)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES ApplicationMain_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ApplicationMain_obj OBJ_;
		ApplicationMain_obj();

	public:
		enum { _hx_ClassId = 0x4a39ff89 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="ApplicationMain")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"ApplicationMain"); }

		hx::ObjectPtr< ApplicationMain_obj > __new() {
			hx::ObjectPtr< ApplicationMain_obj > __this = new ApplicationMain_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ApplicationMain_obj > __alloc(hx::Ctx *_hx_ctx) {
			ApplicationMain_obj *__this = (ApplicationMain_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ApplicationMain_obj), false, "ApplicationMain"));
			*(void **)__this = ApplicationMain_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ApplicationMain_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ApplicationMain","\x89","\xff","\x39","\x4a"); }

		static  ::openfl::_legacy::display::Sprite barA;
		static  ::openfl::_legacy::display::Sprite barB;
		static  ::openfl::_legacy::display::Sprite container;
		static int forceHeight;
		static int forceWidth;
		static void main();
		static ::Dynamic main_dyn();

};


#endif /* INCLUDED_ApplicationMain */ 
