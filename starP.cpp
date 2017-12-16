#include <cstdio>
#include <malloc.h>
int main(){ 
	 long long n, m, op, x, l, r;
	 long long *seq, *sum; 
	 long long i, j, k=0;
	 scanf("%lld %lld", &n, &m);
	 seq = (long long *)malloc(sizeof(long long)*n); 
	 sum = (long long *)malloc(sizeof(long long)*m); 
	 for (i = 0; i < n; i++)scanf("%lld", &seq[i]);
	 for (i = 0; i < m; i++){
		  scanf("%lld", &op); 
		  switch (op){
			  case 1: 
				   for (j = 0; j < n; j++)seq[j] = -seq[j];
				   break;
			  case 2: 
				   scanf("%lld", &x);
				   for (j = 0; j < n; j++)seq[j] += x;
			   	   break;
			  case 3: 
				   sum[k] = 0;
				   scanf("%lld %lld", &l, &r);
				   for (j = l-1; j < r; j++)sum[k] += seq[j];k++;
				   break;
			  default:
			  	   break;
		  }
	 }
	 for (i = 0; i < k; i++){
		printf("%lld\n", sum[i]);
	 }
	 free(seq);
	 free(sum);
	 return 0;
}

