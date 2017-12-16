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
using namespace std;
class People{
private:
    int m_age;
public:
    People(int age):m_age(age){
        cout << "constructor" << endl;
    }
    //copy constructor
    People(const People& p){
        cout << "copy constructor" << endl;
    }

    ~People(){
        cout << "destructor" << endl;
    }
    int getAge() const{
        return m_age;
    }
};
int main(){
	People p1(18);
    cout << "p1's age " << p1.getAge() << endl;
    People p2(p1);
    cout << "p2's age " << p2.getAge() << endl;
	
}

