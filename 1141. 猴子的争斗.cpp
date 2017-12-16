#include <iostream>
using namespace std;
int main(){
    int t,ans=1;
    cin>>t;
    for(int i=t-1;i>1;i--)
        ans=ans*i%10007*t%10007;
    cout<<ans<<endl;
    return 0;
}

