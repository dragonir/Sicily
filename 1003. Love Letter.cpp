#include <iostream>
#include<algorithm> 
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
int main(){
    int k, x;  cin>>k>>x;
    string s[16]; cin>>s[1]>>s[2];
    for(int i=3;i<=k;i++)
    	s[i]=s[i-2]+s[i-1];
    int len=s[k].length(),sum=0;
    for(int i=0;i<len-1;i++){
        if(s[k][i]=='A'&&s[k][i+1]=='C')
        sum++;
    }
    if(sum==x)cout<<"Accepted"<<"\n";
    else cout<<"Forever alone"<<"\n";
    return 0;
}                                 
