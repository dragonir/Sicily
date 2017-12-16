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
class Date
{
public:
    Date(int y, int m, int d) { year=y; month=m; day=d; }
    int getYear() { return year; }
    void setYear(int y) { year = y; }
private:
    int year, month, day;
};
 
class Person
{
public:
    Person(int id, int year, int month, int day) {
        this->id = id;
        birthDate = new Date(year, month, day);
    }
    Person(const Person& p){
    }
    ~Person() { delete birthDate; }
    int getId() { return id; }
    Date* getBirthDate() const{ return birthDate; }
private:
    int id;
    Date* birthDate;
};
