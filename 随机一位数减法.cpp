#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int number1=rand()%10;
	int number2=rand()%10;
	if (number1<number2)
	{
	int temp=number1;
	number1=number2;
	number2=temp; 
	}
	cout<<"what is"<<number1<<"-"<<number2<<"?"<<endl;
	int answer;
	cin>>answer;
	if(number1-number2==answer)
	cout<<"your answer is right";
	else
	cout<<"your answer is wrong."<<number1<<"-"<<number2<<"should be"/*<<'/b' */<<(number1-number2)<<endl;
	return 0;
} 
