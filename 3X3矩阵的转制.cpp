#include<iostream>
#include<cstdio>
using namespace std;
int A[10100][10100];
int main(){
	int n; cin>>n;
	while(n--){
		for(int i=1;i<=3;i++)
			for(int j=1;j<=3;j++)
			cin>>A[i][j];
			cout<<A[j][i]<<" ";
	/*for(int i=1;i<=n;i++){
			for(int j=1;j<=3;j++){
			cout<<A[j][i]<<" ";
			}
	cout<<endl;
	} */ 
	} 
	return 0;
}
