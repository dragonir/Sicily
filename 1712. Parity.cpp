#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<string>
#include<vector>
#include<stack>
#include<ctime>
#include<cmath>
#include<algorithm>
int main(){
    char st[111];
    int len,i,cnt;
    while(gets(st)){
        cnt = 0;
        if(!strcmp(st,"#"))break;
        len = strlen(st);
        for(i = 0;i<len;i++){
            if(st[i] == '1')
            	cnt++;
        }
        if(st[len-1] == 'e'){
            if(cnt%2 == 0)
            	st[len-1] = '0';
            else
            	st[len-1] = '1';
        }
        else if(st[len-1] == 'o'){
            if(cnt%2 == 0)
            	st[len-1] = '1';
            else
            	st[len-1] = '0';
        }
        st[len] = '\0';
        printf("%s\n",st);
    }
    return 0;
}

