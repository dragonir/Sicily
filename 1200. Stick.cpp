#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>
#include<ctime>
#include<vector>
int a[111];
using namespace std;
int main(){
	int n;
	while(cin>>n&&n!=0){
		int cas=0;
		for(int i=1; i<=n; i++){
			cin>>a[i];
			
			cas ^= a[i];  
		}
		cout<<cas<<"\n";
	}
	return 0;
}
