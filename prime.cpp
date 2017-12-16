#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
	if(n<=1)return false;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0)return false;
		return true;
}
int main(){
	int n; 
	while(cin>>n&&n!=-1){
		if(isPrime(n))
			cout<<"Yes"<<"\n";
		else cout<<"No" <<"\n";
	}
	return 0;
}

 int countPrimes(int n) {
 	int count = 0;
	 if(n<=1) continue;
	 for(int i=2; i<=sqrt(n); i++){
	 	if(!(n%i==0))
	 		count++;
	 } 
 } 
