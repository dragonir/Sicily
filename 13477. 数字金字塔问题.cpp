#include<iostream>
using namespace std;
int main(){
	int t; cin>>t;
	for(int i=1;i<=t;++i){
	    for(int j=1;j<=i;++j){    // ǰ��
	    if(j == 1) cout<<j;      //ȷ����һ��
	    else  cout<<" "<<j;
	    }
		for(int k=i-1;k>=1; --k){  // ����
	     cout<<" "<<k;
	    }
	    cout<<endl;     // ȷ�����һ������
	}
	return 0;
}

