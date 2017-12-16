// Problem#: 13988
// Submission#: 3607321
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
using namespace std;
class Fan{
    private:
      int speed;
      bool on;
      double radius;
      string color;
    public:
      Fan(){
        speed = 1;
        on = false;
        radius = 5;
        color = string("blue");
      }
      int getSpeed(){
        return speed;
      }
      void setSpeed(int speed){
        this->speed = speed;
      }
      bool isOn(){
        return on;
      }
      void setOn(bool trueOrFalse){
        this->on = trueOrFalse;
      }
      double getRadius(){
        return radius;
      }
      void setRadius(double radius){
        this->radius = radius;
      }
      string getColor(){
        return color;
      }
      void setColor(string color){
        this->color = color;
      }
};  
                   
