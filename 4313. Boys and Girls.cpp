#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring> 
#include<string>
#include<vector>
#include<ctime>
#include<algorithm>
#include<stack>
#include<cmath>
#include<cstdlib>
int a[11111],b[11111];
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int tap=0;
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		for(int j=1; j<=n; j++){
			cin>>b[j];
		}
	/*	for(int i;i<=n;i++){
			for(int j;j<=n; j++)
				if(abs(a[i])>abs(b[j]))tap++;
		}*/
		for(int k=1; k<=n; k++){
			if(abs(a[k])!=abs(b[k])) tap++;
		}
		cout<<tap<<"\n";
	}
	return 0;
}
