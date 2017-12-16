#include <iostream>
const int ArSize=16;
int main()
{  
   long long factorils[ArSize];
   factorils[1]=factorils[0]=1LL;
   for(int i=2;i<ArSize;i++)
     factorils[i]=i*factorils[i-1];
     for(int i=0; i<ArSize;i++)
     std::cout<<i<<"!"<<factorils[i]<<std::endl;
     return 0;
     
	
}
