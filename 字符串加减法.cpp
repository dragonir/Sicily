#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	char a[20]={0}, b[20]={0}, c[20]={0};
	while(cin>>a){
		int  i, j , k; 
		int len = strlen (a);
		for( i=0;a[i]!='+'&&a[i]!='-';i++)
		b[i]=a[i];
		for( j=1+i,k=0;j<len;j++,k++)
		c[k]=a[j];
		if(a[i]=='+') cout<<atoi(b)+atoi(c)<<"\n";
		if(a[i]=='-') cout<<atoi(b)-atoi(c)<<"\n";
		memset(a,0,20);
		memset(b,0,20);
		memset(c,0,20); 
	}
	return 0;
}
