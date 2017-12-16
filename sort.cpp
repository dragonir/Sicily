#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,a[1111]={0};
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int tmp;cin>>tmp;a[tmp]++;
	}
	for(int i=1;i<=1000;i++)
	if(a[i]){
		while(a[i]--){
			cout<<i;
			if(a[i])cout<<" ";
			else cout<<endl;
		}
	}
	return 0;
} 
