#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
int gcd(int x, int y){
	int tmp;
	if(x<y){
		tmp=x;
		x=y;
		y=tmp;
	}
	if(y==0) return x;
	else return gcd(y,x%y);
}
int main(){
	int t;
	cin>>t;
	int a,b,c;
	while(t--){
		cin>>a>>b>>c;
	    int ans1=a*b/gcd(a,b);
	    int ans2=ans1*c/gcd(ans1,c);
	    cout<<ans2<<"\n";
	}
	return 0;
} 
