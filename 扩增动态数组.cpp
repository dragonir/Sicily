#include <iostream>  
using namespace std;  
int main( )  {  
    int num,i,addNum;  //num是小组人数  
    cout<<"输入学生人数: ";  
    cin>>num;  
    int *score = new int[num];  
    cout<<"请输入学生成绩: ";  
    //输入num名同学的成绩  
    for(i=0; i<num; i++)  
        cin>>score[i]; //*(score+i)  
    cout<<"需要增加多少名学生? ";  
    cin>>addNum;   //addNum是需要增加的人数  
    //下面的程序完成对数组的扩容，并输入另外的成绩  
    cout<<"请输入他们的成绩：";  
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
    cout<<"现在共有" << num << "名同学，他们的成绩是: "<<endl;  
    for(i=0; i<num; i++)  
        cout<<score[i]<<"  ";  
    cout<<endl;  
    delete []score;  
    return 0;  
}  
