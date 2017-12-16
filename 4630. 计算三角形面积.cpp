#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<ctime>
#include<stack>
using namespace std;
double area(double T[3][2]){
	double s;
	s= fabs(((T[1][0] - T[0][0]) * (T[2][1] - T[0][1]) - (T[2][0] - T[0][0]) * (T[1][1] - T[0][1])) / 2);
	return s;
}

int main(){
	double T[3][2];
	for(int i=1; i<=3; i++){
		for(int j=1; j<=2; j++)
			cin>>T[i][j];
	}
	cout<<area(T);
	return 0;
}
