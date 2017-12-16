#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<string>
#include<cmath>
#include<ctime>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
int main(){
	double  a,b,n;
	while(cin>>a>>n&&a!=0&&n!=0){
	    b=(int)pow(a,1/n);
	    if(fabs(pow(b,n)-a)>fabs(pow(b+1,n)-a)){
		    b+=1.0;
		}	
		cout<<int(b)<<"\n";
	}
	return 0;
}

