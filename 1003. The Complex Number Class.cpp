// Problem#: 14167
// Submission#: 3642241
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<cstdio>
#include<iostream>
using namespace std;
class Complex{
    double real, imag;
    public:
    Complex(double x = 0,double y = 0){
    real=x;
    imag=y;
    } 
    void print(){
        if(real==0&&imag==0)cout<<"0";
        else if(real==0){
            if(imag==1)cout<<"i";
            else if(imag==-1)cout<<"-i";
            else cout<<imag<<"i";
        }
        else if(imag==0)cout<<real;
        else if(imag<0){
            if(imag==-1)cout<<real<<"-i";
            else cout<<real<<imag<<"i";
        }
        else if(imag>0){
            if(imag==1)cout<<real<<"+i";
            else cout<<real<<"+"<<imag<<"i";
        }
        cout<<endl;
    }       
    friend Complex add(const Complex& c1, const Complex& c2){
        Complex c3;
        c3.real=c1.real+c2.real;
        c3.imag=c1.imag+c2.imag;
        return c3;
    }   
    friend Complex multiply(const Complex& c1, const Complex& c2){
        Complex c3;
        c3.real=c1.real*c2.real-c1.imag*c2.imag;
        c3.imag=c1.real*c2.imag+c1.imag*c2.real;
        return c3;
    }   
};                                 
