#include<iostream> 
#include<cstdio>
#include<iomanip>
using namespace std;
int A[111][111],B[111][111],C[111][111];
void matrix(int **b,int **c, int **a, int nx, int ny, int nk)
{
int i,j,k;
for (j=0;j<ny;j++)for(i=0;i<nx;i++)a[j][i]= 0;
for(j=0;j<ny;j++){
for(i=0;i<nx;i++){
for(k=0;k<nk;k++)a[j][i]+= b[j][k]*c[k][i];
};
};
};

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		cin>>A[i][j];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		cin>>B[i][j];
		matrix( A[i][j],B[i][j],C[i][j],n,n,n);
}
