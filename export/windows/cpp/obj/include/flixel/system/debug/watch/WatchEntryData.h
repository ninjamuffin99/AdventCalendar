// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#define INCLUDED_flixel_system_debug_watch_WatchEntryData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,WatchEntryData)
HX_DECLARE_CLASS1(hscript,Expr)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{


class WatchEntryData_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef WatchEntryData_obj OBJ_;

	public:
		WatchEntryData_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.system.debug.watch.WatchEntryData","\x54","\x23","\x6d","\xa5"); }
		::String __ToString() const { return HX_HCSTRING("WatchEntryData.","\x01","\xe4","\xe7","\x77") + _hx_tag; }

		static ::flixel::_hx_system::debug::watch::WatchEntryData EXPRESSION(::String expression, ::hscript::Expr parsedExpr);
		static ::Dynamic EXPRESSION_dyn();
		static ::flixel::_hx_system::debug::watch::WatchEntryData FIELD( ::Dynamic object,::String field);
		static ::Dynamic FIELD_dyn();
		static ::flixel::_hx_system::debug::watch::WatchEntryData QUICK(::String value);
		static ::Dynamic QUICK_dyn();
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_WatchEntryData */ 
