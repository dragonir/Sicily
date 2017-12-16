#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int jiecheng(int n){
	int sum=1;
	for( int i=1;i<=n;i++){
	sum*=i;
	}
	return sum;
} 
int main(){
	int n , m;
	while(cin >> n >> m){
		if(m==0&&n==0)break;
	int c=jiecheng(n)/(jiecheng(m)*jiecheng(n-m));
	cout<<c<<endl;
	}
	return 0;
}
