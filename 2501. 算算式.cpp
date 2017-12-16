#include<iostream>
#include<cmath>
#include<cstdio>
#include<ctime>
#include<cctype>
#include<string>
#include<cstring>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int m=k%9900,sum=0;
    for (int i=0;i<m;i++){
		sum=(sum+1)*n;
        sum%=9901;
    }
    cout<<sum<<endl;
    return 0;
} 

