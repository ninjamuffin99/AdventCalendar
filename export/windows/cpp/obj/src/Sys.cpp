// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_27_print,"Sys","print",0x483745ec,"Sys.print","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",27,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_31_println,"Sys","println",0x3905f76e,"Sys.println","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",31,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_36_stdin,"Sys","stdin",0x03b9a107,"Sys.stdin","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",36,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_41_stdout,"Sys","stdout",0x3eb7d92c,"Sys.stdout","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",41,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_46_stderr,"Sys","stderr",0x3eb04003,"Sys.stderr","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",46,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_50_getChar,"Sys","getChar",0xc9142a0b,"Sys.getChar","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",50,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_54_args,"Sys","args",0xeaeddc7e,"Sys.args","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",54,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_57_getEnv,"Sys","getEnv",0xd9e05658,"Sys.getEnv","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",57,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_65_putEnv,"Sys","putEnv",0xa97fddbf,"Sys.putEnv","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",65,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_69_sleep,"Sys","sleep",0xfe70aad6,"Sys.sleep","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",69,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_73_setTimeLocale,"Sys","setTimeLocale",0x1bff3f88,"Sys.setTimeLocale","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",73,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_77_getCwd,"Sys","getCwd",0xd9ded99b,"Sys.getCwd","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",77,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_81_setCwd,"Sys","setCwd",0xa6272e0f,"Sys.setCwd","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",81,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_85_systemName,"Sys","systemName",0xbea5b6bb,"Sys.systemName","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",85,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_89_command,"Sys","command",0x363f8cca,"Sys.command","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",89,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_107_exit,"Sys","exit",0xed97463f,"Sys.exit","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",107,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_111_time,"Sys","time",0xf7761b2e,"Sys.time","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",111,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_115_cpuTime,"Sys","cpuTime",0x274f48d4,"Sys.cpuTime","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",115,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_119_executablePath,"Sys","executablePath",0xfc9406f0,"Sys.executablePath","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",119,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_123_programPath,"Sys","programPath",0x38d53548,"Sys.programPath","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",123,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_126_environment,"Sys","environment",0x24af52d2,"Sys.environment","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",126,0x57bbb657)

void Sys_obj::__construct() { }

Dynamic Sys_obj::__CreateEmpty() { return new Sys_obj; }

void *Sys_obj::_hx_vtable = 0;

Dynamic Sys_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sys_obj > _hx_result = new Sys_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sys_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x003f64ed;
}

void Sys_obj::print( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_27_print)
HXLINE(  27)		::__hxcpp_print(v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,print,(void))

void Sys_obj::println( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_31_println)
HXLINE(  31)		::__hxcpp_println(v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,println,(void))

 ::haxe::io::Input Sys_obj::_hx_stdin(){
            	HX_GC_STACKFRAME(&_hx_pos_6531db758068dd5d_36_stdin)
HXLINE(  36)		return  ::sys::io::FileInput_obj::__alloc( HX_CTX ,_hx_std_file_stdin());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_hx_stdin,return )

 ::haxe::io::Output Sys_obj::_hx_stdout(){
            	HX_GC_STACKFRAME(&_hx_pos_6531db758068dd5d_41_stdout)
HXLINE(  41)		return  ::sys::io::FileOutput_obj::__alloc( HX_CTX ,_hx_std_file_stdout());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_hx_stdout,return )

 ::haxe::io::Output Sys_obj::_hx_stderr(){
            	HX_GC_STACKFRAME(&_hx_pos_6531db758068dd5d_46_stderr)
HXLINE(  46)		return  ::sys::io::FileOutput_obj::__alloc( HX_CTX ,_hx_std_file_stderr());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_hx_stderr,return )

int Sys_obj::getChar(bool echo){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_50_getChar)
HXLINE(  50)		return _hx_std_sys_getch(echo);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,getChar,return )

::Array< ::String > Sys_obj::args(){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_54_args)
HXLINE(  54)		return ::__get_args();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,args,return )

::String Sys_obj::getEnv(::String s){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_57_getEnv)
HXLINE(  58)		::String v = _hx_std_get_env(s);
HXLINE(  59)		if (hx::IsNull( v )) {
HXLINE(  60)			return null();
            		}
HXLINE(  61)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,getEnv,return )

void Sys_obj::putEnv(::String s,::String v){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_65_putEnv)
HXLINE(  65)		_hx_std_put_env(s,v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sys_obj,putEnv,(void))

void Sys_obj::sleep(Float seconds){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_69_sleep)
HXLINE(  69)		_hx_std_sys_sleep(seconds);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,sleep,(void))

bool Sys_obj::setTimeLocale(::String loc){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_73_setTimeLocale)
HXLINE(  73)		return _hx_std_set_time_locale(loc);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,setTimeLocale,return )

::String Sys_obj::getCwd(){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_77_getCwd)
HXLINE(  77)		return _hx_std_get_cwd();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,getCwd,return )

void Sys_obj::setCwd(::String s){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_81_setCwd)
HXLINE(  81)		_hx_std_set_cwd(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,setCwd,(void))

::String Sys_obj::systemName(){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_85_systemName)
HXLINE(  85)		return _hx_std_sys_string();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,systemName,return )

int Sys_obj::command(::String cmd,::Array< ::String > args){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_89_command)
HXLINE(  89)		if (hx::IsNull( args )) {
HXLINE(  90)			return _hx_std_sys_command(cmd);
            		}
            		else {
HXLINE(  92)			::String _g = ::Sys_obj::systemName();
HXDLIN(  92)			if ((_g == HX_("Windows",63,06,c6,b5))) {
HXLINE(  94)				::Array< ::String > _g1 = ::Array_obj< ::String >::__new(0);
HXLINE(  95)				{
HXLINE(  95)					int _g11 = (int)0;
HXDLIN(  95)					::Array< ::String > _g2 = ::Array_obj< ::String >::__new(1)->init(0,::StringTools_obj::replace(cmd,HX_("/",2f,00,00,00),HX_("\\",5c,00,00,00)))->concat(args);
HXDLIN(  95)					while((_g11 < _g2->length)){
HXLINE(  95)						::String a = _g2->__get(_g11);
HXDLIN(  95)						_g11 = (_g11 + (int)1);
HXLINE(  96)						_g1->push(::StringTools_obj::quoteWinArg(a,true));
            					}
            				}
HXLINE(  94)				cmd = _g1->join(HX_(" ",20,00,00,00));
HXLINE(  98)				return _hx_std_sys_command(cmd);
            			}
            			else {
HXLINE( 100)				cmd = ::Array_obj< ::String >::__new(1)->init(0,cmd)->concat(args)->map(::StringTools_obj::quoteUnixArg_dyn())->join(HX_(" ",20,00,00,00));
HXLINE( 101)				return _hx_std_sys_command(cmd);
            			}
            		}
HXLINE(  89)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sys_obj,command,return )

void Sys_obj::exit(int code){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_107_exit)
HXLINE( 107)		::__hxcpp_exit(code);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,exit,(void))

Float Sys_obj::time(){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_111_time)
HXLINE( 111)		return _hx_std_sys_time();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,time,return )

Float Sys_obj::cpuTime(){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_115_cpuTime)
HXLINE( 115)		return _hx_std_sys_cpu_time();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,cpuTime,return )

::String Sys_obj::executablePath(){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_119_executablePath)
HXLINE( 119)		return _hx_std_sys_exe_path();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,executablePath,return )

::String Sys_obj::programPath(){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_123_programPath)
HXLINE( 123)		return _hx_std_sys_exe_path();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,programPath,return )

 ::haxe::ds::StringMap Sys_obj::environment(){
            	HX_GC_STACKFRAME(&_hx_pos_6531db758068dd5d_126_environment)
HXLINE( 127)		::Array< ::String > vars = _hx_std_sys_env();
HXLINE( 128)		 ::haxe::ds::StringMap result =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 129)		int i = (int)0;
HXLINE( 130)		while((i < vars->length)){
HXLINE( 131)			result->set(vars->__get(i),vars->__get((i + (int)1)));
HXLINE( 132)			i = (i + (int)2);
            		}
HXLINE( 134)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,environment,return )


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = args_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"time") ) { outValue = time_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"stdin") ) { outValue = _hx_stdin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sleep") ) { outValue = sleep_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stdout") ) { outValue = _hx_stdout_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"stderr") ) { outValue = _hx_stderr_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getEnv") ) { outValue = getEnv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"putEnv") ) { outValue = putEnv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCwd") ) { outValue = getCwd_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setCwd") ) { outValue = setCwd_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getChar") ) { outValue = getChar_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"command") ) { outValue = command_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cpuTime") ) { outValue = cpuTime_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemName") ) { outValue = systemName_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programPath") ) { outValue = programPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"environment") ) { outValue = environment_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setTimeLocale") ) { outValue = setTimeLocale_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"executablePath") ) { outValue = executablePath_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Sys_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Sys_obj_sStaticStorageInfo = 0;
#endif

static void Sys_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sys_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
};

#endif

hx::Class Sys_obj::__mClass;

static ::String Sys_obj_sStaticFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	HX_HCSTRING("stdin","\x48","\xb3","\x0d","\x84"),
	HX_HCSTRING("stdout","\xcb","\xbf","\xf3","\x07"),
	HX_HCSTRING("stderr","\xa2","\x26","\xec","\x07"),
	HX_HCSTRING("getChar","\x8c","\x0e","\x42","\x14"),
	HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"),
	HX_HCSTRING("getEnv","\xf7","\x3c","\x1c","\xa3"),
	HX_HCSTRING("putEnv","\x5e","\xc4","\xbb","\x72"),
	HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"),
	HX_HCSTRING("setTimeLocale","\xc9","\xfa","\x00","\x99"),
	HX_HCSTRING("getCwd","\x3a","\xc0","\x1a","\xa3"),
	HX_HCSTRING("setCwd","\xae","\x14","\x63","\x6f"),
	HX_HCSTRING("systemName","\xda","\xd8","\x82","\xf7"),
	HX_HCSTRING("command","\x4b","\x71","\x6d","\x81"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("cpuTime","\x55","\x2d","\x7d","\x72"),
	HX_HCSTRING("executablePath","\x8f","\x24","\x16","\xe1"),
	HX_HCSTRING("programPath","\x49","\xee","\x75","\xc1"),
	HX_HCSTRING("environment","\xd3","\x0b","\x50","\xad"),
	::String(null())
};

void Sys_obj::__register()
{
	hx::Object *dummy = new Sys_obj;
	Sys_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sys_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Sys_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sys_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sys_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sys_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sys_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

