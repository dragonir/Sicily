#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cctype>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int a[11];
int main(){
	int tmp;
	for(int i=1; i<=10; i++){
		cin>>a[i];
	} 
	cin>>tmp;	
	int cas=0;
	for(int i=1; i<=10; i++){
	
		if(a[i]<=tmp+30)
			cas++;
	}
	cout<<cas<<"\n";
	return 0;
} 
