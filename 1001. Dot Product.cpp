#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<string>
#include<cctype>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<stack>
int a[1111],b[1111];
using namespace std;
int main(){
	int t; 
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sum=0;
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		for(int i=1; i<=n; i++){
			cin>>b[i];
		}
		for(int i=1; i<=n; i++){
			sum+=a[i]*b[i];
		}
		cout<<sum<<"\n";
	}
	return 0;
}
