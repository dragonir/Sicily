#include<iostream>
#include<iomanip>
#include<cctype>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstdlib>
int a[1111][1111];
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int cas=0;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++)
				cin>>a[i][j];
		}
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++)	
				if(a[i][j]==a[i+1][j+1])
				cas+=1;
				cout<<cas<"\n";
		}
		if(cas==n-1) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";	
	}
	return 0;
} 
