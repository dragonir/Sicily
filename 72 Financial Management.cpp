#include<iostream>
#include<iomanip>
using namespace std;
double money[20];
int main(){
	double cont=0;
	for(int i=1;i<=12;i++){
		cin>>money[i];
		cont+=money[i];
	}
	cout<<fixed<<setprecision(2)<<cont/12<<endl;
	return 0;	
} 
