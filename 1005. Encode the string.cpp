#include <cstdio> 
#include <cstring> 
int main(){    
	char a[100010] ;    
	while(scanf("%s\n",a) != EOF){        
		int len = (int) strlen(a) ;        
		putchar(a[0]) ; 
		int cnt = 1 ;        
		for(int i = 1 ; i < len ; i ++)            
			if(a[i] != a[i - 1]){
				if(cnt> 1) 
					printf("%d",cnt) ;                
					cnt = 1 ; 
					putchar(a[i]) ;            
			}
			else cnt ++ ;        
			if(cnt > 1) 
			printf("%d",cnt) ;        
			putchar('\n');    
	}    
	return 0 ; 
}

