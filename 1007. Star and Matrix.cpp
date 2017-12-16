#include<cstdio>
#include<algorithm>
using namespace std;
int a[100005],num,n,m,d,i,j,tot,ans;
int main(){
  scanf("%d%d%d",&n,&m,&d);
  scanf("%d",&a[tot=1]);num=a[1]%d;
  for (i=1;i<=n;i++)
    for (j=1;j<=m;j++){
      if (i==1&&j==1) continue;
      scanf("%d",&a[++tot]);
      if (a[tot]%d!=num) {puts("-1");return 0;}
    }
  sort(a+1,a+tot+1);
  for (i=1;i<=tot;i++) 
    ans+=abs(a[i]-a[(tot+1)>>1])/d;
  printf("%d\n",ans);
  return 0;
}
//题意是给出N*M个带权方格，每次操作只能对每个格子+或-d。求把所有方块变成相同的权值最小操作次数，无解输出-1。判是否有解解很简单，只要权值A%d是否是定值，
//或者ΔA%d是否=0。如果有解的话一定是改成中位数。
