#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char a[30];
	int n,m;
	cin>>n;
	while(n--){
		gets(a);
		int i=0,c=0,d=0;
		while(a[i]!=' ')c+=a[i++]-'0';
		while(a[++i]!='\0')d+=a[i]-'0';
		c*=d;
		while(c>9)
			c=c%10+c/10;
			cout<<c<<endl;
	}
	
} 
