#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)

{
	if(n==1) return false;
	float k=sqrt(float(n));
	for(int i=2;i<=k;i++)
	if (n%i==0)return false;
	return true;
}
int main()
{
	int m,n,a;
	cin>>m;
	while(m--)
	{   int s=0;
	    cin>>n;
	    for(int i=1;i<n;i++)
	    {
	    	cin>>a;
	    	if(isPrime(a))
	    	s+=a;
	  
	    }

	
		    cout<<s<<endl;
	
	}
	return 0;
}
	
 
