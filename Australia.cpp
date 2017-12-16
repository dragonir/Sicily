#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;

class Austrlia{
		public:
		double length;
		double height;
		double area;
	Austrlia();
	double setLength(double length);
	double getLength();
	double setHeight(double height);
	double getHeight();
	void display();
	
};
	Austrlia::Austrlia(){
		length=1;
		height=1;
	}
	double Austrlia::setLength(double length){
		this->length=length;
	}
	double Austrlia::getLength(){
		return length;
	}
	double Austrlia::setHeight(double height){
		this->height=height;
	}
	double Austrlia::getHeight(){
		return height;
	}
 void Austrlia::display(){
		cout<<"if the length is: "<<length<<" and the height is: "<<height<<" then the area is: "<<height*length<<"\n";
	}
	


int main(){
	Austrlia s1;
	s1.display();
	Austrlia s2;
	s2.setHeight(2);
	s2.setLength(2);
	s2.display();
	Austrlia s3;
	s3.setHeight(8);
	s3.setLength(9);
	s3.display();
	cout<<s3.getHeight()<<" "<<s3.getLength()<<"\n";
	
	
} 
