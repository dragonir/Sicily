#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<stack>
#include<iomanip>
#include<cctype>
#include<vector> 
using namespace std;
class Object {
public:
    Object(int i) {
        id = i;
        count++;
        cout<<"Object "<<id<<" is created, we've got "<<count<<" object(s) now!"<<endl;
    }
    ~Object() { 
        count--;
        cout<<"Object "<<id<<" is deleted, we've got "<<count<<" object(s) now!"<<endl;
    }
private:
    int id;
    static int count;
};
int Object::count = 0;
 
 void TestObjects(){
    Object *o1 = new Object(1); 
    Object *o2 = new Object(2);
    Object *o3 = new Object(3);
     
    delete o3;
    o3 = NULL;
     
    delete o2;
    o2 = NULL; 
     
    Object *o4 = new Object(4);
     
    delete o4;
    o4 = NULL; 
     
    delete o1;
    o1 = NULL; 
 }

 int main(){
    TestObjects();
    return 0;
}
