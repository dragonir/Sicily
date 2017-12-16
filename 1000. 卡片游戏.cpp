//队列的应用 
#include<iostream>
#include<stack>
#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
queue<int>card;
int  main(){
	int t;
	cin>>t;
	int  n;
	while(t--){
		cin>>n;
		for(int i=1; i<=n; i++){
			card.push(i);
		}
		while(!card.empty()){
			cout<<card.front()<<" ";
			card.pop();
			card.push(card.front());
			card.pop();
		}
		cout<<endl;
	}
} 
