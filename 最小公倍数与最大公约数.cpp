#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	int a,p,r,n,m,temp;
	scanf("%d",&a);
	while(a--){
		scanf("%d%d",&n,&m);
		if(n<m){
			temp=n;n=m;m=temp;
		}
		p=n*m;
		while(m!=0){
			r=n%m;n=m;m=r;	
		}
		cout<<n<<" "<<p/n<<endl;	
	}
	return 0;
}


