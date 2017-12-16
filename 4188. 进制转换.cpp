#include <stdio.h>
void f(int i){
	if(i >0){
		f(i / 2);
		printf("%d", i % 2);
	}
	else return;
}
int  main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int i ;scanf("%d",&i);
		f(i);
		printf("\n");
	}
	return 0;
}
