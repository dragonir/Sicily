#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	int n, height, sum[10], flag=0;
	cin>>n;
	while(n--){
		for(int i=0;i<10;i++)cin>>sum[i];
			cin>>height;
		for(int i=0;i<10;i++)		
			if((height+30)>=sum[i])flag++;
				cout<<flag<<endl;flag=0;
	}			
}
