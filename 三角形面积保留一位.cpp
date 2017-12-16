#include<iostream>
#include<cstdio>
#include<cmath> 
#include<iomanip>
using namespace std;
int main(){
	int x1,y1,x2,y2,x3,y3;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
		if(x1==0&&x2==0&&x3==0&&y1==0&&y2==0&&y3==0) break;
		double a,b,c,p,s;
		a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		p=(a+b+c)/2;
		//printf("%.lf",sqrt(p*(p-a)*(p-b)*(p-c)));
		cout<<fixed<<setprecision(1)<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
	}
	return 0;
}
