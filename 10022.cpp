#include<iostream>
#include <algorithm>
#include<cstdio>
using namespace std;
int d[1000100];
int main(){
	int n,m,a,b,c;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&a,&b,&c);
		d[i]=1000000*a+1000*b+c;
	} 
	sort(d,d+n);
	for(int i=0;i<m;i++){
	 	scanf("%d%d%d",&a,&b,&c);
		int key=1000000*a+1000*b+c;
		int low, high, mid;
		low = 0;
		high = n - 1;
		while (low <= high){
			mid = (low + high) / 2;
			if (d[mid] == key) break;
			else if (d[mid] > key) high = mid - 1;
			else low = mid + 1;
		}
		if (low <= high) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
 
