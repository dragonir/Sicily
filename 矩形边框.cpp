#include<iostream> 
using namespace std;

int main(){
    int n, cas, m;
    cin>>cas;
    while (cas--){
        cin>>m>>n;
        for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++){
                if (i==1 || i==n || j==1 || j==m) cout <<'*';
                else cout <<' ';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}                                 

