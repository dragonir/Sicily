
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
char str[1010];
int main(){
    int i,j;
    while(cin>>str){
        for(i=0;str[i]!='\0';i++)
            if(i%2==0)
                printf("%c",str[i]);
        		printf(",");
        for(i=0;str[i]!='\0';i++)
            if(i%2==1)
                printf("%c",str[i]);
        		printf("\n");
    }
    return 0;
}     
                            
