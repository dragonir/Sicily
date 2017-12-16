// Problem#: 14669
// Submission#: 3741007
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std; 
class A
{
public:
    A(int a0):a(a0){}
    void show(){ cout<<"a="<<a<<endl; }
private:
    int a;
};
 
class B:private A
{
public:
    //B(int a, int b):a(a),b(b){}
    B(int int1,int int2):A(int1){ b = int2;}
    void show(){
    	A::show();
    	cout<<"b="<<b<<endl;
    }
private:
    int b;
};
 

int main(){
    B b(1, 2);
    b.show();
    return 0;
}                                 
