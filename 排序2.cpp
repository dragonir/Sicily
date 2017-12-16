//学号 姓名 电话 成绩
//01 XXX 182XXXXXXXX 88
#include <stdio.h>
#include <string.h>
#define MAXS 10000
struct ST {
    int XH;
    char XM[11];
    char DH[13];
    int CJ;
} st[MAXS],t;
int n,i,j;
char ln[80];
int main() {
    f=fopen("in.txt","r");
    if (NULL==f) {
        printf("Can not open file in.txt!\n");
        return 1;
    }
    i=0;
    while (1) {
        if (NULL==fgets(ln,80,f)) break;
        if (4!=sscanf(ln,"%d%10s%12s%d",&st[i].XH,st[i].XM,st[i].DH,&st[i].CJ)) {
            st[i].XH=0;
            strcpy(st[i].XM,"Unknown");
            strcpy(st[i].DH,"Unknown");
            st[i].CJ=0;
            printf("line %d format error:%s!\n",i+1,ln);
        }
        i++;
        if (i>=MAXS) {
            printf(">%d lines Ignored.\n",MAXS);
            break;
        }
    }
    fclose(f);
    n=i;
    for (i=0;i<n-1;i++) {
        for (j=i+1;j<n;j++) {
            if (st[i].CJ<st[j].CJ) {t=st[i];st[i]=st[j];st[j]=t;}
        }
    }
    for (i=0;i<n;i++) {
        printf("%5d%10s%12s%4d\n",st[i].XH,st[i].XM,st[i].DH,st[i].CJ);
    }
    return 0;
}

