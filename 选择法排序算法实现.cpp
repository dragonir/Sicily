#include <iostream>
using namespace std;
int main ()
{
	cout<<"请输入10个整数"<<endl;
	int ia[10];
	for (int i=0;i<10;i++)
	cin>>ia[i];
	cout<<"下面对10个数字进行从小到大的排列"<<endl;
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
    cout <<"排序后的结果为："<<endl;
    for(int j=0;j<10;j++)
    cout <<ia[j]<<" ";
    cout<<endl;
    return 0;
} 
