#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		int a[12]={0},save2=0,plus=0;
		float save1=0;
		for(int i=0;i<12;i++)cin>>a[i];
			for(int i=0;i<12;i++){
				plus=300-a[i];//plus是一个月除去开销之外的余数
				if(plus<0){
					cout<<"-"<<i+1;break;
				} 
				
				while(plus>=100){
					save1+=100;plus-=100;  //save1表示要存起来的钱数 
					if(plus<100)a[i+1]-=plus;
				}
					if(plus>=0){
						save1=save1*1.2+plus;
						save2=(int (save1));
						cout<<save2;
					}
						
				
				
			}
	}
return 0 ; 
} 
