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
using namespace std;
void myswap( int* a, int* b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<myswap(a,b); 
	return 0;
}
