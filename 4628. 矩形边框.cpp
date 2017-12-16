#include<iostream>
#include<cctype>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		for(int i=1; i<=a; i++){
			cout<<"*";
		}
		cout<<endl;
		for(int j=0;j<b-2; j++){
				cout<<"*";
					for(int k=1; k<=a-2;k++){
						cout<<" ";
					}
				cout<<"*"<<"\n";
		}
		for(int i=1; i<=a; i++){
			cout<<"*";
		}
		cout<<"\n";
		cout<<"\n";
	}
	return 0;
}
