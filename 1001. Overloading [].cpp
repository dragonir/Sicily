#include <iostream>
#include<cstdio>
using namespace std;
 
class Complex
{
public:
    Complex(int a=0, int b=0): real(a), imag(b) {}
    Complex operator[](int);
    void display();
private:
    int real;
    int imag;
};
Complex Complex ::operator[](int index){
    if(index==0) return real;
    else if(index==1) return imag;
}

 /*int main(){
 	Complex c(3,4);
 	c.display();
 	
 }*/
