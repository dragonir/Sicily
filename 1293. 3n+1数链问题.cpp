#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<string>
#include<stack>
#include<algorithm>
#include<cmath>
#include<ctime>
#include<vector>
using namespace std;
int Len( int n){
     int Length = 1;
     while (n!=1){
         if ( n % 2 == 1 ) 
              n = 3*n + 1;
         else
              n=n>>1; 
         ++Length;
     }
     return Length;
}
int main(){
    int i,j,max = 0;
    cin >>i>>j;
    for(int m = i;m <= j;m++){
        if (Len(m) >= max)
            max = Len(m);
    }
    cout << max << endl;
    return 0;
}
