// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_text_FontStyle
#include <openfl/_legacy/text/FontStyle.h>
#endif
namespace openfl{
namespace _legacy{
namespace text{

::openfl::_legacy::text::FontStyle FontStyle_obj::BOLD;

::openfl::_legacy::text::FontStyle FontStyle_obj::BOLD_ITALIC;

::openfl::_legacy::text::FontStyle FontStyle_obj::ITALIC;

::openfl::_legacy::text::FontStyle FontStyle_obj::REGULAR;

bool FontStyle_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOLD",85,49,dc,2b)) { outValue = FontStyle_obj::BOLD; return true; }
	if (inName==HX_("BOLD_ITALIC",aa,0d,c2,88)) { outValue = FontStyle_obj::BOLD_ITALIC; return true; }
	if (inName==HX_("ITALIC",f0,da,e6,b8)) { outValue = FontStyle_obj::ITALIC; return true; }
	if (inName==HX_("REGULAR",3c,26,5c,02)) { outValue = FontStyle_obj::REGULAR; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FontStyle_obj)

int FontStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BOLD",85,49,dc,2b)) return 0;
	if (inName==HX_("BOLD_ITALIC",aa,0d,c2,88)) return 1;
	if (inName==HX_("ITALIC",f0,da,e6,b8)) return 2;
	if (inName==HX_("REGULAR",3c,26,5c,02)) return 3;
	return super::__FindIndex(inName);
}

int FontStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BOLD",85,49,dc,2b)) return 0;
	if (inName==HX_("BOLD_ITALIC",aa,0d,c2,88)) return 0;
	if (inName==HX_("ITALIC",f0,da,e6,b8)) return 0;
	if (inName==HX_("REGULAR",3c,26,5c,02)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FontStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOLD",85,49,dc,2b)) return BOLD;
	if (inName==HX_("BOLD_ITALIC",aa,0d,c2,88)) return BOLD_ITALIC;
	if (inName==HX_("ITALIC",f0,da,e6,b8)) return ITALIC;
	if (inName==HX_("REGULAR",3c,26,5c,02)) return REGULAR;
	return super::__Field(inName,inCallProp);
}

static ::String FontStyle_obj_sStaticFields[] = {
	HX_("BOLD",85,49,dc,2b),
	HX_("BOLD_ITALIC",aa,0d,c2,88),
	HX_("ITALIC",f0,da,e6,b8),
	HX_("REGULAR",3c,26,5c,02),
	::String(null())
};

static void FontStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontStyle_obj::BOLD,"BOLD");
	HX_MARK_MEMBER_NAME(FontStyle_obj::BOLD_ITALIC,"BOLD_ITALIC");
	HX_MARK_MEMBER_NAME(FontStyle_obj::ITALIC,"ITALIC");
	HX_MARK_MEMBER_NAME(FontStyle_obj::REGULAR,"REGULAR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontStyle_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FontStyle_obj::BOLD,"BOLD");
	HX_VISIT_MEMBER_NAME(FontStyle_obj::BOLD_ITALIC,"BOLD_ITALIC");
	HX_VISIT_MEMBER_NAME(FontStyle_obj::ITALIC,"ITALIC");
	HX_VISIT_MEMBER_NAME(FontStyle_obj::REGULAR,"REGULAR");
};
#endif

hx::Class FontStyle_obj::__mClass;

Dynamic __Create_FontStyle_obj() { return new FontStyle_obj; }

void FontStyle_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.text.FontStyle","\xa5","\xe8","\x99","\x9a"), hx::TCanCast< FontStyle_obj >,FontStyle_obj_sStaticFields,0,
	&__Create_FontStyle_obj, &__Create,
	&super::__SGetClass(), &CreateFontStyle_obj, FontStyle_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FontStyle_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FontStyle_obj::__GetStatic;
}

void FontStyle_obj::__boot()
{
BOLD = hx::CreateEnum< FontStyle_obj >(HX_HCSTRING("BOLD","\x85","\x49","\xdc","\x2b"),0,0);
BOLD_ITALIC = hx::CreateEnum< FontStyle_obj >(HX_HCSTRING("BOLD_ITALIC","\xaa","\x0d","\xc2","\x88"),1,0);
ITALIC = hx::CreateEnum< FontStyle_obj >(HX_HCSTRING("ITALIC","\xf0","\xda","\xe6","\xb8"),2,0);
REGULAR = hx::CreateEnum< FontStyle_obj >(HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02"),3,0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace text
