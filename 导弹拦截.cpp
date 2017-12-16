
#include<cstdio>
#include<iostream> 
using namespace std; 
int main() { 
    int i,j,x[100],d[100];
	int t; cin>>t;
	while(t-- ){
	//x[]表示各个导弹高度，d[i]记录为第 i 枚导弹被拦截之后， 
    //这套系统最多还能拦截的导弹数（包含被拦截的第 i 枚）。 
    int dmax=0,xh=0; //记录拦截的最大个数以及第一个被拦截的序号 
    int n ; cin>>n; //拦截的导弹数 
    for(i=0;i<n;i++){ 
        cin>>x[i]; //输入每个导弹的高度 
        d[i]=1; //初始值都设为1 
    } 
    for(i=n-2;i>=0;i--){ 
	//动态规划算法，递归实现,从后面向前循环 
        for(j=i+1;j<n;j++) 
            if((x[j]<x[i])&&(d[i]<d[j]+1)){ //判断条件 
                d[i]=d[j]+1; 
            } 
    } 
    for(i=0;i<n;i++){ //找出最大个数 
        if(d[i]>dmax){ 
            dmax=d[i]; 
            xh=i; //第一枚被拦截的导弹序号 
        } 
    } 
    //cout<<"拦截到的导弹数为:";
    cout<<d[xh]<<endl; 
    /*cout<<"被拦截的导弹序列为:";
    cout<<x[xh]<<","; 
    for(j=xh+1;j<n;j++) //依次输出满足条件的递减序号 
        if((x[j]<=x[xh])&&(d[xh]==d[j]+1)){ //判断条件 
            cout<<x[j]<<","; 
            xh=j; 
        } */
	}
    return 0; 
} 
