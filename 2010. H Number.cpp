// Problem#: 2010
// Submission#: 3637900
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
using namespace std;
int f(int k){
    int pre,cur,next;
    if ( k < 100 )
        return 1;
    cur = k % 10;
    k /= 10;
    pre = k % 10;
    k /= 10;
    while (k!=0){
        next = cur;
        cur = pre;
        pre = k % 10;
        k /= 10;
        if ( next != pre + cur && next != (pre > cur ? pre - cur : cur - pre))
            return 0;
    }
    return 1;
}
int main(){
    int n,i,result;
    cin >> n;
    result = 0;
    for ( i = 1; i <= n; ++i )
        result += f(i);
    cout << result << endl;
    return 0;
}                                 
