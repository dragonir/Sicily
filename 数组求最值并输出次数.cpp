#include <iostream>
using namespace std;

int main()
{	
	int a[100];
	
	int n; cin>>n;
	for(int i;i<n;i++)cin>>a[i];
	{
	  	int max=a[0];
	
	  	for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>max)max=a[i];}
		 	int count=0; 
			for(int i=0;i<n;i++){
		  		if(a[i]==max)count++;}
		return 0;
		
	}
	cout<<"max="<<max<<"count"<<count<<endl;
	return 0;
}

