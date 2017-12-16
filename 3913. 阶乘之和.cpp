#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long n,sum = 0,m = 1,x;
    cin >> n;
    if ( n >= 26 )
        cout << 940313 << endl;
    else{
        for (int i = 1;i <= n;i++){
            m *= i;
            m %= 1000000;
            sum += m;
        }
         x= sum % 1000000;
        cout << x << endl;
    }
    return 0;
}


