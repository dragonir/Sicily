#include<iostream> 
#include<algorithm>
using namespace std;
int main(){
	int a[20]={1,2,44,55,6,7,88,5,77,8,9,5,33,45,678,54,345,789,789};
	sort(a,a+20);
	for(int i=0;i<20;i++)
	cout<<a[i]<<" ";
//	while(a[i]--)
	//if(a[i])cout<<" "; 
//	else cout<<"\n";
	
	return 0;
}
