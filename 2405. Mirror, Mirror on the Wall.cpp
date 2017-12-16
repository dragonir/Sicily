#include <iostream>
#include <string>
#include <cstring>
#include<vector>
using namespace std;
int main(){
    string str;
    while (cin >> str){
        if (str == "#")break;
        int len = str.length();
        bool check = true;
        for (int i = 0; i < len;i++){
            if(str[i] == 'b')
                str[i] = 'd';
            else if(str[i] == 'd')
                str[i] = 'b';
            else if(str[i] == 'p')
                str[i] = 'q';
            else if(str[i] == 'q')
                str[i] = 'p';
            else if(str[i]!='i'&&str[i]!='o'&&str[i]!='v'&&str[i]!='w'&&str[i]!='x')
                 check = false;
        }
        if (check){
            for (int j = len - 1;j >= 0;j--)
                cout << str[j];
            cout << endl;
        }
        else cout << "INVALID" << endl;
    }
    return 0;
}

