#include <iostream>
using namespace std;
int main(){
	int a[10],b,c=0,d;
	cin>>d;
	while(d--){
		for(int i=0;i<10;i++)cin>>a[i];
			cin>>b;
		for(int i=0;i<10;i++)
			if((b+30)>=a[i])c++;
			cout<<c<<endl;c=0;
	}
}

