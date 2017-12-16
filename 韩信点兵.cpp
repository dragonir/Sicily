#include <iostream>
using namespace std;
int main(){
    int n,a,b,c;
    cin >> n;
    while (n--){
        int i= 10;
        bool ans = false;
        cin >> a >> b >> c;
        for(; i <= 100 ;i++){
            if((i % 3 == a) && (i % 5 ==b) ){
                if(i % 7 == c){
                    ans = true;break;
                }
            }
        }
        if(ans){
            cout << i << endl;
        }
        else cout << "No answer" << endl;
    }
    return 0;
}


