#include <cstdio>
#include<iostream>
using namespace std;
long long a[1000010];
int main (){
    long long sum=0,x=0,n,m,p,l,r;
    scanf("%lld%lld",&n,&m);
    for (int i=0;i<n;i++)
    scanf("%lld",&a[i]);
    for (int i=0;i<m;i++){
        sum=0;
        scanf("%lld",&p);
        switch(p){
            case 1:
                for(int j=0;j<n;j++)a[j]=-a[j];
                break;
            case 2:
                scanf("%lld",&x);
				for(int j=0;j<n;j++)a[j]+=x;
                break;
            case 3:
                scanf("%lld%lld",&l,&r);
                for (int j=l-1;j<r;j++)sum+=a[j];
                cout<<sum<<endl;
                break;
			  default:
			  	   break;
        }
    }
    return 0;
}

