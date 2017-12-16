#include<stdio.h>
#define N 60001
int s[N];
int main(){
    int t,n;
    for(int i=0; i*i<N; ++i) s[i*i]=1;
    	for(int i=1; i<N; ++i)
	        if(s[i]==1) for(int j=i;i+j<N;++j){
	            if(s[j]==1&&(s[i+j]==0||s[i+j]>2)) s[i+j]=2;
	            if(s[j]==2&&(s[i+j]==0||s[i+j]>3)) s[i+j]=3;
            }
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(s[n]) printf("%d\n",s[n]);
        else printf("4\n");
    }
    return 0;
}
