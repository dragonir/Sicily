#include<iostream>
#include<cstdio>
using namespace std;	
int num[100000],a[100000];
int main()
{ 
	int m,n;
	scanf("%d%d",&m,&n);	
	for(int i=0;i<m;i++){
	 	scanf("%d",&num[i]);
	}	
		a[m-1]=num[m-1];
		for(int l=m-1;l>0;l--){
		//	a[l]=num[l];
			if(a[l]>num[l-1])
		a[l-1]=a[l];
		else
		a[l-1]=num[l-1];}
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		printf("%d\n",a[x-1]);		
		
		}
		
	
				return 0;
}
