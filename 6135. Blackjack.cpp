#include<iostream>
#include<iomanip>
#include<ctime>
#include<cctype>
#include<cmath>
#include<cstring>
#include<string>
#include<stack>
#include<algorithm>
#include<cstdio>
#include<vector>
int a[111111];
using namespace std;
int main(){
	int m,n;
	while(cin>>m>>n){
		int sum[111111];
		for(int i=1; i<=m; i++){
			cin>>a[i];
		}
		for(int i=1; i<=m; i++){
			for(int j=1; j<=m; j++)
				for(int k=1; k<=m;k++){
					if(a[i]+a[j]+a[k]<=n&&i!=j&&j!=k&&i!=k)
						sum[i]=a[i]+a[j]+a[k];
				} 	
		//cout<<sum[i]<<"\n";
		} 	
		sort(sum,sum+m);
		cout<<sum[m-1]<<"\n";
    }
	return 0;
}  
