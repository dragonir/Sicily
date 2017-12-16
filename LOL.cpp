#include <cstdio> 
#include <cstring> 
#include <iostream> 
using namespace std ; 
const int TMax = 24 * 3600 + 10 ; 
int Girl[TMax] ; 
int Cow[TMax] ; int p[TMax] ; 
void Add_Person(int x,int a[]){    
	memset(p,0,sizeof(p)) ; 
	for(int i = 1 ; i <= x ; i ++){        
		int a1,a2,a3,b1,b2,b3 ; 
		scanf("%d:%d:%d %d:%d: %d",&a1,&a2,&a3,&b1,&b2,&b3) ;        
		int st = a1 * 3600 + a2 * 60 + a3 ;        
		int ed = b1 * 3600 + b2 * 60 + b3 ;
		if(st <= ed){
			++ p[st] ; -- p[ed] ;
		}    
	}        
	int count = 0 ; 
	for(int i = 0 ; i < TMax ; i ++){   
		count += p[i] ; if(count > 0)            
		a[i] += 1 ;   
	} 
} 
bool Three_Cow(){    
	int a,b,c ;    
	if(scanf("%d %d %d",&a,&b,&c) == EOF)        
		return false ; 
	memset(Cow,0,sizeof(Cow)) ;    
	memset(Girl,0,sizeof(Girl)) ;   
	Add_Person(a,Cow) ; 
	Add_Person(b,Cow) ;
	Add_Person(c,Cow) ; 
	return true ; 
} 
void Out24(int x){    
	int a1 = x / 3600 ;    
	int a2 = (x - a1 * 3600) / 60 ;  
	int a3 = x - a1 * 3600 - a2 * 60 ;    
	printf("%02d:%02d:%02d",a1,a2,a3) ; 
} 
bool Common_Time_Check(){    
	bool tag = false ; int last = -1 ;        
	for(int i = 0 ; i < TMax ; ++ i){        
		if(Girl[i] < 2 || Cow[i] < 3){            
			if(last != -1){                
				Out24(last) ; 
				putchar(' ') ;
			   	Out24(i) ; 
				putchar('\n') ;                
			    last = -1 ; tag = true ;
	        }        
		}        
	else if(-1 == last)  
		last = i ;   
	}        
	return tag ; 
} 
int main(){    
	bool first_test_data = true ;        
	while(Three_Cow()){        
		if(first_test_data)            
		first_test_data = false ;       
		else puts("") ;               
		int n ; scanf("%d",&n) ;
		for (int i = 1 ; i <= n ; ++ i){
			int m ; scanf("%d",&m) ;            
			Add_Person(m,Girl) ;       
		}              
		if(!Common_Time_Check())           
		puts("You cannot start a game!") ;    				
	}        
	return 0 ; 
}

