// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_openfl__legacy_net__URLLoader_ManagersThreadMessage
#include <openfl/_legacy/net/_URLLoader/ManagersThreadMessage.h>
#endif
namespace openfl{
namespace _legacy{
namespace net{
namespace _URLLoader{

::openfl::_legacy::net::_URLLoader::ManagersThreadMessage ManagersThreadMessage_obj::GetCookiesCall( ::cpp::vm::Thread callerThread, ::Dynamic handle)
{
	return hx::CreateEnum< ManagersThreadMessage_obj >(HX_("GetCookiesCall",b7,b6,04,9b),0,2)->_hx_init(0,callerThread)->_hx_init(1,handle);
}

::openfl::_legacy::net::_URLLoader::ManagersThreadMessage ManagersThreadMessage_obj::GetCookiesResponse(::Array< ::String > ret)
{
	return hx::CreateEnum< ManagersThreadMessage_obj >(HX_("GetCookiesResponse",1a,cd,02,1d),1,1)->_hx_init(0,ret);
}

::openfl::_legacy::net::_URLLoader::ManagersThreadMessage ManagersThreadMessage_obj::InitializeCall(::String caCertFilePath)
{
	return hx::CreateEnum< ManagersThreadMessage_obj >(HX_("InitializeCall",2e,f2,9e,ef),2,1)->_hx_init(0,caCertFilePath);
}

bool ManagersThreadMessage_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GetCookiesCall",b7,b6,04,9b)) { outValue = ManagersThreadMessage_obj::GetCookiesCall_dyn(); return true; }
	if (inName==HX_("GetCookiesResponse",1a,cd,02,1d)) { outValue = ManagersThreadMessage_obj::GetCookiesResponse_dyn(); return true; }
	if (inName==HX_("InitializeCall",2e,f2,9e,ef)) { outValue = ManagersThreadMessage_obj::InitializeCall_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ManagersThreadMessage_obj)

int ManagersThreadMessage_obj::__FindIndex(::String inName)
{
	if (inName==HX_("GetCookiesCall",b7,b6,04,9b)) return 0;
	if (inName==HX_("GetCookiesResponse",1a,cd,02,1d)) return 1;
	if (inName==HX_("InitializeCall",2e,f2,9e,ef)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ManagersThreadMessage_obj,GetCookiesCall,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ManagersThreadMessage_obj,GetCookiesResponse,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ManagersThreadMessage_obj,InitializeCall,return)

int ManagersThreadMessage_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("GetCookiesCall",b7,b6,04,9b)) return 2;
	if (inName==HX_("GetCookiesResponse",1a,cd,02,1d)) return 1;
	if (inName==HX_("InitializeCall",2e,f2,9e,ef)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val ManagersThreadMessage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GetCookiesCall",b7,b6,04,9b)) return GetCookiesCall_dyn();
	if (inName==HX_("GetCookiesResponse",1a,cd,02,1d)) return GetCookiesResponse_dyn();
	if (inName==HX_("InitializeCall",2e,f2,9e,ef)) return InitializeCall_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ManagersThreadMessage_obj_sStaticFields[] = {
	HX_("GetCookiesCall",b7,b6,04,9b),
	HX_("GetCookiesResponse",1a,cd,02,1d),
	HX_("InitializeCall",2e,f2,9e,ef),
	::String(null())
};

static void ManagersThreadMessage_obj_sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void ManagersThreadMessage_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManagersThreadMessage_obj::__mClass,"__mClass");
};
#endif

hx::Class ManagersThreadMessage_obj::__mClass;

Dynamic __Create_ManagersThreadMessage_obj() { return new ManagersThreadMessage_obj; }

void ManagersThreadMessage_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.net._URLLoader.ManagersThreadMessage","\xa1","\x55","\x54","\x4b"), hx::TCanCast< ManagersThreadMessage_obj >,ManagersThreadMessage_obj_sStaticFields,0,
	&__Create_ManagersThreadMessage_obj, &__Create,
	&super::__SGetClass(), &CreateManagersThreadMessage_obj, ManagersThreadMessage_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , ManagersThreadMessage_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ManagersThreadMessage_obj::__GetStatic;
}

void ManagersThreadMessage_obj::__boot()
{
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace net
} // end namespace _URLLoader
