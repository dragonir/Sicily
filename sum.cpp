#include<iostream>
#include<cstdio>
using namespace std;	
int num[100000];
int s[100000]={0};
int main()
{ 
	int m,n,x;

	scanf("%d%d",&m,&n);

for(int i=0;i<m;i++){
	scanf("%d",&num[i]);
	if (i==0)
	s[i]=num[i];
	else
	s[i]=s[i-1]+num[i]
	;}
for(int i=0;i<n;i++)
	{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==1)x=s[b-1];
	else x=s[b-1]-s[a-2];
	printf("%d\n",x);
	}return 0;
	}
