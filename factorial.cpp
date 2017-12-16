#include<iostream>
#include<cstdio>
using namespace std;

int factorial(int n){
	if(n==0) return 1;
	else return n*factorial(n-1);
}

int main(){
	cout<<"5!="<<factorial(5)<<endl;
	cout<<"10!="<<factorial(10)<<endl;
	return 0;
}
