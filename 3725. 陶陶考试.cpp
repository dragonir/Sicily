#include <cstdio>
int main(){
	int n,i,t,max;
	while(scanf("%d", &n) && n != 0){
		max = -1000000;
		for(i = 0; i < n; i++){
			scanf("%d", &t);
			if(t > max){
				max = t;
			}
		}
		printf("%d\n", max);
	}
}
