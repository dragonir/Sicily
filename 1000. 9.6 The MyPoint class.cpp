// Problem#: 13992
// Submission#: 3607370
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
#include<cmath>
using namespace std;
class MyPoint
{
  private:
    double x, y;
  public:
    MyPoint(){
        x=0;
        y=0;
    };
    MyPoint(double x, double y){
        this->x=x;
        this->y=y;
    }
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    double distance(MyPoint &point){
        return sqrt((x-point.x)*(x-point.x)+(y-point.y)*(y-point.y));   
    }
};                                 
