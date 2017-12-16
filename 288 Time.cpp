#include<iostream>
using namespace std;
int main(){
	int a[4];
	int i;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]){
		for(i=0;i<4;i++){
			if(a[i]==0||a[i]==2||a[i]==3||a[i]==5||a[i]==6||a[i]==7||a[i]==8||a[i]==9)
				cout<<" _ ";
			else
				cout<<"   ";
		}
		cout<<"\n";
		for(i=0;i<4;i++){
			if(a[i]==2||a[i]==3)
				cout<<" _|";
			else if(a[i]==1||a[i]==7)
				cout<<"  |";
			else if(a[i]==0)
				cout<<"| |";
			else if(a[i]==8||a[i]==9||a[i]==4)
				cout<<"|_|";
			else
				cout<<"|_ ";
		}
		cout<<"\n";
		for(i=0;i<4;i++){
			if(a[i]==1||a[i]==4||a[i]==7)
				cout<<"  |";
			else if(a[i]==2)
				cout<<"|_ ";
			else if(a[i]==3||a[i]==9||a[i]==5)
				cout<<" _|";
			else 
				cout<<"|_|";
		}
		cout<<"\n";
	}
}
