#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cctype>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	double a,c;
	int b;
	while(cin>>a>>b>>c&&b!=0){
		int i;
		double r=0.5*(a/12/5280);// °ë¾¶
		double s=2*r*3.1415927; // ÖÜ³¤
		double distance=b*s;
		double speed=(distance/c)*3600;
		//cout<<distance<<" "<<speed;
		cout<<"Trip #"<<i+1<<": "<<fixed<<setprecision(2)<<distance<<" "<<fixed<<setprecision(2)<<speed<<"\n";
		i+=1;
	}
}
