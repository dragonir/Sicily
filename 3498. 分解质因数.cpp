#include <iostream>
using namespace std;
int main (){
	   int T; cin >> T;
	   while(T--){
	        int num;
	        cin >> num;
	        for(int i = 2 ; i <= num ;i++){
	            if(num % i == 0){
	                cout << i <<" ";
	                num/= i; i = 1;
	            }
	        }
	        cout << endl;
	   }
	    return 0;
}
