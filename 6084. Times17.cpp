#include<iostream>
using namespace std;
int main(){
    string n_binary;
    cin>>n_binary;
    string result_binary=n_binary+"0000";//����17�����ȳ���16�ڼ��ϱ���
    n_binary="0000"+n_binary;//����λ������ģ������
    int len=result_binary.length();
    int temp=0;//��¼��λ
    for(int i=len-1;i>0;i--){//ģ������ӷ�
        if((n_binary[i]-'0')+(result_binary[i]-'0')+temp<2){//������λ
            result_binary[i]=(n_binary[i]-'0')+(result_binary[i]-'0')+temp+'0';
            temp=0;
        }
        else{
            result_binary[i]=(n_binary[i]-'0')+(result_binary[i]-'0')+temp+'0'-2;
            temp=1;
        }
    }
    if(temp==1){//������λ�н�λ��Ҫ��ǰ�油'1',����λ֮��ڶ�λ��Ϊ'0'
        result_binary[0]='0';
        result_binary="1"+result_binary;
    }
    cout<<result_binary<<endl;
    return 0;
}
