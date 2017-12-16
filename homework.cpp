#include <iostream>
using namespace std;

class FOO{
public:
int x;
	FOO(int i){
		x=i;
	}
	void print(FOO obj);
//private:
//	int x;
	void print() {
    cout<<x<<endl;      
}	
};
void display(FOO obj){
	cout<<obj.x<<endl;
}
int main(){
	FOO obj(1);
	display(obj);
    obj.print();
}

