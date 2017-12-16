#include "stdio.h"
#include "stdlib.h"
 
int main(int argc, char* argv[])
{
   double i,n,p;
   printf("n=?");
   scanf("%lf",&n);
   p=1.0;
   for (i=1;i<=n;i++)
            p*=i;
   printf("%lf!=%.16g/n",n,p);
   return 0;
}
