#include<cstdio>
#include<algorithm>
#include <iostream>
using namespace std;

istream& operator>>(istream& in, Complex& complex){
    string x;
    in >> complex.real;
    in >> complex.imag;
    in >> x; 
    return in;
}
    
ostream& operator<<(ostream& out, const Complex& complex){
    if(complex.imag >=0)
        out << complex.real << "+" << complex.imag << "i";
    else
        out << complex.real << complex.imag << "i";
    return out;
}

Complex operator*(const Complex&complex1, const Complex&complex2)
{
    Complex temp;
    temp.real = complex1.real * complex2.real - complex1.imag * complex2.imag;
    temp.imag = complex1.real * complex2.imag + complex1.imag * complex2.real;
    return temp;
}                                 

