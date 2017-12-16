#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	while(n--){
		int t; cin>>t;
		for(int i=t*(t+1);i>=2*t;i--)
			for(int j=t+1;j<=2*t;j++)
			if(t*(i+j)==i*j)
			cout<<1<<"/"<<t<<"="<< "1/"<<i<<"+"<<"1/"<<j<<endl;		
	}
	return 0;
} 
