#include<iostream>
#include<cstdio>
#include<cstring>
#define N 110
using namespace std;
int cnt[26];	//保存单词的个数
bool prime[N];
char str[N];
void isPrime(int n)  //建立素数表
{  
    int i,j;  
    memset(prime,0,sizeof(prime));
	
    prime[0] = prime[1] = true;  
    for (i=2;i<=n;i++)
    {  
        for (j=i*i;j<=n;j+=i)  
        {  
            prime[j] = true;
        }
    }  
} 
int main()
{
	isPrime(N);
	int t,max,min;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		max = 0;
		min = 101;
		scanf("%s",str);
		getchar();
		int i;
		memset(cnt,0,sizeof(cnt));
		for(i=0;str[i]!='\0';i++)
			cnt[str[i]-'a']++;
		for(i=0;i<26;i++)
		{
			if (cnt[i]>max)
				max = cnt[i];
			if (cnt[i]<min && cnt[i]!=0)
				min = cnt[i];
		}
		if (!prime[max-min])
			printf("Lucky Word\n%d\n",max-min);
		else printf("No Answer\n0\n");
	}
	return 0;
}
