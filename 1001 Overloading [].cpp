#include<iostream>
using namespace std;
class Complex
{
public:
    Complex(): real(0), imag(0) {}
    Complex(int a=0, int b=0): real(a), imag(b) {}
    int getReal() const { return real; }
    int getImag() const { return imag; }
    int& operator[](int index);
   
private:
    int real;
    int imag;
};
int& Complex::operator[](int index){
    if (index == 0)
        return real;
    else
        return imag;
}                              

