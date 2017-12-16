#include <iostream> 
using namespace std;
int main ()
{
	int a ; 
	cin >>a;
	if(a%3==0)
	cout<<"Bob"<<endl;
	
	if(a%3==1 || a%3==2)
	cout<<"Alice"<<endl;
	
	return 0;
}
