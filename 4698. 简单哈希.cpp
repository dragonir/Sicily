#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<vector> 
#include<stack>
#include<cstdlib>
#include<ctime>
int a[111111];
int main(){
	int n,m,i,t,key;
	scanf("%d%d", &n, &m);
	for(i = 0; i <= m; i++){
		a[i]=-1;
	}
	for(i = 1; i<=n; i++){
		scanf("%d", &key);
		t = key % m;
		while(a[t] != -1){
			t++;
			t%=m;
		}
		a[t] = key;
	}
	for(i = 0; i < m; i++){
		printf("%d#", i);
		if(a[i] == -1){
			printf("NULL\n");
		}
		else{
			printf("%d\n", a[i]);
		}
	}
	return 0;
}

