#include <iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<stack>
#include<cctype>
#include<stack>
using namespace std;
void move(int n, char a, char b){
	cout<<a<<"->"<<b<<endl;
} 
void hanoi(int n, char a, char b, char c){ //��n�����Ӵ�a�����ƶ���b���� 
	if(n > 0) {
		hanoi(n - 1, a, c, b);// ��n-1�������ƶ���c������
		move(n, a, b);  // ��a�ƶ���b 
		hanoi(n - 1, c, b, a);// �ѵ�n-1�����Ӵ�c�����ƶ���b������
	}
}
int main(){
	int n;
	while(cin>>n){
		char a='a',b='b',c='c';
		hanoi(n,a,c,b);   //��n�����Ӵ�a�����ƶ���c���� 
	}
	return 0;
}
