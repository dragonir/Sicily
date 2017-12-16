#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h>
//using namespace std;
// ps: 偶数长度的数中，只有11属于回文质数
//     先判断是否回文再判断是否为质数，可加快程序执行

//int huiWenLen;
bool isHuiWen(int n){
	int tmp[10];
	int i = 0;
	while (n > 0){
		tmp[i++] = n % 10;
		n /= 10;
	}
//	huiWenLen = i;
	for (int j = 0; j < i; j++)
	if (tmp[j] != tmp[i - j - 1])
		return false;
	return true;
}
int length(int n){
	int tmp[10];
	int i = 0;
	while (n > 0){
		tmp[i++] = n % 10;
		n /= 10;
	}
	return i;
}
bool isPrime(int n){
	if (n == 2)
		return true;
	for (int i = 3; i * i <= n;i+=2)   //直接考虑奇数得了，而且把库函数调用换为简单数值计算
	  if (n % i == 0)
		  return false;
	  return true;
}

int main()
{
	int a, b;
	while (scanf("%d%d",&a,&b) && a && b){
		for (int i = a; i <= b; i++){
			if (i % 2 == 0 && i != 2)
				continue;
			if (i % 5 == 0 && i != 5)
				continue;
			if (length(i) % 2 == 0 && i!=11)
				continue;
			if (!isHuiWen(i))
				continue;
			if (isPrime(i))
				printf("%d\n", i);
		}
	}

	return 0;

}

