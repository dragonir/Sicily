#include<iostream>;
#include<cmath>;
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; double x=1;
		cin>>n;
		for(int i=1; i<=n;i++){
			x+=log10(i);
		}
		cout<<int(x)<<"\n";
	} 
	return 0;
} 
