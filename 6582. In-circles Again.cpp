#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<vector> 
#include<stack>
#include<cstdlib>
#include<ctime>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
double f(double r,double rs){
    double x=(rs*r+rs*rs)/(r-rs);
    x=x+r+rs;
    double h=sqrt(x*x-r*r);
    return h*r*2/2.0;
}
int main(){
    double r,r1,r2,r3;
    int cas=1;
    while(scanf("%lf%lf%lf%lf",&r,&r1,&r2,&r3)){
        if(r<0) break;
        double s=0;
        s+=f(r,r1);
        s+=f(r,r2);
        s+=f(r,r3);
        printf("Case %d: %.2lf\n",cas++,s);
    }
    return 0;
}

