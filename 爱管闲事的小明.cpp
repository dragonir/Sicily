#include<iostream>
#define x 10005
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		int l,m; cin>>l>>m;
		int list[x]={0};
		while(m--){
			int a,b; cin>>a>>b;
			for(int i=a;i<=b;i++)
			list[i]=1;
		} 
		int counter=0;
		for(int i=0;i<=l;i++)
		if(!list[i]) counter++;
		cout<<counter<<"\n";
	}
	return 0;
}
