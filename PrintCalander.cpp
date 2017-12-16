#include<iostream>
#include<iomanip>
using namespace std;

void printMonth(int year,int month);
void printMonthTitle(int year ,int month);
void printMonthName(int month);
void printMonthBody(int year,int month);
int getStartDay(int year,int month);
int getTotalNumberOfDays(int year ,int month);
int getNumberOfDaysInMonth(int year,int month);
bool isLeapYear(int year);

int main(){
	//要求用户输入年份
	cout<<"Enter full year (e.g.,2001):";
	int year; cin>>year;
	//要求用户输入月份
	cout<<"Enter month in number between 1 and 12 :";
	int month ; cin>> month;
	//打印这一年一个月的日历
	printMonth(year, month);
	return 0; 
} 
//打印这一年一个月的日历
void printMonth(int year, int month){
	//打印日历的表头
	printMonthTitle(year , month);
	//打印日历体
	printMonthBody(year,month); 
}

void printMonthTitle(int year, int month){
	printMonthName(month);
	cout<<" "<<year<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Sun Mon Tue Wed Thu Fri Sat"<<endl;
}
