#include<iostream>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,a,s,b;
		cin>>n>>a;s=a;
		for(int i=1;i<=n;i++){
			cin>>b;
			if(a<0) a=b;
			else a+=b;
			if(a>s)s=a;
		}
		cout<<s<<endl;
	} 
	
}
