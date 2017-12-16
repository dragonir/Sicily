// Problem#: 14160
// Submission#: 3641383
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
#include<string>
#include<iomanip>
#include<cstring>
#include<stack>
#include<algorithm> 
using namespace std;
int main(){
    int t;
    int i, start, end;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        start=0;
        end=s.find_first_of( '_', start );
        while ( end != string::npos ){
            for ( i = end - 1; i >= start; i-- )
                cout << s[ i ];
            cout <<'_';
            start = end + 1;
            end= s.find_first_of( '_', start );
        }
        for( i = s.size() - 1; i >= start; i-- )
            cout << s[i];
        cout<<endl;
    } 
    return 0;
}                                 
