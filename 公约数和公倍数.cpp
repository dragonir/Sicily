#include<iostream>
using namespace std;int sum[100];
int main(){
	int n;
	cin>>n;
	while(n--){
		int a,b,c;
		cin>>a>>b;
		if(a>b)
		c=a;a=b;b=c;{      
		    
			if(b%a==0)
				cout<<a;
			else{
				for( int i=a;i>=1;i--){
					if(b%i!=0||a%i!=0)
						i--;
					if(b%i==0&&a%i==0)
						cout<<i;
					if(b%i==0&&a%i==0)
						break;
		
				}
			}
				cout<<" ";
			}
	      	/*  {
		if(b%a==0){
				cout<<b<<endl;
			}
			else{
				if((a%2!=0&&b%2!=0)||(a%2==0&&b%2!=0)||(a%2!=0&&b%2==0))
					cout<<a*b;
				else
					cout<<(a*b)/2;
				}
	        }	
	}
	}*/}
	return 0; 
}
