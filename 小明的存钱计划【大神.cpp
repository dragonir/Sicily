#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 	int sum,m,s,n,r,i,pay[12];cin>>n;     //m������Ǯ,sum��Ǯ�ĺ�,s�����Ƿ񹻻�,r����������ĸ���
 	while(n--)
 	{
 		sum=s=r=0;
 		for(i=0;i<12;i++){
			 cin>>pay[i];
			 s+=(300-pay[i]);
			 if(s<0) r=i+1;
			 else if(s>100){
			 m=s;s%=100;sum+=(m-s);
			 }
		 }
			 if(r) cout<<-r<<endl;
			 else cout<<floor(sum*1.2+s+0.5)<<endl;    //�����Ǽ����㻨Ǯ
			 }
 return 0;
}

