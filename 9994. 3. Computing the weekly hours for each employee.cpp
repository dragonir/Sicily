#include<iostream>
#include<cstdio>
int A[1111][1111];
using namespace std;
int main(){
	int t; cin>>t;
	int sum=0;
	while(t--){
		int n; cin>>n;
		int sum =0;
		for(int i=1; i<=n; i++){	

			for(int j=1;j<=7; j++)
				cin>>A[i][j];
			
	    }
		
	for(int i=1; i<=n; i++){	
		for(int j=1;j<=7; j++){	
		//sum+=A[i][j];	
		//	cout<<A[i][j]<<" ";
			cout<<sum;
			}
		//cout<<endl;
	}
	
	}
	return 0;
} 
