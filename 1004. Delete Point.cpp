#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<stack>
#include<iomanip>
using namespace std;
class Point {
    int x, y;
public:
    Point(){ 
	x = 0; y = 0;
		}
    Point(int a,int b){ 
	x = a; y = b; 
		}
    int GetX(){ 
	return x; 
		}
    int GetY() { 
	return y; 
		}
   ~Point(){
		cout<<"point("<<x<<","<<y<<") has been deleted!"<<endl;
	}
};
int main(){
	Point x(1,2);
	cout<<x.GetX()<<endl;
	return 0;
	
}
