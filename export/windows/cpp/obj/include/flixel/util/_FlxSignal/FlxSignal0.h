// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#define INCLUDED_flixel_util__FlxSignal_FlxSignal0

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal0)

namespace flixel{
namespace util{
namespace _FlxSignal{


class HXCPP_CLASS_ATTRIBUTES FlxSignal0_obj : public  ::flixel::util::_FlxSignal::FlxBaseSignal_obj
{
	public:
		typedef  ::flixel::util::_FlxSignal::FlxBaseSignal_obj super;
		typedef FlxSignal0_obj OBJ_;
		FlxSignal0_obj();

	public:
		enum { _hx_ClassId = 0x13c8c333 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util._FlxSignal.FlxSignal0")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.util._FlxSignal.FlxSignal0"); }
		static hx::ObjectPtr< FlxSignal0_obj > __new();
		static hx::ObjectPtr< FlxSignal0_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSignal0_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxSignal0","\x96","\x26","\x0e","\x70"); }

		void dispatch0();
		::Dynamic dispatch0_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal

#endif /* INCLUDED_flixel_util__FlxSignal_FlxSignal0 */ 
