// Generated by Haxe 3.4.1 (git build master @ 5c44548)
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Tools
#include <hscript/Tools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e328a509a67a04f9_28_iter,"hscript.Tools","iter",0xa012dc86,"hscript.Tools.iter","hscript/Tools.hx",28,0x0fa283ff)
HX_LOCAL_STACK_FRAME(_hx_pos_e328a509a67a04f9_63_map,"hscript.Tools","map",0xde4a3aee,"hscript.Tools.map","hscript/Tools.hx",63,0x0fa283ff)
HX_LOCAL_STACK_FRAME(_hx_pos_e328a509a67a04f9_97_expr,"hscript.Tools","expr",0x9d7114a3,"hscript.Tools.expr","hscript/Tools.hx",97,0x0fa283ff)
HX_LOCAL_STACK_FRAME(_hx_pos_e328a509a67a04f9_105_mk,"hscript.Tools","mk",0x3cb11f4c,"hscript.Tools.mk","hscript/Tools.hx",105,0x0fa283ff)
namespace hscript{

void Tools_obj::__construct() { }

Dynamic Tools_obj::__CreateEmpty() { return new Tools_obj; }

void *Tools_obj::_hx_vtable = 0;

Dynamic Tools_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Tools_obj > _hx_result = new Tools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29c54554;
}

void Tools_obj::iter( ::hscript::Expr e, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_e328a509a67a04f9_28_iter)
HXLINE(  28)		switch((int)(_hx_getEnumValueIndex(e))){
            			case (int)0: case (int)1: {
            			}
            			break;
            			case (int)2: {
HXLINE(  30)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  30)				if (hx::IsNotNull( e1 )) {
HXLINE(  30)					f(e1);
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(  31)				 ::hscript::Expr e2 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  31)				f(e2);
            			}
            			break;
            			case (int)4: {
HXLINE(  32)				::Array< ::Dynamic> el = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  32)				{
HXLINE(  32)					int _g = (int)0;
HXDLIN(  32)					while((_g < el->length)){
HXLINE(  32)						 ::hscript::Expr e3 = el->__get(_g).StaticCast<  ::hscript::Expr >();
HXDLIN(  32)						_g = (_g + (int)1);
HXDLIN(  32)						f(e3);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE(  33)				 ::hscript::Expr e4 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  33)				f(e4);
            			}
            			break;
            			case (int)6: {
HXLINE(  34)				 ::hscript::Expr e21 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  34)				 ::hscript::Expr e11 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  34)				{
HXLINE(  34)					f(e11);
HXDLIN(  34)					f(e21);
            				}
            			}
            			break;
            			case (int)7: {
HXLINE(  35)				 ::hscript::Expr e5 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  35)				f(e5);
            			}
            			break;
            			case (int)8: {
HXLINE(  36)				::Array< ::Dynamic> args = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  36)				 ::hscript::Expr e6 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  36)				{
HXLINE(  36)					f(e6);
HXDLIN(  36)					{
HXLINE(  36)						int _g1 = (int)0;
HXDLIN(  36)						while((_g1 < args->length)){
HXLINE(  36)							 ::hscript::Expr a = args->__get(_g1).StaticCast<  ::hscript::Expr >();
HXDLIN(  36)							_g1 = (_g1 + (int)1);
HXDLIN(  36)							f(a);
            						}
            					}
            				}
            			}
            			break;
            			case (int)9: {
HXLINE(  37)				 ::hscript::Expr e22 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  37)				 ::hscript::Expr e12 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  37)				 ::hscript::Expr c = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  37)				{
HXLINE(  37)					f(c);
HXDLIN(  37)					f(e12);
HXDLIN(  37)					if (hx::IsNotNull( e22 )) {
HXLINE(  37)						f(e22);
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE(  38)				 ::hscript::Expr e7 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  38)				 ::hscript::Expr c1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  38)				{
HXLINE(  38)					f(c1);
HXDLIN(  38)					f(e7);
            				}
            			}
            			break;
            			case (int)11: {
HXLINE(  40)				 ::hscript::Expr e8 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  40)				 ::hscript::Expr it = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  40)				{
HXLINE(  40)					f(it);
HXDLIN(  40)					f(e8);
            				}
            			}
            			break;
            			case (int)12: case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE(  42)				 ::hscript::Expr e9 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  42)				f(e9);
            			}
            			break;
            			case (int)15: {
HXLINE(  43)				 ::hscript::Expr e10 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  43)				if (hx::IsNotNull( e10 )) {
HXLINE(  43)					f(e10);
            				}
            			}
            			break;
            			case (int)16: {
HXLINE(  44)				 ::hscript::Expr i = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  44)				 ::hscript::Expr e13 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  44)				{
HXLINE(  44)					f(e13);
HXDLIN(  44)					f(i);
            				}
            			}
            			break;
            			case (int)17: {
HXLINE(  45)				::Array< ::Dynamic> el1 = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  45)				{
HXLINE(  45)					int _g2 = (int)0;
HXDLIN(  45)					while((_g2 < el1->length)){
HXLINE(  45)						 ::hscript::Expr e14 = el1->__get(_g2).StaticCast<  ::hscript::Expr >();
HXDLIN(  45)						_g2 = (_g2 + (int)1);
HXDLIN(  45)						f(e14);
            					}
            				}
            			}
            			break;
            			case (int)18: {
HXLINE(  46)				::Array< ::Dynamic> el2 = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  46)				{
HXLINE(  46)					int _g3 = (int)0;
HXDLIN(  46)					while((_g3 < el2->length)){
HXLINE(  46)						 ::hscript::Expr e15 = el2->__get(_g3).StaticCast<  ::hscript::Expr >();
HXDLIN(  46)						_g3 = (_g3 + (int)1);
HXDLIN(  46)						f(e15);
            					}
            				}
            			}
            			break;
            			case (int)19: {
HXLINE(  47)				 ::hscript::Expr e16 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  47)				f(e16);
            			}
            			break;
            			case (int)20: {
HXLINE(  48)				 ::hscript::Expr c2 = e->_hx_getObject(3).StaticCast<  ::hscript::Expr >();
HXDLIN(  48)				 ::hscript::Expr e17 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  48)				{
HXLINE(  48)					f(e17);
HXDLIN(  48)					f(c2);
            				}
            			}
            			break;
            			case (int)21: {
HXLINE(  49)				::Array< ::Dynamic> fl = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  49)				{
HXLINE(  49)					int _g4 = (int)0;
HXDLIN(  49)					while((_g4 < fl->length)){
HXLINE(  49)						 ::Dynamic fi = fl->__get(_g4);
HXDLIN(  49)						_g4 = (_g4 + (int)1);
HXDLIN(  49)						f( ::Dynamic(fi->__Field(HX_("e",65,00,00,00),hx::paccDynamic)));
            					}
            				}
            			}
            			break;
            			case (int)22: {
HXLINE(  50)				 ::hscript::Expr e23 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  50)				 ::hscript::Expr e18 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  50)				 ::hscript::Expr c3 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  50)				{
HXLINE(  50)					f(c3);
HXDLIN(  50)					f(e18);
HXDLIN(  50)					f(e23);
            				}
            			}
            			break;
            			case (int)23: {
HXLINE(  51)				 ::hscript::Expr def = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  51)				::Array< ::Dynamic> cases = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  51)				 ::hscript::Expr e19 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  51)				{
HXLINE(  52)					f(e19);
HXLINE(  53)					{
HXLINE(  53)						int _g5 = (int)0;
HXDLIN(  53)						while((_g5 < cases->length)){
HXLINE(  53)							 ::Dynamic c4 = cases->__get(_g5);
HXDLIN(  53)							_g5 = (_g5 + (int)1);
HXLINE(  54)							{
HXLINE(  54)								int _g11 = (int)0;
HXDLIN(  54)								::Array< ::Dynamic> _g21 = ( (::Array< ::Dynamic>)(c4->__Field(HX_("values",e2,03,b7,4f),hx::paccDynamic)) );
HXDLIN(  54)								while((_g11 < _g21->length)){
HXLINE(  54)									 ::hscript::Expr v = _g21->__get(_g11).StaticCast<  ::hscript::Expr >();
HXDLIN(  54)									_g11 = (_g11 + (int)1);
HXDLIN(  54)									f(v);
            								}
            							}
HXLINE(  55)							f( ::Dynamic(c4->__Field(HX_("expr",35,fd,1d,43),hx::paccDynamic)));
            						}
            					}
HXLINE(  57)					if (hx::IsNotNull( def )) {
HXLINE(  57)						f(def);
            					}
            				}
            			}
            			break;
            			case (int)24: {
HXLINE(  39)				 ::hscript::Expr e20 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  39)				 ::hscript::Expr c5 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  39)				{
HXLINE(  39)					f(c5);
HXDLIN(  39)					f(e20);
            				}
            			}
            			break;
            			case (int)25: {
HXLINE(  58)				 ::hscript::Expr e24 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  58)				::Array< ::Dynamic> args1 = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  58)				::String name = e->_hx_getString(0);
HXDLIN(  58)				{
HXLINE(  58)					if (hx::IsNotNull( args1 )) {
HXLINE(  58)						int _g6 = (int)0;
HXDLIN(  58)						while((_g6 < args1->length)){
HXLINE(  58)							 ::hscript::Expr a1 = args1->__get(_g6).StaticCast<  ::hscript::Expr >();
HXDLIN(  58)							_g6 = (_g6 + (int)1);
HXDLIN(  58)							f(a1);
            						}
            					}
HXDLIN(  58)					f(e24);
            				}
            			}
            			break;
            			case (int)26: {
HXLINE(  59)				 ::hscript::Expr e25 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  59)				f(e25);
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,iter,(void))

 ::hscript::Expr Tools_obj::map( ::hscript::Expr e, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_e328a509a67a04f9_63_map)
HXLINE(  64)		 ::hscript::Expr edef;
HXDLIN(  64)		switch((int)(_hx_getEnumValueIndex(e))){
            			case (int)2: {
HXLINE(  66)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  66)				 ::hscript::CType t = e->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN(  66)				::String n = e->_hx_getString(0);
HXDLIN(  66)				 ::hscript::Expr edef1;
HXDLIN(  66)				if (hx::IsNotNull( e1 )) {
HXLINE(  66)					edef1 = f(e1);
            				}
            				else {
HXLINE(  66)					edef1 = null();
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EVar(n,t,edef1);
            			}
            			break;
            			case (int)3: {
HXLINE(  67)				 ::hscript::Expr e2 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE(  64)				edef = ::hscript::Expr_obj::EParent(f(e2));
            			}
            			break;
            			case (int)4: {
HXLINE(  68)				::Array< ::Dynamic> el = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  68)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  68)				{
HXLINE(  68)					int _g1 = (int)0;
HXDLIN(  68)					while((_g1 < el->length)){
HXLINE(  68)						 ::hscript::Expr e3 = el->__get(_g1).StaticCast<  ::hscript::Expr >();
HXDLIN(  68)						_g1 = (_g1 + (int)1);
HXDLIN(  68)						_g->push(f(e3));
            					}
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EBlock(_g);
            			}
            			break;
            			case (int)5: {
HXLINE(  69)				::String fi = e->_hx_getString(1);
HXDLIN(  69)				 ::hscript::Expr e4 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE(  64)				edef = ::hscript::Expr_obj::EField(f(e4),fi);
            			}
            			break;
            			case (int)6: {
HXLINE(  70)				 ::hscript::Expr e21 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  70)				 ::hscript::Expr e11 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  70)				::String op = e->_hx_getString(0);
HXDLIN(  70)				 ::hscript::Expr edef2 = f(e11);
HXLINE(  64)				edef = ::hscript::Expr_obj::EBinop(op,edef2,f(e21));
            			}
            			break;
            			case (int)7: {
HXLINE(  71)				 ::hscript::Expr e5 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  71)				bool pre = e->_hx_getBool(1);
HXDLIN(  71)				::String op1 = e->_hx_getString(0);
HXLINE(  64)				edef = ::hscript::Expr_obj::EUnop(op1,pre,f(e5));
            			}
            			break;
            			case (int)8: {
HXLINE(  72)				::Array< ::Dynamic> args = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  72)				 ::hscript::Expr e6 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  72)				 ::hscript::Expr edef3 = f(e6);
HXDLIN(  72)				::Array< ::Dynamic> _g2 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  72)				{
HXLINE(  72)					int _g11 = (int)0;
HXDLIN(  72)					while((_g11 < args->length)){
HXLINE(  72)						 ::hscript::Expr a = args->__get(_g11).StaticCast<  ::hscript::Expr >();
HXDLIN(  72)						_g11 = (_g11 + (int)1);
HXDLIN(  72)						_g2->push(f(a));
            					}
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::ECall(edef3,_g2);
            			}
            			break;
            			case (int)9: {
HXLINE(  73)				 ::hscript::Expr e22 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  73)				 ::hscript::Expr e12 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  73)				 ::hscript::Expr c = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  73)				 ::hscript::Expr edef4 = f(c);
HXDLIN(  73)				 ::hscript::Expr edef5 = f(e12);
HXDLIN(  73)				 ::hscript::Expr edef6;
HXDLIN(  73)				if (hx::IsNotNull( e22 )) {
HXLINE(  73)					edef6 = f(e22);
            				}
            				else {
HXLINE(  73)					edef6 = null();
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EIf(edef4,edef5,edef6);
            			}
            			break;
            			case (int)10: {
HXLINE(  74)				 ::hscript::Expr e7 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  74)				 ::hscript::Expr c1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  74)				 ::hscript::Expr edef7 = f(c1);
HXLINE(  64)				edef = ::hscript::Expr_obj::EWhile(edef7,f(e7));
            			}
            			break;
            			case (int)11: {
HXLINE(  76)				 ::hscript::Expr e8 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  76)				 ::hscript::Expr it = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  76)				::String v = e->_hx_getString(0);
HXDLIN(  76)				 ::hscript::Expr edef8 = f(it);
HXLINE(  64)				edef = ::hscript::Expr_obj::EFor(v,edef8,f(e8));
            			}
            			break;
            			case (int)0: case (int)1: case (int)12: case (int)13: {
HXLINE(  64)				edef = e;
            			}
            			break;
            			case (int)14: {
HXLINE(  77)				 ::hscript::CType t1 = e->_hx_getObject(3).StaticCast<  ::hscript::CType >();
HXDLIN(  77)				::String name = e->_hx_getString(2);
HXDLIN(  77)				 ::hscript::Expr e9 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  77)				::Array< ::Dynamic> args1 = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  64)				edef = ::hscript::Expr_obj::EFunction(args1,f(e9),name,t1);
            			}
            			break;
            			case (int)15: {
HXLINE(  78)				 ::hscript::Expr e10 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  78)				 ::hscript::Expr edef9;
HXDLIN(  78)				if (hx::IsNotNull( e10 )) {
HXLINE(  78)					edef9 = f(e10);
            				}
            				else {
HXLINE(  78)					edef9 = null();
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EReturn(edef9);
            			}
            			break;
            			case (int)16: {
HXLINE(  79)				 ::hscript::Expr i = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  79)				 ::hscript::Expr e13 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  79)				 ::hscript::Expr edef10 = f(e13);
HXLINE(  64)				edef = ::hscript::Expr_obj::EArray(edef10,f(i));
            			}
            			break;
            			case (int)17: {
HXLINE(  80)				::Array< ::Dynamic> el1 = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  80)				::Array< ::Dynamic> _g3 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  80)				{
HXLINE(  80)					int _g12 = (int)0;
HXDLIN(  80)					while((_g12 < el1->length)){
HXLINE(  80)						 ::hscript::Expr e14 = el1->__get(_g12).StaticCast<  ::hscript::Expr >();
HXDLIN(  80)						_g12 = (_g12 + (int)1);
HXDLIN(  80)						_g3->push(f(e14));
            					}
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EArrayDecl(_g3);
            			}
            			break;
            			case (int)18: {
HXLINE(  81)				::Array< ::Dynamic> el2 = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  81)				::String cl = e->_hx_getString(0);
HXDLIN(  81)				::Array< ::Dynamic> _g4 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  81)				{
HXLINE(  81)					int _g13 = (int)0;
HXDLIN(  81)					while((_g13 < el2->length)){
HXLINE(  81)						 ::hscript::Expr e15 = el2->__get(_g13).StaticCast<  ::hscript::Expr >();
HXDLIN(  81)						_g13 = (_g13 + (int)1);
HXDLIN(  81)						_g4->push(f(e15));
            					}
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::ENew(cl,_g4);
            			}
            			break;
            			case (int)19: {
HXLINE(  82)				 ::hscript::Expr e16 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE(  64)				edef = ::hscript::Expr_obj::EThrow(f(e16));
            			}
            			break;
            			case (int)20: {
HXLINE(  83)				 ::hscript::Expr c2 = e->_hx_getObject(3).StaticCast<  ::hscript::Expr >();
HXDLIN(  83)				 ::hscript::CType t2 = e->_hx_getObject(2).StaticCast<  ::hscript::CType >();
HXDLIN(  83)				::String v1 = e->_hx_getString(1);
HXDLIN(  83)				 ::hscript::Expr e17 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  83)				 ::hscript::Expr edef11 = f(e17);
HXLINE(  64)				edef = ::hscript::Expr_obj::ETry(edef11,v1,t2,f(c2));
            			}
            			break;
            			case (int)21: {
HXLINE(  84)				::Array< ::Dynamic> fl = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  84)				::Array< ::Dynamic> _g5 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  84)				{
HXLINE(  84)					int _g14 = (int)0;
HXDLIN(  84)					while((_g14 < fl->length)){
HXLINE(  84)						 ::Dynamic fi1 = fl->__get(_g14);
HXDLIN(  84)						_g14 = (_g14 + (int)1);
HXDLIN(  84)						::String fi2 = ( (::String)(fi1->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) );
HXDLIN(  84)						_g5->push( ::Dynamic(hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("e",65,00,00,00),f( ::Dynamic(fi1->__Field(HX_("e",65,00,00,00),hx::paccDynamic))))
            							->setFixed(1,HX_("name",4b,72,ff,48),fi2)));
            					}
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EObject(_g5);
            			}
            			break;
            			case (int)22: {
HXLINE(  85)				 ::hscript::Expr e23 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  85)				 ::hscript::Expr e18 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  85)				 ::hscript::Expr c3 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  85)				 ::hscript::Expr edef12 = f(c3);
HXDLIN(  85)				 ::hscript::Expr edef13 = f(e18);
HXLINE(  64)				edef = ::hscript::Expr_obj::ETernary(edef12,edef13,f(e23));
            			}
            			break;
            			case (int)23: {
HXLINE(  86)				 ::hscript::Expr def = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  86)				::Array< ::Dynamic> cases = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  86)				 ::hscript::Expr e19 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  86)				 ::hscript::Expr edef14 = f(e19);
HXDLIN(  86)				::Array< ::Dynamic> _g6 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  86)				{
HXLINE(  86)					int _g15 = (int)0;
HXDLIN(  86)					while((_g15 < cases->length)){
HXLINE(  86)						 ::Dynamic c4 = cases->__get(_g15);
HXDLIN(  86)						_g15 = (_g15 + (int)1);
HXDLIN(  86)						::Array< ::Dynamic> _g21 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  86)						{
HXLINE(  86)							int _g31 = (int)0;
HXDLIN(  86)							::Array< ::Dynamic> _g41 = ( (::Array< ::Dynamic>)(c4->__Field(HX_("values",e2,03,b7,4f),hx::paccDynamic)) );
HXDLIN(  86)							while((_g31 < _g41->length)){
HXLINE(  86)								 ::hscript::Expr v2 = _g41->__get(_g31).StaticCast<  ::hscript::Expr >();
HXDLIN(  86)								_g31 = (_g31 + (int)1);
HXDLIN(  86)								_g21->push(f(v2));
            							}
            						}
HXDLIN(  86)						::Array< ::Dynamic> edef15 = _g21;
HXDLIN(  86)						_g6->push( ::Dynamic(hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("expr",35,fd,1d,43),f( ::Dynamic(c4->__Field(HX_("expr",35,fd,1d,43),hx::paccDynamic))))
            							->setFixed(1,HX_("values",e2,03,b7,4f),edef15)));
            					}
            				}
HXDLIN(  86)				::Array< ::Dynamic> edef16 = _g6;
HXDLIN(  86)				 ::hscript::Expr edef17;
HXDLIN(  86)				if (hx::IsNull( def )) {
HXLINE(  86)					edef17 = null();
            				}
            				else {
HXLINE(  86)					edef17 = f(def);
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::ESwitch(edef14,edef16,edef17);
            			}
            			break;
            			case (int)24: {
HXLINE(  75)				 ::hscript::Expr e20 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  75)				 ::hscript::Expr c5 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  75)				 ::hscript::Expr edef18 = f(c5);
HXLINE(  64)				edef = ::hscript::Expr_obj::EDoWhile(edef18,f(e20));
            			}
            			break;
            			case (int)25: {
HXLINE(  87)				 ::hscript::Expr e24 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  87)				::Array< ::Dynamic> args2 = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  87)				::String name1 = e->_hx_getString(0);
HXDLIN(  87)				::Array< ::Dynamic> edef19;
HXDLIN(  87)				if (hx::IsNull( args2 )) {
HXLINE(  87)					edef19 = null();
            				}
            				else {
HXLINE(  87)					::Array< ::Dynamic> _g7 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  87)					{
HXLINE(  87)						int _g16 = (int)0;
HXDLIN(  87)						while((_g16 < args2->length)){
HXLINE(  87)							 ::hscript::Expr a1 = args2->__get(_g16).StaticCast<  ::hscript::Expr >();
HXDLIN(  87)							_g16 = (_g16 + (int)1);
HXDLIN(  87)							_g7->push(f(a1));
            						}
            					}
HXDLIN(  87)					edef19 = _g7;
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EMeta(name1,edef19,f(e24));
            			}
            			break;
            			case (int)26: {
HXLINE(  88)				 ::hscript::CType t3 = e->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN(  88)				 ::hscript::Expr e25 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE(  64)				edef = ::hscript::Expr_obj::ECheckType(f(e25),t3);
            			}
            			break;
            		}
HXLINE(  90)		return edef;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,map,return )

 ::hscript::Expr Tools_obj::expr( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_e328a509a67a04f9_97_expr)
HXLINE(  97)		return e;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,expr,return )

 ::hscript::Expr Tools_obj::mk( ::hscript::Expr e, ::hscript::Expr p){
            	HX_STACKFRAME(&_hx_pos_e328a509a67a04f9_105_mk)
HXLINE( 105)		return e;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,mk,return )


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { outValue = mk_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"expr") ) { outValue = expr_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Tools_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Tools_obj_sStaticStorageInfo = 0;
#endif

static void Tools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Tools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tools_obj::__mClass,"__mClass");
};

#endif

hx::Class Tools_obj::__mClass;

static ::String Tools_obj_sStaticFields[] = {
	HX_HCSTRING("iter","\x18","\xc5","\xbf","\x45"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"),
	HX_HCSTRING("mk","\x5e","\x5f","\x00","\x00"),
	::String(null())
};

void Tools_obj::__register()
{
	hx::Object *dummy = new Tools_obj;
	Tools_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hscript.Tools","\xc0","\x7f","\xf4","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Tools_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Tools_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Tools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Tools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hscript
