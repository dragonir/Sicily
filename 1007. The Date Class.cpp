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

class Date{
public:
    Date(int newYear, int newMonth, int newDay);
    ~Date();
    static int getNumberOfObjects(); //return the number of Date objects 
 
private:
    int year;
    int month;
    int day;
    static int numberOfObjects; //count the number of Date objects
};
 
int Date::numberOfObjects = 0;
Date::Date(int newYear, int newMonth, int newDay) :year(newYear), month(newMonth), day(newDay){
    ++numberOfObjects;
}
Date::~Date(){
    --numberOfObjects;
}
 
int Date::getNumberOfObjects(){
    return numberOfObjects;
}
 
int main()
{
    Date dtT(2, 3, 5);
    std::cout << dtT.getNumberOfObjects() << std::endl;
    return 0;
}
