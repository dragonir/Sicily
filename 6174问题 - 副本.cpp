#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
	int  k;
	scanf("%d",&k);
	while(k--){
		int n,n1,n2,A[4];
		scanf("%d",&n);
		int s=1;
		while(n!=6174){
			A[0]=n%10;
			A[3]=n/1000;
			A[1]=n/10%10;
			A[2]=n/100%10;
			sort(A,A+4);
			n1=1000*A[3]+A[2]*100+A[1]*10+A[0];
			n2=1000*A[0]+A[1]*100+A[2]*10+A[3];
			n=n1-n2;
			//cout<<n;
			//cout<<"\n"; 
			s++;
		} 
		printf("%d",s);
	}
}


