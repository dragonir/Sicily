#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cctype>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<algorithm>
#include<vector>
const int MAXN=1000;
int a[MAXN];
int main(){ 
    int n;
    int i;
    while(scanf("%d",&n),n){
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        int res=0;
        while(1){
            for(i=1;i<n;i++)
            	if(a[i-1]!=a[i]) break;
            	if(i>=n) break;
            	res++;
            	int temp=a[n-1]/2;
            for(i=n-1;i>0;i--){
                a[i]/=2;
                a[i]+=a[i-1]/2;
            }   
            a[0]/=2; 
            a[0]+=temp;
            for(i=0;i<n;i++)
            	if(a[i]&1) a[i]++;
        }    
        printf("%d %d\n",res,a[0]);
    }    
    return 0;
}
