#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cstring>
#include<string>
#include<vector>
#include <iostream>
#include <cstring>
using namespace std;
int n,m,d,arr[1002],vis[1002]; //arr����𰸣�vis��¼�Ƿ���ʹ�ĳλ��
bool b;//�жϴ��Ƿ����
bool prime(int x){
    for(int i=2;i*i<=x;++i)
        if(x%i==0)
            return false;
    return true;
}
bool check(int pos,int s){//�ж�s�Ƿ���Է���arr[pos]��
	for(int i=pos-1;i>=0&&i>=pos-d+1;--i){
        s+=arr[i];
        if(prime(s))
            return false;
    }
    return true;
}
void huisu(int pos){
	for(int i=n;i<=m;++i){
		if(vis[i]==0&&check(pos,i)){
			vis[i]=1;
			arr[pos]=i;
			if(pos==m-n){
				b=1;
				return ;
			}
			huisu(pos+1);
			if(b==1)
				return;//���һ�ε��ý������𼶷���
			vis[i]=0;
		}
	}
}
int main(){
	while(cin>>n>>m>>d&&n){
		b=0;
		memset(vis,0,sizeof(vis));
		huisu(0);
		if(b){
			cout<<arr[0];
			for(int i=1;i<=m-n;i++)
				cout<<","<<arr[i];
			cout<<endl;
		}
		else
			cout<<"No anti-prime sequence exists."<<endl;
	}
	return 0;
}
