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
void hanoi(int n, char a, char b, char c){ //把n个盘子从a柱子移动到b柱子 
	if(n > 0) {
		hanoi(n - 1, a, c, b);// 把n-1个盘子移动到c柱子上
		move(n, a, b);  // 把a移动到b 
		hanoi(n - 1, c, b, a);// 把第n-1个盘子从c柱子移动到b柱子上
	}
}
int main(){
	int n;
	while(cin>>n){
		char a='a',b='b',c='c';
		hanoi(n,a,c,b);   //把n个盘子从a柱子移动到c柱子 
	}
	return 0;
}
