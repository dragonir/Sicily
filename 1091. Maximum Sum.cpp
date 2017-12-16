#include <cstdio>
#include <iostream>
#include <climits>
using namespace std;
int main(int argc, char** argv){
    int t,m,i,a[50005],f[2][50005];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&m);
        int sum=0,Max=INT_MIN;
        for(i=1;i<=m;++i)scanf("%d",&a[i]);
        for(i=1;i<=m;++i){
            sum+=a[i];
            Max=Max>sum?Max:sum;
            if(sum<0)sum=0;
            f[0][i]=Max;
        }
        for(i=m,sum=0,Max=INT_MIN;i>0;--i){
            sum+=a[i];
            Max=Max>sum?Max:sum;
            if(sum<0)sum=0;
            f[1][i]=Max;
        }
        for(i=1,sum=INT_MIN;i<m;++i){
            sum=max(sum,f[0][i]+f[1][i+1]);
        }
        printf("%d\n",sum);
    }
    return 0;
}

