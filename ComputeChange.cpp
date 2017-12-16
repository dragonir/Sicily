#include <iostream>
using namespace std;

int main()
{
	//receive the amount
	cout << "Enter an anount in double, for example 11.56:";
	double amount;
	cin>> amount ;
	
	int remainingAmount = static_cast<int>(amount*100);
	
	//find the number of one dollars
	int numberOfOneDollars =remainingAmount / 100;
	remainingAmount = remainingAmount % 100;
	
	//find the number of quarters in the remain amount
	int numberOfQuarters = remainingAmount / 25;
	remainingAmount = remainingAmount % 25;
	
	//find the number of dimes in the remain amount
	int numberOfDimes = remainingAmount / 10;
	remainingAmount = remainingAmount % 10;
	
	//find the number of nickels in the remain amount
	int numberOfNickels = remainingAmount / 5;
	remainingAmount = remainingAmount % 5;
	
	//find the number of pennies in the remaining amount
	int numberOfPennies = remainingAmount;
	
	//display results
	cout<<"ÄãµÄ½ð¶î"<<amount <<"consists of" <<endl <<
	"   "<< numberOfOneDollars<<"dollars" << endl <<
	"   "<<numberOfQuarters<<"quaters" << endl <<
	"   "<<numberOfDimes<<"dimes"<<endl <<
	"   "<<numberOfNickels << "nickels" <<endl <<
	"   "<<numberOfPennies<<"pennies" <<endl;
	
	return 0;
		
}
