#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h>
//using namespace std;
// ps: ż�����ȵ����У�ֻ��11���ڻ�������
//     ���ж��Ƿ�������ж��Ƿ�Ϊ�������ɼӿ����ִ��

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
	for (int i = 3; i * i <= n;i+=2)   //ֱ�ӿ����������ˣ����Ұѿ⺯�����û�Ϊ����ֵ����
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

