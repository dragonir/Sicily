#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cstdio>
using namespace std;
char A[1111][1111];
int n;
void f(int n,int x,int y){
    if(n==1) A[x][y]='X';
    else{
        if(n-1){
            int size=1;
            for(int i=2;i<n;i++)size*=3;
            f(n-1,x,y);
            f(n-1,x+size*2,y);
            f(n-1,x,y+size*2);
            f(n-1,x+size,y+size);
            f(n-1,x+size*2,y+size*2);
        }
    }
}
int main(){
    while(scanf("%d",&n) && n!=-1){
        int size=1;
        for(int i=1;i<n;i++) size*=3;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++)
                A[i][j]='.';
                A[i][size]='\0';
        }
        f(n,0,0);
        for(int i=0;i<size;i++)
            printf("%s\n",A[i]);
            printf("-\n");
    }
    return 0;
}                          
