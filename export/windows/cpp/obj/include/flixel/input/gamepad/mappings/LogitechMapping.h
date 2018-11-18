// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#ifndef INCLUDED_flixel_input_gamepad_mappings_LogitechMapping
#define INCLUDED_flixel_input_gamepad_mappings_LogitechMapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,FlxGamepadMapping)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,LogitechMapping)

namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{


class HXCPP_CLASS_ATTRIBUTES LogitechMapping_obj : public  ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj
{
	public:
		typedef  ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj super;
		typedef LogitechMapping_obj OBJ_;
		LogitechMapping_obj();

	public:
		enum { _hx_ClassId = 0x046f8a5b };

		void __construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.mappings.LogitechMapping")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.mappings.LogitechMapping"); }
		static hx::ObjectPtr< LogitechMapping_obj > __new( ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static hx::ObjectPtr< LogitechMapping_obj > __alloc(hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LogitechMapping_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("LogitechMapping","\xf3","\x87","\xa0","\xcf"); }

		static void __boot();
		static int LEFT_ANALOG_STICK_FAKE_X;
		static int LEFT_ANALOG_STICK_FAKE_Y;
		static int RIGHT_ANALOG_STICK_FAKE_X;
		static int RIGHT_ANALOG_STICK_FAKE_Y;
		void initValues();

		int getID(int rawID);

		int getRawID(int ID);

		int axisIndexToRawID(int axisID);

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings

#endif /* INCLUDED_flixel_input_gamepad_mappings_LogitechMapping */ 
