// Problem#: 14166
// Submission#: 3642688
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
#include<cstdio>
using namespace std;
class MyClass {
public: 
   /* MyClass(int a, int b, int c){
        this->a=a;
        this->b=b;
        this->c=c;  
    }
    void print(){
        if(a<=3)
        cout<<"Object "<<a<<" ("<<a<<","<<b<<","<<c<<") is created."<<endl;
        else cout<<"Error: No more than 3 objects should be created!"<<endl;
        //Object 1 (1, 0, 0) is created.
    }*/
   
    MyClass(int a, int b, int c){
        static int count=1;
        if(count<=3)
        cout<<"Object "<<a<<" ("<<a<<", "<<b<<", "<<c<<") is created."<<endl;
        else if(count>3) cout<<"Error: No more than 3 objects should be created!"<<endl;
        count++;
    }
private:
    static int count;
    int a, b, c;
};                                 
