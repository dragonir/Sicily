#include <iostream>
#include <string>
using namespace std;

class A {
public:
    virtual ~A() {};
};
class B: public A {}; 
class C: public B {}; 
string verify( object obj){
if(obj.GetType() == A) return "granpa";
else if(obj.GetType() == B) return "father";
else if(obj.GetType() == C) return "son";
}
 /*string verify(A *a){
 	A*p =& a;
 	A*a1=dynamic_cast<A*>(p);
 	B*b1=dynamic_cast<B*>(p);
 	C*c1=dynamic_cast<C*>(p);
 	
 	if(a1!=NULL){
 		return "grandpa";
 	}
 	if(b1!=NULL){
 		return "father";
 	}
 	if(c1!=NULL){
 		return "son";
 	}
 }*/

