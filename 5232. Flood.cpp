#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
int v[105][105];        //用于记录各个点的状态
int H,L;            //离散化后的整个区域的高和长
struct node         //用于离散化点
{
	int x, y, n;
};
node n0[210], n1[210];    //将所有矩形的点都离散化
int N;     //矩形个数
int cx[8] ={1,0,-1,0,1,1,-1,-1};
int cy[8] ={0,1, 0, -1,1,-1,1,-1};
bool comp1(node a, node b)        //将点按x排序
{
	if( a.x <= b.x)
		return 1;
	return 0;
}
bool comp2( node a, node b)      //将点按y排序
{
	if( a.y<= b.y)
		return 1;
	return 0;
}
void fun1()                   //离散化各矩形，将离散化后的矩形存在n1中，连续的两个点记录一个矩形
{
	int m=2*N;
	//离散化横坐标
	sort( n0, n0+m, comp1);
	int tem =n0[0].x;
	n0[0].x =0;
	int i,c=0;
	for( i=1; i<m; i++)
	{
		if( n0[i].x ==tem)
		{
			n0[i].x =c;
			continue;
		}
		tem =n0[i].x;
		n0[i].x =(++c);
	}
	L =c;
	//离散化纵坐标
	sort( n0,n0+m, comp2);
	tem =n0[0].y;
	n0[0].y =0;
	c =0;
	for( i=1; i<m; i++)
	{
		if( n0[i].y ==tem)
		{
			n0[i].y =c;
			continue;
		}
		tem =n0[i].y;
		n0[i].y =(++c);
	}
	H =c;
	for( i=0; i<m; i++)
		n1[ n0[i].n ] =n0[i];
}
void dfs1( int a, int b)
{
	v[a][b] =-1;
	int i;
	int nx,ny;
	for( i=0; i<8; i++)
	{
		nx =a+cx[i]; ny =b+cy[i];
		if( nx>=0 && nx<L&& ny>=0 && ny<H && v[nx][ny]!=-1)
			dfs1( nx, ny);
	}
}
void dfs2( int a, int b)
{
	v[a][b] =-1;
	int i;
	int nx,ny;
	for( i=0; i<8; i++)
	{
		nx =a+cx[i]; ny =b+cy[i];
		if( nx>=0 && nx<L&& ny>=0 && ny<H && v[nx][ny]==0)
			dfs2( nx, ny);
	}
}
int fun2()        //遍历不被水淹的区域数
{
	int c=0, i, j;
	for( i=0; i<L; i++)
		for( j=0; j<H; j++)
		{
			if( v[i][j]==1)
			{
				c++;
				dfs1( i, j);
			}
		}
    return c;
}
void fun3()        //将能被水淹的区域标记为-1
{
	int i,j;
	for( i=0; i<H; i++)
	{
		if( v[0][i]==0)
			dfs2(0,i);
		if( v[L-1][i]==0)
			dfs2( L-1,i);
	}
	for( j=0; j<L; j++)
	{
		if( v[j][0] ==0)
			dfs2(j, 0);
		if( v[j][H-1]==0)
			dfs2( j,H-1);
	}
}
int main()
{
	int x0,y0,x1, y1;
	while( scanf("%d", &N)==1 &&N)
	{
		int i,j,k,t;
		for( i=0; i<N; i++)
		{
			scanf("%d%d%d%d", &x0, &y0, &x1, &y1);
			t =i<<1;
			n0[t].x =x0; n0[t].y =y0; n0[t].n =t;
			n0[t+1].x= x1; n0[t+1].y =y1; n0[t+1].n =t+1;
		}
		fun1();
		memset( v, 0,sizeof( v));
		for( i=0; i<N; i++)          //将各矩形区域内标记为1
		{
			t =i<<1;
			x0 =n1[t].x; y0 =n1[t].y;
			x1 =n1[t+1].x; y1=n1[t+1].y;
			for( j=x0; j<x1; j++)
				for( k=y0; k<y1; k++)
					v[j][k] =1;
		}
		fun3();         //标出被水淹部分
		printf("%d\n",fun2());
	}
	return 0;
}
