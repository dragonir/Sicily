#include <stdio.h>
#include <string.h>
int main(){
	char s[]="Copywrite 1999-2000 GGV Technologies";
	char* s2=strupr(s);//把s数组中的字符串转换成大写并且返回s用来初始化s2
	printf("%s",s2);
	printf("%s",s); //这个时候s和s2是相等的，指向同一个字符串。
	getchar();
return 0;
}
