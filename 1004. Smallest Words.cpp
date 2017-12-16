#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,j;
		char p[100],ans[n][100];
		char str[n][100];
		for(i=0;i<n;i++)
			cin>>str[i];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++)
				strcpy(ans[j],str[i]);
		}
		for(int i=0; i<n ;i++){
			strupr(str[i]);
		}  
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++){
				if(strcmp(str[i],str[j])<0){
					strcpy(p,str[i]);
					strcpy(str[i],str[j]);
					strcpy(str[j],p);
	   			}
	  		}

			cout<<ans[n-1]<<endl;	
	}
	return 0;
}
