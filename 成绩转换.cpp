#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	while(n--){
		cin>>m;
		if(m>=90&&m<=100)
			cout<<"A\n";
		if(m>=80&&m<=89)
			cout<<"B\n";
		if(m>=70&&m<=79)
			cout<<"C\n";
		if(m>=60&&m<=69)
			cout<<"D\n";
		if(m>=0&&m<=59)
			cout<<"E\n";
			
	}
	return 0;
}
