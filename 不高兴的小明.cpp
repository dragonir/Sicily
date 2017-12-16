#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		int a,b,max=8,d=0;
		for(int i=0;i<7;i++){
			cin>>a>>b;
			if((a+b)>max){
				d=i;max=a+b;
			}
			
			
		}
		if(max>8)cout<<d+1<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
} 
