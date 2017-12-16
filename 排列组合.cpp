#include<iostream>
using namespace std;
int a[100];

	int zuhe(int m,int k){
		int i,j;
		for(i=m;i>=k;i--){
			a[k]=i;
			if(k>1)
			zuhe(i-1,k-1);
			else{
				for(j=a[0];j>0;j--)
					cout<<a[j];
					cout<<"\n";
				
			}
		}
	}

int main(){
	int m;
	cin>>m;
	while(m--)
	{
	int n,r;cin>>n>>r;
	a[0]=r;zuhe(n,r);}
}
