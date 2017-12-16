#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cctype>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int nm, r, n, m, t;
	printf("please input two numbers:\n");
	scanf("%d%d",&m,&n);
	nm=n*m;
	if(m<n){
		t=n;
		n=m;
		m=t;
	} 
	r=m%n;
	while(r!=0){
		m=n;
		n=r;
		r=m%n;
	}
	printf("最大公约数是：%d\n",n);
	printf("最小公倍数是：%d\n",nm/n);
	return 0; 
}
