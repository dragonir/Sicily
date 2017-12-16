#include<iostream> 
using namespace std;
int main()
{
	int t,m,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		if(n%(m+1)==0)
		cout<<"Lose"<<endl;
		else
		cout<<"Win"<<endl;
    }
    return 0;
}
