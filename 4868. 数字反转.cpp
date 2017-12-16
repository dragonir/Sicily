#include<iostream>
#include<cctype>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main(){
    int olds, news = 0;
    scanf("%d", &olds);
    while(olds != 0){
        news *= 10;
        news += olds % 10;
        olds /= 10;
    }
    printf("%d\n", news);
    return 0;
}
