#include <iostream>
using namespace std;
int main()
{
	int a[17500]={0,1};
	int m,i,j,t,n,k=1;
	cin>>m;
	for(i=2;i<=m;i++){
		n=0;
		for(int j=1;j<=k;j++){
			t=a[j]*i+n;
			a[j]=t%10;
			n=t/10;
			if(j==k&&n!=0)
			k++; 
		}
	}for(i=k;i>=1;i--)
	cout<<a[i];
	cout<<endl;
}

