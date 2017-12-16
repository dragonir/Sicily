#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	char st[100];
	//gets(st);char st[100]; 
	strcpy(st,"Hello\a"); 
	strcat(st, "World");
	
	//cin>>st;
	cout<<st;
	return 0;
} 
