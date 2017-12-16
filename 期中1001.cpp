#include<iostream> 
#include<cmath>
#include<iomanip>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
	int n,a[1111]={0};
	cin>>n;
	for (int i=1;i<=n;i++){
		int tmp;
		cin>>tmp;
		a[tmp]++;
	}
	for(int i=1;i<=1000;i++)
		if(a[i]){
			while(a[i]--){
				cout<<i;
				if(a[i])cout<<" ";
				else cout<<"\n";
			}
		}
	return 0;
}
