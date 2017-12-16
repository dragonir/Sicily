#include<stdio.h>

int main()

{

int t,n;

scanf("%d",&t);

while(t--)

{

scanf("%d",&n);

for(int i=1;i<=n;i++){

for(int j=i;j<10;j++)

printf("%d*%d=%d ",i,j,i*j);

printf("\n");

}

}

}

