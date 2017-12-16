
/* 完成日期：2012 年 12 月 18 日         
* 版 本 号：v1.0                  
* 输入描述：
* 问题描述：需要求三个长方体的体积，请编写一个基于对象的程序。数据包括length，width，height，要求用成员函数实现以下功能
            1、由键盘输入3个长方体长、宽、高
			2、计算长方体的体积
			3、输出3个长方体的体积
* 程序输出：
* 问题分析：略        
* 算法设计：略         
*/
//#include "stdafx.h"
#include<iostream>
using namespace std;
//声明类
class area{
public:
	void set_area();
	void show_area();
private:
	double length;
	double width;
	double height;
	double area1;
};
//输入函数
void area::set_area(){
	//cout<<"请分别输入长方体的长 宽 高："<<endl;
	cin>>length>>width>>height;
}
//计算函数
void area::show_area(){
	area1=length*width*height;
	//cout<<"长方体面积为："<<area1<<endl;
	cout<<area1<<endl;
}
//主函数
int main(){
	area area2,area3,area4;//定义对象
	area3.set_area();//函数调用
	area3.show_area();
	area3.set_area();//函数调用
	area3.show_area();
	area3.set_area();//函数调用
	area3.show_area();
	return 0;
}



