#include <iostream>
using namespace std;
int main()
{
	int ia[6]={0,1,2,3,4,5};
	int nloop=sizeof(ia)/sizeof(int);
	int nSum;
	while (nloop)
	{
		int a=ia[nloop - 1];
		if (nloop==6)
		nSum=a;
		else
		nSum+=a;
		cout <<a<<endl;
		nloop--;
	}
	cout <<"Sum"<<nSum<<endl;
	return 0;
	
	
}
