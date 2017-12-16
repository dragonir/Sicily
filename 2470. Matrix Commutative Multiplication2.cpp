#include<iostream>
#include<iomanip>
#include<cctype>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int flag=1;
        int num;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int tem;
                scanf("%d",&tem);
                if(j==1&&i==1)
                    num=tem;
                if(j==i)
                    if(tem!=num)
                        flag=0;
                    if(j!=i)
                        if(tem!=0)
                        	flag=0;
            }
        }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
        }
}
