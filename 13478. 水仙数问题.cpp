#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
	int n; cin>>n;
	for(int x=100; x<n; x++){
		int a,b,c;
		a=x%10;
		c=x/100;
		b=(x-c*100)/10;
		if(a*a*a+b*b*b+c*c*c==x)
		cout<<x<<"\n";
	}
	return 0;
} 
