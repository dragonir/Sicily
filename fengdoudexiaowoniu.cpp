#include<iostream>
#include<cmath>
int main(){
	using namespace std;
	int n;cin>>n;
	while(n--){
		long long h;cin>>h;
		if(h<=10)
		cout<<"1"<<"\n";
		if(h>10){
		int m=(h-10)/5;h%=5;
		if(!h)cout<<m+1<<endl;
		else cout<<m+2<<endl;}
		
	}return 0;
}


