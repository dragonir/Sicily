#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
	int T;
	int a[111];
	int n,i ,x, y;
	cin>>T;
	while(T--){
		cin>>n;
		for(i = 0; i < 3; i++){
			a[i] = 0;
		}
		for(i = 0; i < n; i++){
			cin>>x>>y;
			if(y > a[x - 1]){
				a[x - 1] = y;
			}
		}
		for(i = 0; i < 3; i++){
			if(a[i]!= 0){
			cout<<i+1<<" "<<a[i]<<"\n";
			}
		}
	}
	return 0;
}
