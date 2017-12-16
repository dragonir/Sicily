#include <iostream> 
using namespace std;
int main ()
{
	int a,b;
	cin>>a;
	b=(a-2001)/4 ;//runnian
	cout<<(1+b*366+(a-2001-b)*365)%7;
	return 0;
}
