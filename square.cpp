#include<iostream>
using namespace std;
double square(int n, int m){
	int s;
	s=n*m;
	return s;
} 
int main(){
	int T; cin>>T;
	while(T--){
		int a,b; cin>>a>>b;
		cout<<square(a,b);
		cout<<"\n";
	}
	return 0;
}
