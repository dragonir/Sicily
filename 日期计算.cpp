#include<iostream>
#include<algorithm>
using namespace std;
int isLeapYear(int x){
	if((x%4==0&&x%100!=0)||x%400==0) return true ;
	return false;
}
int main(){
	int t; cin>>t;
	int year,month,day; 
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,30};
	while(t--){
		cin>>year>>month>>day;
		int count=0;
		for(int i=1;i<month;i++)
			count+=a[i];
			count+=day;
		if(isLeapYear(year)&&month>2) count++;
			cout<<count<<"\n";
	} 
	return 0;
} 
