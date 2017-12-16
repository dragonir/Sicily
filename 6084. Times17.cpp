#include<iostream>
using namespace std;
int main(){
    string n_binary;
    cin>>n_binary;
    string result_binary=n_binary+"0000";//乘以17可以先乘上16在加上本身
    n_binary="0000"+n_binary;//补足位数进行模拟手算
    int len=result_binary.length();
    int temp=0;//记录进位
    for(int i=len-1;i>0;i--){//模拟手算加法
        if((n_binary[i]-'0')+(result_binary[i]-'0')+temp<2){//不够进位
            result_binary[i]=(n_binary[i]-'0')+(result_binary[i]-'0')+temp+'0';
            temp=0;
        }
        else{
            result_binary[i]=(n_binary[i]-'0')+(result_binary[i]-'0')+temp+'0'-2;
            temp=1;
        }
    }
    if(temp==1){//如果最高位有进位需要在前面补'1',而进位之后第二位变为'0'
        result_binary[0]='0';
        result_binary="1"+result_binary;
    }
    cout<<result_binary<<endl;
    return 0;
}
