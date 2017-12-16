#include<iostream>
#include<cmath>
#include<algorithm>
int a[333];
using namespace std;
int main(){
	int s; cin>>s;
	while(s--){
		int w,n,count=0;
		cin>>w>>n;
		for(int i=0;i<n ;i++){ 
		cin>>a[i];
		}
		sort(a,a+n);
		int i=0,j=n-1;
		while(i<=j){
			if(a[i]+a[j]<=w)
			i++; j--; count++; 
		}
		
	/*	for(int i=1;i<=n;i++){
			if(a[i]>w/2) count++;
			else count+=0.5;
		} */
		cout<<ceil(count)<<"\n";
	}
	return 0;
}
