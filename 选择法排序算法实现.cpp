#include <iostream>
using namespace std;
int main ()
{
	cout<<"������10������"<<endl;
	int ia[10];
	for (int i=0;i<10;i++)
	cin>>ia[i];
	cout<<"�����10�����ֽ��д�С���������"<<endl;
	for(int m=0;m<9;m++) 
	{
		for(int n=m+1;n<10;n++)
		{
			if(ia[m]>ia[n])
			{
				int nTemp =ia[m];
				ia[m]=ia[n];
				ia[n]=nTemp;
			}
		}
		
	}
    cout <<"�����Ľ��Ϊ��"<<endl;
    for(int j=0;j<10;j++)
    cout <<ia[j]<<" ";
    cout<<endl;
    return 0;
} 
