#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath> 
using namespace std;
int f(int n){
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0)return false;
	return true;
}
int main(){
	int n; cin>>n;
	char s[100]; 
	while(n--){
		int a=1,b=1,min=100,max=0,c;
		cin>>s;
		c=strlen(s);
		sort(s,s+c);
		for(int i=0;i<c-1;i++){
			if(s[i]==s[i+1]) a++;
			else{
				if(a>max) max=a;
				if(a<min) min=a;
				a=1;
			}
		}
		if(a>max) max=a;
		if(a<min) min=a;
		if(max-min==0||max-min==1){
			cout<<"No Answer"<<"\n";
			cout<<"0"<<"\n";
		}
		if(max-min!=0&&max-min!=1){
			if(f(max-min)){
				cout<<"Lucky Word"<<"\n";
				cout<<max-min<<"\n";
			}
			else{
				cout<<"No Answer"<<"\n";
				cout<<"0"<<"\n"; 
			}
		}
	}
}
