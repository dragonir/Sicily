#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	long double a,b,c,v;
	cout<<"请输入四棱柱的长宽高"<<endl;
	cin>>a>>b>>c;
	v=a*b*c; 
	cout<<"体积是";
	cout<<fixed<<setprecision(20)<<v<<endl;
	return 0;
	
}
