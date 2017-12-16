#include<iostream>
#include<cstdio>
#include<cmath> 
#include<iomanip>
using namespace std;
int main(){
	int x1,y1,x2,y2,x3,y3;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
		if(x1==0&&x2==0&&x3==0&&y1==0&&y2==0&&y3==0) break;
		int ax=x2-x1,ay=y2-y1,bx=x2-x3,by=y2-y3;
		if(ax*by-ay*bx<0)  cout<<0<<"\n";
		else cout<<1<<"\n"; 
	}
	return 0;
}
