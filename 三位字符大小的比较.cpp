#include <iostream>
using namespace std;
int main()
{
	char a,b,c,d;
	int n; cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		if(a>b){d=a;a=b;b=d;}
		if(a>c){d=a;a=c;c=d;}
		if(b>c){d=b;b=c;c=d;}
		
		
	cout<<a<<" "<<b<<" "<<c<<endl;
	
		
	}
	
	return 0;
}
