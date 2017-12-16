
#include<cstdio>
#include<cstring>
#include<string>
#include<queue>
#include<algorithm>
#include<map>
#include<stack>
#include<iostream>
#include<list>
#include<set>
#include<vector>
#include<cmath>

#define INF 0x7fffffff
#define eps 1e-8
#define LL long long
#define PI 3.141592654
#define CLR(a,b) memset(a,b,sizeof(a))
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FOR0(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define sf scanf
#define pf printf
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define acfun std::ios::sync_with_stdio(false)

#define SIZE 100000000 +1
using namespace std;

int pa[1000];
int cot;
bool prime(int n)
{
    FOR(i,2,sqrt(n)+2)
        if(n%i==0)return 0;
    return 1;
}

void PA()
{
    cot=0;
    pa[cot++]=2;
    pa[cot++]=3;
    pa[cot++]=5;
    pa[cot++]=7;
    FOR(i,1,10000)
    {
        int num[5];
        int len=0;
        int m=i;
        while(m)
        {
            int tmp=m%10;
            num[len++]=tmp;
            m/=10;
        }
        int ans=i;
        if(len>1)
        {
            FOR(r,1,len)
                ans=ans*10+num[r];
            if(prime(ans))
                pa[cot++]=ans;
        }
        ans=i;
        FOR(r,0,len)
            ans=ans*10+num[r];
        if(prime(ans))
            pa[cot++]=ans;
    }
}

int main()
{
    PA();
    int a,b;
    while(~sf("%d%d",&a,&b),a||b)
    {
        FOR(i,0,cot)
        if(pa[i]>=a&&pa[i]<=b)pf("%d\n",pa[i]);
        pf("\n");
    }
}

