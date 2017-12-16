#include<iostream>
using namespace std;
int a[1][3],b[1][3];
int main(){
	int n,m;
	cin>>n>>m;
	for(int j=0;j<n;j++)
	for(int i=0;i<=2;i++)
	{
	  	cin>>a[1][i];
	}
	for(int j=0;j<m;j++)
	for(int i=0;i<=2;i++)
	{
		  cin>>b[1][i];
	}
   		for(int i=0;i<m;i++)    
		if(a[1][i]==b[1][i])
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		
		
	
	return 0;
}
