#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int num[10000];
int string_a[10000];
int string_b[10000];
int main(){
   int t; cin>>t;
   while(t--){//把数组初始化为0
	  memset(num,0,sizeof(num));
	  memset(string_a,0,sizeof(string_a));
	  memset(string_b,0,sizeof(string_b));
	  string a,b; cin>>a>>b;
	  if(b=="0"||a=="0"){ //若a，b其中一个为0，则输出0
	  	 cout<<0<<endl;
		 continue;
	  }
	  int n=1,m=1;//以1为初始位分别逆向存储a，b的每位数字
	  for(int i=a.size()-1;i>=0;i--)
	  	  string_a[n++]=a[i]-'0';
	  for(int i=b.size()-1;i>=0;i--)
	   	  string_b[m++]=b[i]-'0';
	  for(int i=1;i<m;i++){
	   	  int v=0;  //初始化进位为0
	   	  for(int j=1;j<n;j++){
			    num[i+j-1]+=string_b[i]*string_a[j];
			    v=num[i+j-1]/10;               //进位
			    num[i+j]+=v;                   //下一位加上前一位的进位
			    num[i+j-1]=num[i+j-1]%10;      //求余即为本位当前数值
	         } 
	  }
	  for(int k=9999;k>=1;k--){  //逆向输出答案
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
