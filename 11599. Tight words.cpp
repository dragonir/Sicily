#include <cmath>
#include <ctime>
#include <cctype>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
double dp[111][111];
int main(int argc, char *argv[]){
	int k, n;
	int N=111; 
	while (scanf("%d%d",&k,&n)!=EOF){
		for (int i = 0; i < N; ++i){
			for (int j = 0; j < N; ++j){
				dp[i][j] = 1.0;
			}
		}
		for (int i = 2; i<N; ++i){
			for (int j = 0; j<= k;++j){
				dp[i][j] = dp[i-1][j];
				if (j > 0){
					dp[i][j] += dp[i-1][j-1];
				}
				if (j < k) {
					dp[i][j] += dp[i-1][j+1];
				}
			}
		}
		double ans = 0;
		double base = pow(k + 1, n);
		for (int i = 0; i <= k; ++i) {
			ans += dp[n][i];
		}
		printf("%.5f\n", ans * 100.0 / base);
	}
	return 0;
}

