#include<iostream> 
#include<cmath>
#include<iomanip>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
	double x1,y1,x2,y2,x3,y3,x4,y4;
	double d1,d2,d3,d4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	d1=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
	d2=sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3));
	d3=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	d4=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	if(d1==d2==d3==d4&&((x1*x2) + (y1*y2) == 0)&&x1>=-100&&x1<=100&&x2>=-100&&x2<=100&&x3>=-100&&x3<=100&&x4>=-100&&x4<=100&&y1>=-100&&y1<=100&&y2>=-100&&y2<=100&&y3>=-100&&y3<=100&&y4>=-100&&y4<=100&&d1!=0&&d2!=0&&d3!=0&&d4!=0)
	cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
	
}
