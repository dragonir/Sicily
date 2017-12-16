#include<iostream> 
#include<cmath>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b;
	if(a>b){
	c=a;
	a=b;
	b=c;}
	cout<<"("<<b-a<<","<<" "<<b+a<<")"<<endl;
	return 0;
}
