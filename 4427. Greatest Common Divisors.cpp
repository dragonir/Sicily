#include<iostream>
using namespace std;
int main(){
	int t; 
	cin>>t;
	while(t--){
		int x,y,m,n,i;
		cin>>x>>y>>m>>n;
		for(i=n;i>=m;i--){
			if(x%i==0&&y%i==0)
			break;
		} 
		if(i>=m)
			cout<<i<<"\n";
		else
			cout<<"No answer\n";
	}
	return 0;
}
