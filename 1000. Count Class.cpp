// Problem#: 14164
// Submission#: 3643038
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<cstdlib>
#include<cctype>
#include<algorithm>
using namespace std;
int len=0;
class Count{
    public:
        double a[1000];
        /*static int len;
        static int summ;
        static int var;
        static int ping;
        static int max;
        static int min;*/
    Count()
    {
        memset(a,0,sizeof(a));
    }
     
    void push(double value){
        a[len]=value;
        len++;              
    }
    
    int size(){
        return len;
    }
    
    double sum(){
        double summ=0;
        for(int i=0;i<len; i++){
            summ+=a[i];
        }
        return summ;
    }
    
    double minimum(){
        sort(a,a+len);
        return a[0] ;
    }
    
    double maximum(){
        sort(a,a+len);
        return a[len-1];
    }
    
    double range(){
        return maximum()-minimum();
    }
    
    double mean(){
        double ping=sum()/len;
        return ping;
    }
    
    double variance(){
        double dd=0;
        for(int i=0 ;i<len; i++){
            dd+=(a[i]-mean())*(a[i]-mean());
        }
        double var=(dd/len);
        return var;
    }
    
    double standard_deviation(){
        return sqrt(variance());
    }
};                                 
