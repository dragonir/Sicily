#include<algorithm> 
#include <iostream>
#include <cmath>
using namespace std;
int data[40000];
int Euler(int n){
    int temp=n;
    for(int i=2;i*i<=n;i++)if(n%i==0){
        temp=(temp/i)*(i-1);
        for(;n%i==0;n/=i);
    }
    if(n>1)temp=(temp/n)*(n-1);
    return temp;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		if(m>n){
			cout<<0<<endl;
			continue;
		}
		if(m==n){
			cout<<1<<endl;
			continue;
		}
		if(m==1||m==0){
			cout<<n<<endl;
			continue;
		}
		int index=0;
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				data[index++]=i;
				if(i*i<n) data[index++]=n/i;
			}
		}
		int sum=0;
		for(int i=0;i<index;i++)
			if(data[i]>=m)
				sum+=Euler(n/data[i]);
		cout<<sum+1<<endl;
	}
	return 0;
}
