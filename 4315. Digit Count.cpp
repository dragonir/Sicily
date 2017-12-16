#include<cstdio>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,t;
    cin >> t;
    while (t--){
        vector<int>arr;
        int result[10]= {0};
        cin >> n;
        for(int i = 1;i <= n; i++){
            if(i < 10)
                arr.push_back(i);
            else if(i < 100){
                arr.push_back(i/10);
                arr.push_back(i%10);
            }
            else if(i < 1000){
                arr.push_back(i/100);
                arr.push_back((i/10)%10);
                arr.push_back(i%10);
            }
            else{
                arr.push_back(1);
                arr.push_back(0);    
                arr.push_back(0);
                arr.push_back(0);
            }
        }
        for(int j = 0; j < arr.size(); j++ ){
            for(int k = 0; k <= 9; k++){
                if(arr[j] == k)
                    result[k]++;
            }
        }
        for(int k = 0; k <= 8; k++){
            cout << result[k] << " ";
        }
        cout << result[9] << endl;
    }
    return 0;
}

