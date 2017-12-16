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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int cas;
		int sum=0;
		for(int i=n; i>=1; i--){
			for(int j=i; j>=1; j--){	
			//cout<<j<<endl;
			sum+=j;
			}
		} 
		cout<<cas+1<<": "<<n<<" "<<sum<<endl;	
		cas++;
	}
} 
