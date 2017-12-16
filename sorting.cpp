
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int i,j,n,count,a[100],b[100];
    while(cin>>n){
        for(i=0;i<n;i++){
        cin>>a[i];
        }
        sort(a,a+n);
        count=1;
        j=0;b[0]=a[0];
        for(i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                count++;
                j++;
                b[j]=a[i];
            }
        }
    cout<<count<<endl;
    for(i=0;i<count-1;i++)
    cout<<b[i]<<" ";
    cout<<b[count-1]<<endl;
    }
    return 0;
}
