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
//�����Ǹ���N*M����Ȩ����ÿ�β���ֻ�ܶ�ÿ������+��-d��������з�������ͬ��Ȩֵ��С�����������޽����-1�����Ƿ��н��ܼ򵥣�ֻҪȨֵA%d�Ƿ��Ƕ�ֵ��
//���ߦ�A%d�Ƿ�=0������н�Ļ�һ���Ǹĳ���λ����
