#include <iostream>
using namespace std;

int main()
{
	//prompt the user to enter weight in pounds
	cout <<"Enter weight in pounds : ";
	double weight;
	cin >> weight;
	
	//prompt the user to enter height in inches
	cout<<"Enter height in inches : ";
	double height;
	cin >> height;
	
	const double KILOGRAMS_PER_POUND = 0.45359237; //CONSTANT
	const double METERS_PER_INCH = 0.0254; //CONSTANT
	
	//Compute BMI
	double weightInKilograms = weight * KILOGRAMS_PER_POUND ;
	double heightInMeters = height * METERS_PER_INCH ;
	double bmi = weightInKilograms / 
	  (heightInMeters*heightInMeters);
	  
	  //display result
	  cout <<"BMI is"<< bmi <<endl;
	  if (bmi<18.5)
	    cout<<"Underweight" <<endl;
	  else if (bmi<25)
	    cout<<"Normal" <<endl;
	  else if (bmi<30)
	    cout<<"Overweiht" <<endl;
	  else
	    cout<<"Obese" <<endl;
	    
	    return 0;
}   

