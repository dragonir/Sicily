#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N;
	cin>>N;
	while(N--){
		int m, a[1000];
		cin>>m;
		for(int i=0;i<m;i++)
			cin>>a[i];
			nth_element(a,a+m/2,a+m);
				cout<<a[m/2]<<"\n";
				
	}
	return 0;
} 
