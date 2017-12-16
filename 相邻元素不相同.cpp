#include<iostream> 
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){	
	int num[1000],cnt[1000]={0},n; 
	scanf("%d",&n);
	for(int i=0;i<n; i++)
			scanf("%d",&num[i]);
			sort(num,num+n);
			int k=num[0],count=0,max=0;
			for(int i=0;i<n;i++)
			{
			if(k==num[i])
				count++;
			else
			{
				k=num[i];
				count=1;
			}
			if(max<count)max=count;
			}
	if(2*max<n+2)
		printf("YES\n");
	else	
		printf("NO\n");
	return 0;
}
