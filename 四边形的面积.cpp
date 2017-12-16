#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,area;
	cout<<"please enter wide and long"<<endl;
	cin>>a;
	cin>>b;
	cout<<"the area is";
	area=a*b;
	cout<<fixed<<setprecision(12)<<area<<endl;
	return 0;
} 
