#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int sum1=0,sum2=0;
	int len1=s1.size();
	int len2=s2.size();
	for(int i=0; i<=len1; i++){
		sum1+=s1[i]; 
	}
	for(int i=0; i<=len2; i++){
		sum2+=s2[i]; 
	}
	if(sum1==sum2)
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
	return 0;
} 
