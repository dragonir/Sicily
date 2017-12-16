#include<iostream>
const int ArSize=50;
int main()
{
	long long f[ArSize];
	f[1]=f[0]=1LL;
	for (int i=2;i<ArSize;i++)
	   f[i]=f[i-1]*i;
	for(int i=0;i<ArSize;i++)
	   std::cout<<i<<"!"<<f[i]<<std::endl;
	   return 0;
	   
	
}
