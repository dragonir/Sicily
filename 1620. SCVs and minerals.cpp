#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<string>
#include<cmath>
#include<ctime>
#include<algorithm>
#include<stack>
#include<vector>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<string>
#include<cmath>
#include<ctime>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, C, P, S;
        cin >> N >> M >> C >> P >> S;
        while (S) {
            if (S * C > P) {
                N = N + M / P;
                M = M % P;
            }
            M += N * C;
            S--;
        }
        cout << M << endl;
    }
}                                 

