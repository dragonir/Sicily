#include<iostream>
#include<algorithm>
#include<cmath> 
using namespace std;
void merge(const int list1[], int size1,const int list2[], int size2, int  list3[]){
	for(int k=0,i=0,j=0; k<size1+size2; k++){
		if(list1[i]>=list2[j]){
			list3[k]=list2[j]; j++;
		}
		else {
			list3[k]=list1[i]; i++;
		}
		if(i==size1){
			for(k=k+1;k<size1+size2; k++,j++)
			list3[k]=list2[j]; break;
		}
		if(j==size2){
			for(k=k+1;k<size1+size2; k++,i++)
			list3[k]=list1[i];break;
		}
	}
}
/*int main(){
	int list1[]={2,3,4,5,6,7,8};
	int list2[]={4,5,6,7,8,9};
	int list3[10000];
	cout<<merge(list1[7],7,list2[6],6);
	return 0;
}*/
