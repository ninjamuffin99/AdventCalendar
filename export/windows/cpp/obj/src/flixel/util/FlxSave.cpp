// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_SharedObject
#include <openfl/_legacy/net/SharedObject.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2a670326751daced_35_new,"flixel.util.FlxSave","new",0x2c4b0107,"flixel.util.FlxSave.new","flixel/util/FlxSave.hx",35,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_43_destroy,"flixel.util.FlxSave","destroy",0x7bc03d21,"flixel.util.FlxSave.destroy","flixel/util/FlxSave.hx",43,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_59_bind,"flixel.util.FlxSave","bind",0x8d6a5736,"flixel.util.FlxSave.bind","flixel/util/FlxSave.hx",59,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_86_close,"flixel.util.FlxSave","close",0xc505001f,"flixel.util.FlxSave.close","flixel/util/FlxSave.hx",86,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_99_flush,"flixel.util.FlxSave","flush",0x7f3d4b2b,"flixel.util.FlxSave.flush","flixel/util/FlxSave.hx",99,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_126_erase,"flixel.util.FlxSave","erase",0xefbed14d,"flixel.util.FlxSave.erase","flixel/util/FlxSave.hx",126,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_144_onDone,"flixel.util.FlxSave","onDone",0x76016afa,"flixel.util.FlxSave.onDone","flixel/util/FlxSave.hx",144,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_169_checkBinding,"flixel.util.FlxSave","checkBinding",0xf0eb45d6,"flixel.util.FlxSave.checkBinding","flixel/util/FlxSave.hx",169,0xc43cd0a9)
namespace flixel{
namespace util{

void FlxSave_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_35_new)
HXLINE(  35)		this->_closeRequested = false;
            	}

Dynamic FlxSave_obj::__CreateEmpty() { return new FlxSave_obj; }

void *FlxSave_obj::_hx_vtable = 0;

Dynamic FlxSave_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxSave_obj > _hx_result = new FlxSave_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSave_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fe0dc11;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_util_FlxSave__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::util::FlxSave_obj::destroy,
};

void *FlxSave_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_util_FlxSave__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxSave_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_43_destroy)
HXLINE(  44)		this->_sharedObject = null();
HXLINE(  45)		this->name = null();
HXLINE(  46)		this->data = null();
HXLINE(  47)		this->_onComplete = null();
HXLINE(  48)		this->_closeRequested = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,destroy,(void))

bool FlxSave_obj::bind(::String Name){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_59_bind)
HXLINE(  60)		this->destroy();
HXLINE(  61)		this->name = Name;
HXLINE(  62)		try {
            			HX_STACK_CATCHABLE( ::openfl::errors::Error, 0);
HXLINE(  64)			this->_sharedObject = ::openfl::_legacy::net::SharedObject_obj::getLocal(this->name,null(),null());
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::openfl::errors::Error >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::openfl::errors::Error e = _hx_e;
HXLINE(  68)				::flixel::FlxG_obj::log->advanced(HX_("There was a problem binding to\nthe shared object data from FlxSave.",75,65,d7,ba),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE(  69)				this->destroy();
HXLINE(  70)				return false;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  72)		this->data = this->_sharedObject->data;
HXLINE(  73)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,bind,return )

bool FlxSave_obj::close(hx::Null< int >  __o_MinFileSize, ::Dynamic OnComplete){
int MinFileSize = __o_MinFileSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_86_close)
HXLINE(  87)		this->_closeRequested = true;
HXLINE(  88)		return this->flush(MinFileSize,OnComplete);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,close,return )

bool FlxSave_obj::flush(hx::Null< int >  __o_MinFileSize, ::Dynamic OnComplete){
int MinFileSize = __o_MinFileSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_99_flush)
HXLINE( 100)		if (!(this->checkBinding())) {
HXLINE( 102)			return false;
            		}
HXLINE( 104)		this->_onComplete = OnComplete;
HXLINE( 105)		 ::Dynamic result = null();
HXLINE( 106)		try {
            			HX_STACK_CATCHABLE( ::openfl::errors::Error, 0);
HXLINE( 108)			result = this->_sharedObject->flush(null());
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::openfl::errors::Error >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::openfl::errors::Error _ = _hx_e;
HXLINE( 112)				return this->onDone(::flixel::util::FlxSaveStatus_obj::ERROR_dyn());
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 115)		 ::flixel::util::FlxSaveStatus _hx_tmp;
HXDLIN( 115)		if (hx::IsEq( result,(int)0 )) {
HXLINE( 115)			_hx_tmp = ::flixel::util::FlxSaveStatus_obj::SUCCESS_dyn();
            		}
            		else {
HXLINE( 115)			_hx_tmp = ::flixel::util::FlxSaveStatus_obj::PENDING_dyn();
            		}
HXDLIN( 115)		return this->onDone(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,flush,return )

bool FlxSave_obj::erase(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_126_erase)
HXLINE( 127)		if (!(this->checkBinding())) {
HXLINE( 129)			return false;
            		}
HXLINE( 131)		this->_sharedObject->clear();
HXLINE( 132)		this->data =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE( 133)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,erase,return )

bool FlxSave_obj::onDone( ::flixel::util::FlxSaveStatus Result){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_144_onDone)
HXLINE( 145)		switch((int)(_hx_getEnumValueIndex(Result))){
            			case (int)1: {
HXLINE( 148)				::flixel::FlxG_obj::log->advanced(HX_("FlxSave is requesting extra storage space.",65,ed,43,59),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            			}
            			break;
            			case (int)2: {
HXLINE( 150)				::flixel::FlxG_obj::log->advanced(HX_("There was a problem flushing\nthe shared object data from FlxSave.",0d,4e,e5,ad),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 154)		if (hx::IsNotNull( this->_onComplete )) {
HXLINE( 155)			 ::Dynamic _hx_tmp = this->_onComplete;
HXDLIN( 155)			_hx_tmp(hx::IsEq( Result,::flixel::util::FlxSaveStatus_obj::SUCCESS_dyn() ));
            		}
HXLINE( 157)		if (this->_closeRequested) {
HXLINE( 158)			this->destroy();
            		}
HXLINE( 160)		return hx::IsEq( Result,::flixel::util::FlxSaveStatus_obj::SUCCESS_dyn() );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,onDone,return )

bool FlxSave_obj::checkBinding(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_169_checkBinding)
HXLINE( 170)		if (hx::IsNull( this->_sharedObject )) {
HXLINE( 172)			::flixel::FlxG_obj::log->advanced(HX_("You must call FlxSave.bind()\nbefore you can read or write data.",7f,af,d9,ea),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 173)			return false;
            		}
HXLINE( 175)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,checkBinding,return )


hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__new() {
	hx::ObjectPtr< FlxSave_obj > __this = new FlxSave_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxSave_obj *__this = (FlxSave_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxSave_obj), true, "flixel.util.FlxSave"));
	*(void **)__this = FlxSave_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSave_obj::FlxSave_obj()
{
}

void FlxSave_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSave);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_closeRequested,"_closeRequested");
	HX_MARK_END_CLASS();
}

void FlxSave_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_closeRequested,"_closeRequested");
}

hx::Val FlxSave_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"bind") ) { return hx::Val( bind_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return hx::Val( flush_dyn() ); }
		if (HX_FIELD_EQ(inName,"erase") ) { return hx::Val( erase_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onDone") ) { return hx::Val( onDone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return hx::Val( _onComplete ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkBinding") ) { return hx::Val( checkBinding_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { return hx::Val( _sharedObject ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { return hx::Val( _closeRequested ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxSave_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { _sharedObject=inValue.Cast<  ::openfl::_legacy::net::SharedObject >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { _closeRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSave_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("_sharedObject","\x23","\xee","\x9d","\xaa"));
	outFields->push(HX_HCSTRING("_closeRequested","\x35","\x43","\xb2","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxSave_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSave_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsString,(int)offsetof(FlxSave_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::openfl::_legacy::net::SharedObject*/ ,(int)offsetof(FlxSave_obj,_sharedObject),HX_HCSTRING("_sharedObject","\x23","\xee","\x9d","\xaa")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSave_obj,_onComplete),HX_HCSTRING("_onComplete","\x17","\xa2","\x08","\x30")},
	{hx::fsBool,(int)offsetof(FlxSave_obj,_closeRequested),HX_HCSTRING("_closeRequested","\x35","\x43","\xb2","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxSave_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSave_obj_sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("_sharedObject","\x23","\xee","\x9d","\xaa"),
	HX_HCSTRING("_onComplete","\x17","\xa2","\x08","\x30"),
	HX_HCSTRING("_closeRequested","\x35","\x43","\xb2","\xfb"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("erase","\xe6","\xe8","\x1c","\x73"),
	HX_HCSTRING("onDone","\x41","\xf9","\xf7","\xe4"),
	HX_HCSTRING("checkBinding","\x5d","\x43","\xb4","\x6c"),
	::String(null()) };

static void FlxSave_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSave_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSave_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSave_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSave_obj::__mClass;

void FlxSave_obj::__register()
{
	hx::Object *dummy = new FlxSave_obj;
	FlxSave_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxSave","\x95","\x71","\x4e","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxSave_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxSave_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSave_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSave_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSave_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSave_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
