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
	//Ҫ���û��������
	cout<<"Enter full year (e.g.,2001):";
	int year; cin>>year;
	//Ҫ���û������·�
	cout<<"Enter month in number between 1 and 12 :";
	int month ; cin>> month;
	//��ӡ��һ��һ���µ�����
	printMonth(year, month);
	return 0; 
} 
//��ӡ��һ��һ���µ�����
void printMonth(int year, int month){
	//��ӡ�����ı�ͷ
	printMonthTitle(year , month);
	//��ӡ������
	printMonthBody(year,month); 
}

void printMonthTitle(int year, int month){
	printMonthName(month);
	cout<<" "<<year<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Sun Mon Tue Wed Thu Fri Sat"<<endl;
}
