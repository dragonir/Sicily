#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

bool check(int a, int b, int c){
    if ((a+b>c)&&(a+c>b)&&(b+c>a)) return true;
    return false;
}

int main(){
    int n, cas, a[1111];
    cin>>cas;
    while (cas--){
        cin>>n;
        for (int i=1; i<=n; i++) cin >> a[i];
        int ans=0;
        for (int i=1; i<=n-2; i++)
            for (int j=i+1; j<=n-1; j++)
                for (int k=j+1; k<=n; k++)
                    if (check(a[i], a[j], a[k])) ans++;

        cout << ans << endl;
    }
    return 0;
}                                 
