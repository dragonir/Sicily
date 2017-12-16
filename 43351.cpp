#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()


{
int num[1000],cnt[1000],n;
cin>>n;
for(int i=1;i<=n; i++)
scanf_s("ÇëÊäÈë:%d",&num[i],5) ,
sort(num,num+n);
int l=0;
if(num[l]=num[l+1])
cnt[num[l]]++;

int flag=0;
for(int i=1;i<=n;i++)
if(cnt[num[i]]>((n+1)/2))
flag=1;
if(flag>0&&n>1)
cout<<"NO"<<endl;
else cout<<"YES"<<endl;
return 0;
}
