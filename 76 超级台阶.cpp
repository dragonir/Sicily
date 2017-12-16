#include <cstdio>
int num,n;
int m[40]; 
/*  最优子结构：m[i] = m[i-1] + m[i-2] ，即m[i] 可由 m[i-1] 跨一级台阶得到 ，
也可以由 m[i-2] 跨两级台阶得到.
m[i] 表示 从台阶 1 跨到台阶 i 总共有 m[i] 种走法   */
void dp() {
  m[0] = 0;
  m[1] = 1;
  for( int i = 2 ; i <= 40 ; i ++ )
	m[i] = m[i-1] + m[i-2];
	m[1] = 0;
}
int main(){
  dp();
  scanf("%d",&num); 
  while( num -- ){
     scanf("%d",&n);
     printf("%d\n",m[n]);
  }
  return 0;
}
 
