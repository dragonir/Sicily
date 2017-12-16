#include<iostream>
using namespace std;
int main(){
	int n; 
	while(cin>>n&&n!=0){
	int A[111][111],B[111][111];
		for(int i=1; i<=n; i++){
			for(int j=1;j<=n; j++)
				cin>>A[i][j];
		}
		for(int i=1; i<=n; i++){
			for(int j=1;j<=n; j++)
				cin>>B[i][j];
		}	
		for(int i=1; i<=n; i++){	
			for(int j=1;j<=n; j++){
				if(j<n)
				cout<<A[i][j]+B[i][j]<<" ";
				else cout<<A[i][j]+B[i][j];
			}
			cout<<endl;
		}
	} 
	return 0;		
}
