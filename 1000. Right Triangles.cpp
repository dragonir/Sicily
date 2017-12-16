#include<iomanip>
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int t; 
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if((a*a)+(b*b)==(c*c)||(a*a)+(c*c)==(b*b)||(b*b)+(c*c)==(a*a))
		cout<<"YES"<<"\n";
		else 	cout<<"NO"<<"\n"; 
	}
	return 0;
} 
