
#include<cstdio>
#include<iostream> 
using namespace std; 
int main() { 
    int i,j,x[100],d[100];
	int t; cin>>t;
	while(t-- ){
	//x[]��ʾ���������߶ȣ�d[i]��¼Ϊ�� i ö����������֮�� 
    //����ϵͳ��໹�����صĵ����������������صĵ� i ö���� 
    int dmax=0,xh=0; //��¼���ص��������Լ���һ�������ص���� 
    int n ; cin>>n; //���صĵ����� 
    for(i=0;i<n;i++){ 
        cin>>x[i]; //����ÿ�������ĸ߶� 
        d[i]=1; //��ʼֵ����Ϊ1 
    } 
    for(i=n-2;i>=0;i--){ 
	//��̬�滮�㷨���ݹ�ʵ��,�Ӻ�����ǰѭ�� 
        for(j=i+1;j<n;j++) 
            if((x[j]<x[i])&&(d[i]<d[j]+1)){ //�ж����� 
                d[i]=d[j]+1; 
            } 
    } 
    for(i=0;i<n;i++){ //�ҳ������� 
        if(d[i]>dmax){ 
            dmax=d[i]; 
            xh=i; //��һö�����صĵ������ 
        } 
    } 
    //cout<<"���ص��ĵ�����Ϊ:";
    cout<<d[xh]<<endl; 
    /*cout<<"�����صĵ�������Ϊ:";
    cout<<x[xh]<<","; 
    for(j=xh+1;j<n;j++) //����������������ĵݼ���� 
        if((x[j]<=x[xh])&&(d[xh]==d[j]+1)){ //�ж����� 
            cout<<x[j]<<","; 
            xh=j; 
        } */
	}
    return 0; 
} 
