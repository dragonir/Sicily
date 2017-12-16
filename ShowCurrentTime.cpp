#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//obtain the total seconds since the midnight, jan 1,1970
    int totalSeconds = time(0);

    //compute the current second in the minute in the hour
	int currentSecond = totalSeconds % 60;
	
	//obtain the total minutes
	int totalMinutes = totalSeconds / 60;
	
	//compute the current minute in the hour
	int currentMinute = totalMinutes %60;
	
	//obtain the total hours 
	int totalHours = totalMinutes /60;
	
	//compute te total hour
	int currentHour = totalHours % 24;
	
	//displaiy results
	cout<<"Current hour is" <<currentHour<<":"
	<<currentMinute <<":"<<currentSecond<<"GMT"<< endl;
	
	return 0;	
}
