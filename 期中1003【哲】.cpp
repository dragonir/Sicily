#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int a[1111]={0}, b[1111]={0}, c[1111]={0};
int n,m;
int main(){
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }
    for (int i=1; i<=n; i++){
        b[i]+=b[i-1]; c[i]+=c[i-1];
        if (i&1==1) b[i]+=a[i];
        else c[i]+=a[i];
    }
    cin>>m;
    int x,y;
    while (m--){
     	cin>>x>>y;
        int tmp=abs((b[y]-b[x-1])-(c[y]-c[x-1]));
       cout<<tmp<<endl;
    }
    return 0;
}          

