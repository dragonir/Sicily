#include<iostream>
#include<iomanip>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
int a[100005], b[100005];
using namespace std;
int main(){
	int n,  d, k ,i ,j ,m;
	cin>>m;
	while(m--){
		cin>>n>>a[0];
		d=1;
		b[0]=a[0];
		for(i=1; i<n ;i++){
			cin>>a[i];
		}
		for(j=0; j<d;j++){
			b[j]=a[i];
			k=1;
			d--;
			break;
		}
		if(k!=1)
			b[d]=a[i];
			d++ ; k=0;
	}
	cout<<d<<endl;
	return 0; 
} 
