#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;
int digit(int n, int k){
    if(k <= 0)
        return -1;
    while (--k > 0)
        n = n / 10;
    return n % 10;
}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<digit(x,y);
	return 0; 
}
