
#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int t,m,a[10000];
    cin >> t;
    for (int k = 1;k <= t;k++){
        cin >> m;
        for (int i = 0; i < m; i++)
            cin >> a[i];
        int min = 100,max = 0,sum = 0;
        for (int i = 0; i < m; i++)
            sum += a[i];
        for (int i = 0; i < m; i++){
            if (a[i] >= max)
                max = a[i];
            if (a[i] <= min)
                min = a[i];
        }
        cout << fixed << setprecision(2) << (double)(sum - max - min)/(m - 2) << endl;
    }
    return 0;
}
