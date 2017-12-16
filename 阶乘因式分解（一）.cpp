#include<iostream>
using namespace std;
int get(int n,int m){
	if(n==0) return 0;
	else return get(n/m,m)+n/m; 
}
int main(){
	int n;cin>>n;
	while(n--){
		int a,b; cin>>a>>b;
		cout<<get(a,b)<<endl;
	}
}
