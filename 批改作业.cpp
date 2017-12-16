#include <cstdio>
int main(){
	int n,m,i,j,count,t;
	double sum;
	count = 0;
	scanf("%d %d", &n, &m);
	for(i = 0; i < n; i++){
		sum = 0;
		for(j =0; j < m; j++){
			scanf("%d", &t);
			sum += (double)t;
		}
		if(sum / m < 60){
			count++;
		}
		printf("%.2lf\n", sum / m);
	}
	printf("%d\n", count);
	return 0;
}
