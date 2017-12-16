#include <iostream>
using namespace std;
int main (){
    int m,n,x,y;
    while (cin >> m >> n){
        if (m == 0 && n == 0)
            return 0;
        else{
            x = 2*m - n/2;
            y = n/2 - m;
            if ( x < 0 || y < 0 || n%2 != 0)
                cout <<"No answer"<<endl;
            else 
                cout << x <<" "<< y << endl;
        }
    }
    return 0;
}

