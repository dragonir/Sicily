#include<cstdio>
int main(){
	int a,b,c,d,n,sum=1;
	int Y[110][110];
	scanf("%d",&n);
	for(int a=0;a<=n*n;a++){
		for(b=a;b<=n-a-1;b++)Y[b][n-a-1]=sum++;
		for(b=n-a-2;b>=a;b--)Y[n-a-1][b]=sum++;
		for(b=n-a-2;b>=a;b--)Y[b][a]=sum++;
		for(b=a+1;b<n-a-1;b++)Y[a][b]=sum++;
	}
	for(c=0;c<n;c++){
		for(d=0;d<n;d++){
		printf("%d",Y[c][d]);
		printf(" ");
		}
	printf("\n");
	}
}
