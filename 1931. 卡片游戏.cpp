#include<iostream>
#include<queue>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cctype>

using namespace std;
int main(){
	int caseNum;
	cin >> caseNum;
	while(caseNum--){
		int num;
		cin >> num;
		queue<int> card;
		for(int i = 1; i <= num; i++){
			card.push(i);
		}
		while(!card.empty()){
			cout << card.front() << " ";
			card.pop();
			card.push(card.front());
			card.pop();
		}
		cout << endl;	
	}
}
