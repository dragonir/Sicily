#include<iostream>
using namespace std;
void moveDisks(int n ,char fromTower, char toTower, char auxTower){
	if(n==1)
	cout<<"Move disk "<<n<<" from "<<fromTower<<" to "<<toTower<<endl;
	else{
		moveDisks(n-1,fromTower,auxTower,toTower);
		cout<<"Move disk "<<n<<" from "<<fromTower<<" to "<<toTower<<endl;
		moveDisks(n-1,auxTower,toTower,fromTower);
	}
}
int main(){
	cout<<"Enter number of disks : ";
	int n; cin>>n;
	cout<<"The moves are :"<<endl;
	moveDisks(n,'A','B','C');
	return 0;
}
