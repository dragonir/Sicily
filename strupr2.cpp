#include <stdio.h>
#include <string.h>
int main(){
	char s[]="Copywrite 1999-2000 GGV Technologies";
	char* s2=strupr(s);//��s�����е��ַ���ת���ɴ�д���ҷ���s������ʼ��s2
	printf("%s",s2);
	printf("%s",s); //���ʱ��s��s2����ȵģ�ָ��ͬһ���ַ�����
	getchar();
return 0;
}
