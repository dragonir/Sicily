#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int t; cin >>t;
	while(t--){
		double x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		double a,b,c;
		a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		double x; x=a+b+c; 
		cout<<fixed<<setprecision(5)<<x<<endl;
	}
	return 0; 
} 
