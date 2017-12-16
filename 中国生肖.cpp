#include <iostream>
using namespace std;
int main ()
{
	cout <<"ÊäÈëÒ»¸öÄê·Ý:";
	int year;
	cin>>year;
	switch (year%12)
	{
		case 0:cout<<"ºï"<<endl;break;
		case 1:cout<<"¼¦"<<endl;break;
		case 2:cout<<"¹·"<<endl;break; 
		case 3:cout<<"Öí"<<endl;break;
		case 4:cout<<"Êó"<<endl;break;
		case 5:cout<<"Å£"<<endl;break;
		case 6:cout<<"»¢"<<endl;break;
		case 7:cout<<"ÍÃ"<<endl;break;
		case 8:cout<<"Áú"<<endl;break;
		case 9:cout<<"Éß"<<endl;break;
		case 10:cout<<"Âí"<<endl;break;
		case 11:cout<<"Ñò"<<endl;break;
		
		
	}
	return 0;
	 
}
