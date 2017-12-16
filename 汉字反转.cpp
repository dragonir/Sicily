#include <iostream>
#include <string>
using namespace std; 
void reverse(string& dst, const string& str){
    string::size_type i = str.size();
    while(i)//while(i <= str.size())
        if(0 > str[--i])
            dst += str.substr(--i, 2);
        else
            dst += str[i];
}
int main(){
    string str, dst;
    getline(cin, str);
    reverse(dst, str);
    cout << dst << endl;
}
