#include<iostream> 
#include<cmath>
#include<iomanip>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std
;int main(){
	int a[11111],b[11111],c[1111];
	int n,m,even ,odd,max;
	cin>>n;
	while(n--){
		int i; 
		cin>>a[i];
	}
	cin>>m;
	while(m--){
		int x,y;
		cin>>x>>y;
		for(int i=x;i<=y;i++){
			if(a[i]%2==1)odd+=a[i];
			else even+=a[i];
			
		}
		if(odd>even)max=odd;odd=even;even=max;
		cout<<even-odd<<endl;
		
	}
	
	return 0;	 
}
 
