#include<iostream>
using namespace std;
int main(){
	int i,a[111],t,n;
	a[1]=1;a[2]=1;
	for(int i=3;i<=20;i++) 
	a[i]=a[i-2]+a[i-1];
	cin>>n;
	while(n--){
		cin>>t;
		cout<<a[t]<<"\n";
		 
	}
	return 0;
	 
} 
