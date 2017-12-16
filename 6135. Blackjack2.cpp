#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n, m;
    int count = 1;
    while (scanf("%d%d", &n, &m) != EOF){
        int max = -1;
        int a[109];
        for (int i = 0; i < n; ++ i){
            scanf("%d", &a[i]);
        }
        int temp = 0;
        for (int i = 0; i < n; ++ i){
            for (int j = i + 1; j < n; ++ j){
                for (int k = j + 1; k < n; ++ k){
                    temp = a[i] + a[j] + a[k];
                    if (temp < m && temp > max){
                        max = temp;
                        temp = 0;
                    }
                    else if (temp == m){
                        max = m;
                        i = n;
                        j = n;
                        break;
                    }
                    else if (temp > m){
                        continue;
                    }
                }
            }
        }
        printf("%d\n", max);
        ++ count;
    }
}                                 
