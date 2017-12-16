#include<iostream>
#include<vector>
using namespace  std;
int main()
{
    int count,number;
    cin>>count;
    while(cin>>number){
        if(number!=0){
                  vector<int> ivec;
           for(int  i=0;number!=0;i++){
                 ivec.push_back(number%2);
                 number=number/2;
        }
           for( vector<int>::iterator q=ivec.end()-1;q>ivec.begin();q--)
               cout<<*q;
           cout<<*ivec.begin();
        cout<<endl;
        }
        else
            cout<<0<<endl;
    }
    return 0;
}

