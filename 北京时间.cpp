#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int totalSeconds=time(0);
	int currentSecond=totalSeconds%60;
	int totalMinutes=totalSeconds/60;
	int currentMinute=totalMinutes%60;
	int totalHours=totalMinutes/60;
	int currentHour=totalHours%24;
	int T=currentHour+8;
	cout<<"current time is"<<T<<":"<<currentMinute<<":"<<currentSecond<<"GMT"<<endl;
	return 0;
}
