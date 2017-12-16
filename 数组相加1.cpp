#include<iostream>
using namespace std;
int main()
 {
    int n,i,j,A[10][10],B[10][10],C[10][10];
    while(cin>>n,n)
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>A[i][j];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                cin>>B[i][j];
                C[i][j] = A[i][j] + B[i][j];
            }
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(j==n-1)
                    cout<<C[i][j]<<endl;
                else
                    cout<<C[i][j]<<" ";
    }
    return 0;
 }
