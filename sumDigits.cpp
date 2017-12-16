#include<iostream>
using namespace std;
int sumDigits(int x){
	int tmp = 0;
	while(x){
		tmp+=x%10;
		x/=10;
	}
	return tmp;
} 
int main(){
	int m=12345;
	cout<<sumDigits(m);
}
