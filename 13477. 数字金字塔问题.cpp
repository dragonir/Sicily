#include<iostream>
using namespace std;
int main(){
	int t; cin>>t;
	for(int i=1;i<=t;++i){
	    for(int j=1;j<=i;++j){    // 前面
	    if(j == 1) cout<<j;      //确保第一个
	    else  cout<<" "<<j;
	    }
		for(int k=i-1;k>=1; --k){  // 后面
	     cout<<" "<<k;
	    }
	    cout<<endl;     // 确保最后一个换行
	}
	return 0;
}

