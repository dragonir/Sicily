#include <iostream>  
using namespace std;  
int main( )  {  
    int num,i,addNum;  //num��С������  
    cout<<"����ѧ������: ";  
    cin>>num;  
    int *score = new int[num];  
    cout<<"������ѧ���ɼ�: ";  
    //����num��ͬѧ�ĳɼ�  
    for(i=0; i<num; i++)  
        cin>>score[i]; //*(score+i)  
    cout<<"��Ҫ���Ӷ�����ѧ��? ";  
    cin>>addNum;   //addNum����Ҫ���ӵ�����  
    //����ĳ�����ɶ���������ݣ�����������ĳɼ�  
    cout<<"���������ǵĳɼ���";  
    int *newscore=new int [num+addNum];  
    for(i=0;i<num;i++)  
    {  
        newscore[i]=score[i];  
    }  
    for(;i<(num+addNum);i++)  
    {  
        cin>>newscore[i];  
    }  
    delete []newscore;  
    score=newscore;  
    num=num+addNum;  
    cout<<"���ڹ���" << num << "��ͬѧ�����ǵĳɼ���: "<<endl;  
    for(i=0; i<num; i++)  
        cout<<score[i]<<"  ";  
    cout<<endl;  
    delete []score;  
    return 0;  
}  
