#include<iostream>
using namespace std;
long long gab(long a,long  b){
	if(a%b==0) return b;
	else return gab(b,a%b);
} 
int main(){
	long long m,n;
	while(cin>>m>>n){
		int tmp;
		if(m<n){
		tmp=m;m=n;n=tmp;
		}
		
	    cout<<gab(m,n)<<"\n";
	}
	return 0;
}

