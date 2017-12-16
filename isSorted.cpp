#include<iostream>
#include<algorithm>
int A[10000];
using namespace  std;
bool isSorted(const int list[], int size){
	for(int i=1;i<=size;i++)
	A[i]=list[i];
	for(int i=1;i<=size;i++)
	sort(A,A+size);
	for(int i=1;i<=size;i++)
		if(A[i]==list[i])return true;
		return false;	
}
int main(){
	int list[]={4, 1, 0, 16, 61, 669, 911, 9991};
	isSorted(list, 8); 
}
