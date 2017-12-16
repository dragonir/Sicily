#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int i, arr[n];
	double sum = 0;
	double d = 0;
	double avg;
	for (i = 0; i != n; ++i)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	avg = sum / n;
	for (i = 0; i != n; ++i)
	{
		d += ((double)arr[i] - avg) * ((double)arr[i] - avg)/n;
	}
	cout << fixed<<setprecision(2)<<avg<< " "  <<fixed<<setprecision(2) <<d<< endl;

}
