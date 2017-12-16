#include <iostream>
using namespace std;

int main()
{
	cout<< "the size of int: " <<sizeof(int) << "bytes" <<endl;
	cout<< "the size of long: "<<sizeof(long) << "bytes" <<endl;
	cout<< "the size of double: " <<sizeof(double)
	  <<"bytes" << endl;
	  
	  double area = 5.4;
	  cout <<"the size of variable area:"<<sizeof(area)
	  << "bytes"<< endl;
	  
	  int age =31;
	  cout<<"the size of variable age:"<<sizeof(age)
	    <<"bytes"<<endl;
	    
	    return 0;
} 
