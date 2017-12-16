#include<cstdio>
#include <iostream>
using namespace std;
int main(){
	int n,a,b;
	cin >> n;
	while (n--){
		int min	;
		cin >> a >> b;
		if(a<b)
			min = a;
		else 
			min = b;
		int i = 2;
		for( ;i <= min;i++){
			if(a%i == 0&&b%i ==0){
				cout << "No" << endl;break;
			}
		}
		if(i == min +1)
			cout << "Yes" << endl;
	}
	return 0;
}

