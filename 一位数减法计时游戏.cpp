#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int correctCount=0;
	int count=0;
	long startTime=time(0);
	const int NUMBER_OF_QUESTIONS=5;
	srand(time(0));
	
	while(count<NUMBER_OF_QUESTIONS)
	{
		int number1=rand()%10;
		int number2=rand()%10;
		if(number1<number2)
		{
		int temp =number1;
		number1=number2;
		number2=temp;
	
        }
	cout<<"What is"<<number1<<"-"<<number2<<"?"<<endl;
	int answer;
	cin>>answer;
	
	if (number1-number2==answer)
	{
		cout<<"your answer is right !\n";
		correctCount++;
		
	}
	else
	cout<<"your answer is wrong.\n"<<"the correct answer is :"<<number1-number2<<endl;
	count++;
	
	
    }
	
	long endTime=time(0);
	long testTime=endTime-startTime;
	
	cout<<"correct count is:"<<correctCount<<"\n Test time is"<<testTime<<"seconds\n";

		return 0;
	}
	
	
	
	
