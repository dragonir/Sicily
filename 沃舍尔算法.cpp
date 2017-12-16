#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("data.txt");
ofstream fout("out.txt");
void in();
void out();
void solve();
int matri[20][20],n;
int main()
{
fin>>n;
memset(matri,0,sizeof(matri));
in();
solve();
out();
return 0;
}
void in()
{
int i,j;
for (i=1;i<=n;i++)
for (j=1;j<=n;j++)
fin>>matri[i][j];
return;
}
void out()
{
int i,j;
for (i=1;i<=n;i++)
{
for (j=1;j<=n;j++) fout<<matri[i][j]<<" ";
fout<<endl;
}
return;
}
void solve()
{
int k,i,j;
for (k=1;k<=n;k++)
for (i=1;i<=n;i++)
for (j=1;j<=n;j++)
{
if (matri[i][j]==1) continue;
if (matri[i][k]==1 && matri[k][j]==1) matri[i][j]=1;
}
}
