
/* ������ڣ�2012 �� 12 �� 18 ��         
* �� �� �ţ�v1.0                  
* ����������
* ������������Ҫ���������������������дһ�����ڶ���ĳ������ݰ���length��width��height��Ҫ���ó�Ա����ʵ�����¹���
            1���ɼ�������3�������峤������
			2�����㳤��������
			3�����3������������
* ���������
* �����������        
* �㷨��ƣ���         
*/
//#include "stdafx.h"
#include<iostream>
using namespace std;
//������
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
//���뺯��
void area::set_area(){
	//cout<<"��ֱ����볤����ĳ� �� �ߣ�"<<endl;
	cin>>length>>width>>height;
}
//���㺯��
void area::show_area(){
	area1=length*width*height;
	//cout<<"���������Ϊ��"<<area1<<endl;
	cout<<area1<<endl;
}
//������
int main(){
	area area2,area3,area4;//�������
	area3.set_area();//��������
	area3.show_area();
	area3.set_area();//��������
	area3.show_area();
	area3.set_area();//��������
	area3.show_area();
	return 0;
}



