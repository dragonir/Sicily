#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
	int n; cin>>n;
	while (n--){
		int sum=0;
		char arr[500];
		cin>>arr;
		for(int i=strlen(arr)-1;i>=0;i--){
			sum+=(arr[i]-'0')*pow(2,strlen(arr)-1-i);
		}
		cout <<sum<<endl;
	}
	return 0;
}

