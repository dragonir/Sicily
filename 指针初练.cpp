#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int x;
	while(cin>>x){
	int *pionter=&x;
	cout<<pionter<<"\n";
	cout<<*pionter<<"\n";	
	}
	return 0;
} 
