#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
int main(){
	long long n,m,num[111],a,b,c,d,sum=0;;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&num[i]);
	}
	for(int i=1;i<=m; i++){
		scanf("%d",&a);}
		while(n--){
		if(a==1)num[i]=-num[i];
		cout<<num;
		if(a==2){
			scanf("%d",&b);num[i]+=b;	
		}
		if(a==3){
			scanf("%d%d",&c,&d);
			for(int i=c;i<=d;i++)
				sum+=num;
				printf("%d",sum," ");
			}
     	}
	return 0;
}
