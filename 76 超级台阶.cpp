#include <cstdio>
int num,n;
int m[40]; 
/*  �����ӽṹ��m[i] = m[i-1] + m[i-2] ����m[i] ���� m[i-1] ��һ��̨�׵õ� ��
Ҳ������ m[i-2] ������̨�׵õ�.
m[i] ��ʾ ��̨�� 1 �絽̨�� i �ܹ��� m[i] ���߷�   */
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
 
