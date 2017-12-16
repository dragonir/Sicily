#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		double x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		double ans=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		cout<<fixed<<setprecision(2)<<ans<<endl;
	}
	return 0;
} 
