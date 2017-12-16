#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
#include<ctime>
#include<cctype>
#include<vector>
#include<stack>
#define min(a,b) ((a)<(b)?(a):(b))  
#define max(a,b) ((a)>(b)?(a):(b))  
using namespace std;
int ca, cb, ma, mb;  
int main()  {  
    while (scanf("%d%d%d%d",&ca,&cb,&ma,&mb)!= EOF){  
        if ( ca==0 || ma==0 ) 
			printf("%d\n", min(cb,mb));  
        else if ( cb==0 || mb==0 ) 
			printf("%d\n", min(ca,ma));  
        else if ( ca < cb ) 
			printf("%d\n", ca+min(cb,mb*(ca+1)));  
        else 
			printf("%d\n", cb+min(ca,ma*(cb+1)));  
    }
	return 0;
} 
