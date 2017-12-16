#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<string>
#include<vector>
#include<stack>
#include<ctime>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m,n||m){
		if(m==0){
			cout<<0<<endl;
			continue;
		}
		bool arr[111][111];
		int a,b,list[111]={0};
		memset(arr,0,sizeof(arr));
		for(int i=0;i<m;i++){
			cin>>a>>b;
			arr[a][b]=1;
			arr[b][a]=1;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(arr[i][j]==1)
					list[i]++;
			}
		}
		sort(list+1,list+n+1);
		cout<<list[n]<<endl;
	}
	return 0;
}
