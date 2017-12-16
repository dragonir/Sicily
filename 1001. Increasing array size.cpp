#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<stack>
#include<iomanip>
using namespace std;
int * doubleCapacity(int *list, int size){
        int* newscore = new int[size*2];
		for(int i=0;i<size;i++){  
        	newscore[i]=list[i];  
    	}  
    	for(int i=size;i<(size*2);i++){  
        	newscore[i]=0; 
    	}
    	return newscore;
}	
int main(){
	int list[5]={1,2,3,4,5};
    int *newlist = doubleCapacity(list,5);
    for(int i=0;i<2*5;i++)
    cout << *(newlist+i) << " ";
}
	/*memcpy(newItems, list, sizeof(int)*size);
        delete[] list;
        list = newItems;
}
int * doubleCapacity(int *list, int size){
	int *newlist= doubleCapacity(list, size);
	for(int i=0; i<2*size; i++)
		cout<<*(newlist+i)<<" ";
} 
/*int list[5]={1,2,3,4,5};
int *newlist = doubleCapacity(list,5);
for(int i=0;i<2*5;i++)
  cout << *(newlist+i) << " ";*/
/*int * doubleCapacity(int *list, int size){
	int *items;
	size*=2;
	*list= new  int[size];
	memcpy(*list, items, sizeof(int)*size);
	delete[] items;
	items= list;
}*/
