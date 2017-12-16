#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define SQR(x) ((x)*(x))
#define EPS (1e-8)
struct point{int x, y;};
bool flag;
point a[10], b[10];
bool check(){
    double dist=sqrt(SQR(b[1].x) + SQR(b[1].y));
    for (int i=2; i<=4; i++){
        double tmp=sqrt(SQR(b[i].x) + SQR(b[i].y));
        if (abs(tmp-dist)>EPS) return false;
    }
    if (abs(b[1].x*b[2].x+b[1].y*b[2].y)>EPS) return false;
    return true;
}

int main(){
    for (int i=1; i<=4; i++){
        scanf("%d%d", &a[i].x, &a[i].y);
    }
    a[5]=a[1];
    for (int i=1; i<=4; i++){
        b[i].x=a[i+1].x-a[i].x;
        b[i].y=a[i+1].y-a[i].y;
    }
    flag=check();
    if (flag) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}                                  

