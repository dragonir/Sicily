#include<iostream>
using namespace std;
int array[10000010];
void quickSort(int a[],int,int);
int main(){ 
	int n; cin>>n;
	for(int i=0; i<n; i++){
		cin>>array[i];
	}
	int k;
	quickSort(array,0,n-1);
	for(k=0;k<n;k++)
		cout<<array[k]<<"\n";
	return 0;
}
void quickSort(int s[], int l, int r){
	if (l< r){      
		int i = l, j = r, x = s[l];
		while (i < j){
			while(i < j && s[j]>= x) 
				j--; 
			if(i < j)
				s[i++] = s[j];
			while(i < j && s[i]< x)
				i++; 
			if(i < j)
				s[j--] = s[i];
		}
		s[i] = x;
		quickSort(s, l, i - 1); 
		quickSort(s, i + 1, r);
	}
}
