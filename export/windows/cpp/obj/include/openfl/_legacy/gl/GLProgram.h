// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#ifndef INCLUDED_openfl__legacy_gl_GLProgram
#define INCLUDED_openfl__legacy_gl_GLProgram

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLProgram)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLShader)

namespace openfl{
namespace _legacy{
namespace gl{


class HXCPP_CLASS_ATTRIBUTES GLProgram_obj : public  ::openfl::_legacy::gl::GLObject_obj
{
	public:
		typedef  ::openfl::_legacy::gl::GLObject_obj super;
		typedef GLProgram_obj OBJ_;
		GLProgram_obj();

	public:
		enum { _hx_ClassId = 0x55faaac2 };

		void __construct(int version, ::Dynamic id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.gl.GLProgram")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.gl.GLProgram"); }
		static hx::ObjectPtr< GLProgram_obj > __new(int version, ::Dynamic id);
		static hx::ObjectPtr< GLProgram_obj > __alloc(hx::Ctx *_hx_ctx,int version, ::Dynamic id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLProgram_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLProgram","\xdf","\x72","\x38","\x3d"); }

		::Array< ::Dynamic> shaders;
		void attach( ::openfl::_legacy::gl::GLShader shader);
		::Dynamic attach_dyn();

		::Array< ::Dynamic> getShaders();
		::Dynamic getShaders_dyn();

		::String getType();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl

#endif /* INCLUDED_openfl__legacy_gl_GLProgram */ 
