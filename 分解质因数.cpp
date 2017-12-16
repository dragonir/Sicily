#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--){
        int now;
        cin>>now; int sum=0, i=2;
        while (now>1){
            while (now%i==0){
                sum++;


                cout << i;
                cout <<' ';
                now/=i;
            }
            i++;
        }
        cout << endl;
    }
    return 0;
}                                
