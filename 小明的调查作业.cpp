#include<iostream>
using namespace std;
bool a[1111];
int main(){
	int n, x;cin>>n; int count;
	for(int i=1;i<=n;i++){
		cin>>x ;a[x]=1;
	}
	for(int i=1;i<=1000;i++){
		if(a[i]) count++;
	}
	cout<<count<<'\n';
	for(int i=1;i<=1000;i++){
		if(a[i]) cout<<i<<' ';}
	return 0;
} 
