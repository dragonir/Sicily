#include<iostream>
using namespace std;
float a[3][3];
void change(){
		int i,j;
		float t;
		for(i=0;i<3;i++)
			for(j=i+1;j<3;j++){//��i+1��ʼ��ִ�н���
			   t=a[i][j];
			   a[i][j]=a[j][i];
			   a[j][i]=t;
		    }
}
int main(){
	int n;cin>>n;
	while(n--) {
	int i,j;
	void change();
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)cin>>a[i][j];
	 		change();
	 		for(i=0;i<3;i++){
	  			for(j=0;j<3;j++)
		  			cout<<a[i][j]<<" ";
		  			cout<<endl;
			 }
	cout<<"\n";
	}
	
	 
	 return 0;
}
	
