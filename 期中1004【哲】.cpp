#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

long long a[10][10]={0};
int n;

int main(){
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=2; j++) cin>>a[i][j];
    }
    a[1][0]=2;
    for (int k=2; k<=n; k++){
        for (int i=1; i<=a[1][0]; i++){
            for (int j=1; j<=2; j++){
                a[0][i+j-1]+=a[1][i]*a[k][j];
            }
        }
        a[1][0]++;
        for (int i=1; i<=a[1][0]; i++){
            a[1][i]=a[0][i];
        }
        for (int i=1; i<=9; i++) a[0][i]=0;
    }
    //cout << a[1][1] << endl;
    long long tmp;
    for (int i=1; i<=a[1][0]; i++){
        tmp=abs(a[1][i]);
        if (a[1][i]==0) continue;
        if (a[1][i]<0) cout <<'-';
        else {
            if (i>1) cout <<'+';
        }
        if (i<a[1][0]){
            if (tmp!=1) cout << tmp;
            cout << 'x';
            if (n-i+1>1) cout << '^'<<n-i+1;
        }
        else cout << tmp;
    }
    cout << endl;
    return 0;
}                                  
