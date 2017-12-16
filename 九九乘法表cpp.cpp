#include<iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int j;
		cin>>j;
		string str1="1*1=1 1*2=2 1*3=3 1*4=4 1*5=5 1*6=6 1*7=7 1*8=8 1*9=9";
		string str2="2*2=4 2*3=6 2*4=8 2*5=10 2*6=12 2*7=14 2*8=16 2*9=18";
		string str3="3*3=9 3*4=12 3*5=15 3*6=18 3*7=21 3*8=24 3*9=27";
		string str4="4*4=16 4*5=20 4*6=24 4*7=28 4*8=32 4*9=36";
		string str5="5*5=25 5*6=30 5*7=35 5*8=40 5*9=45";
		string str6="6*6=36 6*7=42 6*8=48 6*9=54";
		string str7="7*7=49 7*8=56 7*9=63";
		string str8="8*8=64 8*9=72";
		string str9="9*9=81";
		
		if(j==1)
		    cout<<str1<<endl;
	    if(j==2)
			cout<<str1<<"\n"<<str2<<endl;
		if(j==3)
			cout<<str1<<"\n"<<str2<<"\n"<<str3<<endl;
		if(j==4)
			cout<<str1<<"\n"<<str2<<"\n"<<str3<<"\n"<<str4<<endl;
		if(j==5)
			cout<<str1<<"\n"<<str2<<"\n"<<str3<<"\n"<<str4<<"\n"<<str5<<endl;
		if(j==6)
			cout<<str1<<"\n"<<str2<<"\n"<<str3<<"\n"<<str4<<"\n"<<str5<<"\n"<<str6<<endl;
		if(j==7)
		cout<<str1<<"\n"<<str2<<"\n"<<str3<<"\n"<<str4<<"\n"<<str5<<"\n"<<str6<<"\n"<<str7<<endl;
		if(j==8)
			cout<<str1<<"\n"<<str2<<"\n"<<str3<<"\n"<<str4<<"\n"<<str5<<"\n"<<str6<<"\n"<<str7<<"\n"<<str8<<endl;
		if(j==9)
		    cout<<str1<<"\n"<<str2<<"\n"<<str3<<"\n"<<str4<<"\n"<<str5<<"\n"<<str6<<"\n"<<str7<<"\n"<<str8<<"\n"<<str9<<endl;
		
	}
	return 0;
}
