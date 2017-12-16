#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<cstdio>
using namespace std;
int main(){
		int a;cin>>a;
		while(a--){
			int n,m,x,y;
			cin>>n>>m;
			y=(m-2*n)/2;
			x=n-y;
			if(m%2==0&&x>=0&&y>=0)
				cout<<x<<" "<<y<<"\n";
			else cout<<"No answer"<<"\n";
		}
						
    
	return 0;
}
