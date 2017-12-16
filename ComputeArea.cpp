#include <iostream>
using namespace std;

int main()
{
	double radius ;
	double area ;
	
	//step 1 : read in radius
	radius = 20;
	
	//step 2 :compute area 
	area = radius * radius * 3.14159;
	
	//step 3 : display the area
	cout<<"the area is"<<area << endl;
	
	return 0;
}
