#include<cstdio>
#include<algorithm>
#include <iostream>
using namespace std;                             
class Equal
{
public:
    Equal(int a=0,int b=0): a(a),b(b) {}
    operator bool(){
        return a==b;
    }
private:
    int a,b;
};                                 

