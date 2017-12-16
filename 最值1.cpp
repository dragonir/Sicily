#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c,d,e;
	int g,h,i,j,k,l,m,n;
	cin>>a>>b>>c>>d>>e;
	{
		 g=min(a,b);
		 h=min(c,d);
		 i=min(g,h);
		 j=min(i,e);
	    
	}
	{
	     k=max(a,b);
		 l=max(c,d);
		 m=max(k,l);
		 n=max(m,e);
	    
    }
    cout<<j<<" "<<n<<endl;
	return 0;
} 
