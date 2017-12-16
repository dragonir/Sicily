//先算出分子，分母，再算出分子分母的最大公约数，约分按格式输出即可。
#include<iostream>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<stack>
using namespace std;
int gcd(int m, int n){
    while (n != 0) {
        int tmp = m % n;
        m = n;
        n = tmp;
    }
    return m;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        int result, num;
        cin>>a>>b>>c>>d;
        result=a*d+c*b;
        num=b*d;
        int tmp=gcd(num, result);
        if(num/tmp != 1){
            cout << result/tmp <<'/'<<num/tmp<< endl;
        } 
		else {
            cout<<result/tmp<< endl;
        }
    } 
    return 0;
}                            
     

