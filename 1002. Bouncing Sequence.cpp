#include<iostream> 
#include<iomanip>
#include<cmath>
#include<cstdio>
#include<algorithm>
long long  s[1100000];
using namespace std;
int main(){
	long long n; cin>>n;
	for(int i=0 ; i<n; i++){
		cin>>s[i];
	}
	sort(s,s+n);
    if(n%2==0){
    	for(int i=0,j=n-1; i<=n/2,j>=n/2 ; i++,j--){
			cout<<s[i]<<"\n"<<s[j]<<"\n";
	    }		
    }
	else{
		//for(int i=0,j=n-1; i<=(n+1)/2,j>=(n+1)/2 ; i++,j--){
		for(int i=0,j=n-1; i<j ; i++,j--){
			cout<<s[i]<<"\n"<<s[j]<<"\n";
	    }
			cout<<s[n/2]<<"\n";	
    }	
	return 0;	
}
