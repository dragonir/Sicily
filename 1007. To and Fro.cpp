#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<string>
#include<cmath>
#include<stack>
#include<map>
#include<vector>
#include<iomanip>
using namespace std ;
int main(){
    int k;
    cin >> k;
    while (k != 0){
        string s;
        cin >> s;
        char a[20][200] = {0};
        int n = s.length();
        for(int i = 0 ; i < n ; i++)
            if (i/k%2 == 0) a[i/k][i%k] = s[i];
            else a[i/k][k-i%k-1] = s[i];
        for (int j = 0 ; j < k; j++)
        	for (int i = 0 ; i < n/k ; i++)
            cout << a[i][j];
        cout << endl;
        cin >> k;
    }
    return 0;
}
