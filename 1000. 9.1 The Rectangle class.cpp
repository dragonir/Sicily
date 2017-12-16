// Problem#: 13987
// Submission#: 3607322
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
using namespace std;
class Rectangle
{
  private:
    double width, height;
  public:
    Rectangle(){
         width=1; 
         height=1;
    }
    Rectangle(double width, double height){
        this->width = width;
        this->height=height;
    }; 
    double getWidth(){
        return width;
    }
    double getHeight(){
        return height;
    }
    void setWidth(double width){
        this->width = width;
    }
    void setHeight(double height){
        this->height=height;
    };
    double getArea(){
        return width*height;        
    }
    double getPerimeter(){
        return 2*(width+height) ;       
    }       
};     
int main(){
	Rectangle r(2,3);
	cout<<r.getArea();
}                            
