#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int num[10000];
int string_a[10000];
int string_b[10000];
int main(){
   int t; cin>>t;
   while(t--){//�������ʼ��Ϊ0
	  memset(num,0,sizeof(num));
	  memset(string_a,0,sizeof(string_a));
	  memset(string_b,0,sizeof(string_b));
	  string a,b; cin>>a>>b;
	  if(b=="0"||a=="0"){ //��a��b����һ��Ϊ0�������0
	  	 cout<<0<<endl;
		 continue;
	  }
	  int n=1,m=1;//��1Ϊ��ʼλ�ֱ�����洢a��b��ÿλ����
	  for(int i=a.size()-1;i>=0;i--)
	  	  string_a[n++]=a[i]-'0';
	  for(int i=b.size()-1;i>=0;i--)
	   	  string_b[m++]=b[i]-'0';
	  for(int i=1;i<m;i++){
	   	  int v=0;  //��ʼ����λΪ0
	   	  for(int j=1;j<n;j++){
			    num[i+j-1]+=string_b[i]*string_a[j];
			    v=num[i+j-1]/10;               //��λ
			    num[i+j]+=v;                   //��һλ����ǰһλ�Ľ�λ
			    num[i+j-1]=num[i+j-1]%10;      //���༴Ϊ��λ��ǰ��ֵ
	         } 
	  }
	  for(int k=9999;k>=1;k--){  //���������
	  	 if(num[k]!=0){
	    	  for(int i=k;i>=1;i--){
	     		 cout<<num[i];
	          }
	    	  cout<<endl; break;
	      }
	  }
   }
   return 0;
}
