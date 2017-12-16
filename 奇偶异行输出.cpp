#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a; cin>>a;
		for(int i=1;i<=a;i+=2)
		 { cout<<i<<" ";}
		for(int i=2;i<=a;i+=2)
		  {cout<<i;} 
	}
	return 0;
} 
