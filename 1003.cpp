#include<iostream>
#include<cstdio>	
int num[100000];
int main()
{ 
	int n;
	scanf("%d",&n);	
	for(int i=0;i<n;i++){
	 	scanf("%d",&num[i]);
	}	
		
	for(int i=0;i<n;i++){
	 if(num[i]==num[i+1])
	 printf("%d","YES")	;	
		
		}
		
	
				return 0;
}
