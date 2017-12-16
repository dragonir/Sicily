#include<iostream>
#include<ctype.h>
#include<cstring>
using namespace std;
int main(){
	char crayon[111];
	gets(crayon);
	wcout<<strrev(crayon);
	return 0;
} 
