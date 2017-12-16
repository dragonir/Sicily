#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	
	int a,b,c,an[3],i,t,j,max,flag;
	scanf("%d%d%d",&an[0],&an[1],&an[2]);
	for(i=0;i<3;i++){
		t=max=an[i];
		flag=i;
		for(j=i;j<3;j++)
			if(an[j]>t){
				max=an[j];
				flag=j;
			}
			t=an[i];
			an[i]=max;
			an[flag]=t;
	}for(i=2;i>=0;i--)
	printf("%d",an[i]);
	
/*	int a,b,c,d,e,f,g;
	cin>>a>>b>>c;
//	d=max(a,b);
//	e=max(d,c);
	if(a>b)
		e=a;a=b;b=e;
 	if(a>c)
		f=a;a=c;c=f;
	if(b>c)
		g=b;b=c;c=g;
	cout<<a<<b<<c;*/
	return 0;
}
