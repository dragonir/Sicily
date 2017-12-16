#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cctype>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    double diameter;
    int revlotions;
    double time;
    double distance;
    double MPH;
    int N=1;
    while(1){
	    cin >> diameter >> revlotions >> time;
	    if(revlotions == 0)
	    break; 
	    distance = diameter/12/5280*3.1415927*revlotions;
	    MPH = distance/(time/60/60);  
	    cout <<"Trip #"<<N<<":"<<" ";
	    printf("%.2f",distance);
	    cout <<" ";
	    printf("%.2f",MPH);
	    cout<<'\n';
	    N++;     
	}
    return 0;
}

