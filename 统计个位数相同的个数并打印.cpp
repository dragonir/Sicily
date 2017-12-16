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
	int a[111],x[11],i,p;
	
	for(int i=0; i<=11; i++){
		a[i]=rand()%100;
		printf("%4d",a[i]);
		if(i%10==0)
			printf("\n");
	}
	
	for(int i=1; i<=100; i++){
		p=a[i]%10;
		if(p==0) p=10;
		x[p]=x[p]+1;
	}
	
	for(int i=1; i<=10; i++){
		p=i;
		if(i==10) p=0;
		printf("%d,%d\n",p,x[i]);
	}
	printf("\n");
}

 
