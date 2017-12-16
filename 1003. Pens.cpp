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
int main(){
	int t,a,b,c,x,y;
	cin>>t;
	while(t--){
		int cas=0;
		cin>>a>>b>>c>>x>>y;
		for(int i=0; i<=100; i++)
			for(int j=0; j<=100; j++)
				for(int k=0; k<=100; k++)
					if((i+j+k==x)&&(a*i+b*j+c*k==y))
					cas++;
		cout<<cas<<"\n";
	}
	return 0;
}
