#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b==c) cout<<a<<" + "<<b<<" = "<<c<<"\n";
		else if(a+c==b) cout<<a<<" + "<<c<<" = "<<b<<"\n";
		else if(b+c==a) cout<<b<<" + "<<c<<" = "<<a<<"\n";
		else cout<<a<<" "<<b<<" "<<c<<" "<<"NO SUM"<<"\n";
		/*for(int i =1; i<=3; i++){
			cin>>A[i];
		}
		for(int i=1  i<=3; i++){
			if()
		}*/
		
	}
	return 0;
}
