// Problem#: 14162
// Submission#: 3642048
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<cmath>

class Point{
public:
    
  Point(double x, double y){
    this->x=x;this->y=y;
  }
  
  void setX(double x){
    this->x=x;  
  }
  
  void setY(double y){
    this->y=y;
  }
  
  double getX(){
    return x;
  }
  
  double getY(){
    return y;
  } 
      
private:
  double x; 
  double y;
};

class Segment{
public:
    
  Segment (double beginX, double beginY,double endX, double endY)
  :beginPoint(beginX,beginY),endPoint(endX,endY){}
  
  double length(){
    double x1=beginPoint.getX();
    double y1=beginPoint.getY();
    double x2=endPoint.getX();
    double y2=endPoint.getY();
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  } 
  
private:
  Point beginPoint;
  Point endPoint;  
};                                 
