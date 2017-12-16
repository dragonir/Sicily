#include<iostream> 
#include <typeinfo>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<stdexcept>
using namespace std;
void multi_throw(int i)
{
     cout << "Input: " << i << endl;
     if (i <= 0) throw logic_error("non-positive");
     if (i <= 1) throw i;
     if (i <= 5) throw runtime_error("run error");
     if (i >= 9)  throw out_of_range("too big");
}
int main(){
	int a;
    while(cin>>a){
		try{  
	        multi_throw(a); 
	    }
	    catch(int i){
	        cout<<"Exception: ";
	        cout<<i<<endl;
	        cout<<"Exception type: int"<<endl;
	    }
		catch(out_of_range& ex){
	        cout<<"Exception: ";
	        cout<<ex.what()<<endl;
	        cout<<"Exception type: class out_of_range"<<endl;
	    }  
	    catch(logic_error& ex){
	        cout<<"Exception: ";
	        cout<<ex.what()<<endl;
	        cout<<"Exception type: class logic_error"<<endl;
	    }
	    catch(runtime_error& ex){
	        cout<<"Exception: ";
	        cout<<ex.what()<<endl;
	        cout<<"Exception type: runtime_error"<<endl;
	    }   
	}           
     return 0;
    }                                 
