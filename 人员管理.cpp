#include <iostream>
#include <string>
#include<cstring> 
using namespace std;
class Date
{int year;
 int month;
 int day;
public:
 Date(int y=0,int m=0,int d=0)
 {year=y;month=m;day=d;}
 Date(Date &d){year=d.year;month=d.month;day=d.day;}
 void Disdate()
 {cout<<year<<"-"<<month<<"-"<<day<<endl;}
};
class People
{ char name[11];
  int number;
  char sex;
 Date birthday;
 char id[18];
 //static int howmanypeople;
public:
 People():number(0),sex('m'){strcpy(name," ");strcpy(id," ");}
 People(char na[],int n,char s,int a,int b,int c,char i[]):number(n),sex(s),birthday(a,b,c)
 {strcpy(name,na);}
 People(char na[],int n,char s,Date d,char i[]):number(n),sex(s),birthday(d)
 {strcpy(name,na);}
 People(People &p):birthday(p.birthday)
 {strcpy(name,p.name);number=p.number;sex=p.sex;strcpy(id,p.id);}
 ~People(){}
 void Setnumber(int n)  {number=n;}
 char Setsex(char s)  {sex=s;}
 char Setid(char i) {strcpy(id,"i");}
 void DisplayPeople();
 void Register();
// static int Gethowmany()  {return howmanypeople;}
};
//int People::howmanypeople=0;
void People::Register()
{int x,y,z;
 cout<<endl<<endl;
 cout<<"输入名字：";
 cin>>name;
 cout<<"输入工作编号：";
 cin>>number;
 cout<<"输入性别(m or f):";
 cin>>sex;
 cout<<"输入出生日期：";
 cin>>x>>y>>z;
 birthday=Date(x,y,z);
 cout<<"输入身份证号：";
 cin>>id;
// howmanypeople++;
// cout<<"人数："<<howmanypeople<<endl;
}
void People::DisplayPeople()
{cout<<endl<<"姓名是："<<name<<endl;
cout<<"工作编号是："<<number<<endl;
cout<<"性别是："<<sex<<endl;
 cout<<"出生日期是：";
 birthday.Disdate();
cout<<"身份证号是："<<id<<endl;
}
class Student:public People
{ char name[11];
  int number;
  char sex;
  Date birthday;
  char id[18];
  char classno[7];
public:
 Student():number(0),sex('m'){strcpy(name," ");strcpy(id," "),strcpy(classno,"1");}
 Student(char na[],int n,char s,int a,int b,int c,char i[],char no[]):People()
 {strcpy(name,na);}
 Student(char na[],int n,char s,Date d,char i[],char no[]):People()
 {strcpy(name,na);}
 Student(Student &p):People(p)
 {strcpy(name,p.name);
 number=p.number;sex=p.sex;birthday=p.birthday;
 strcpy(id,p.id);strcpy(classno,p.classno);}
 Setclassno();
 Showclassno();
 ~Student(){}
 
};
Student::Setclassno()
{People::Register();
cout<<"输入班级号:";
cin>>classno;}
Student::Showclassno()
{People::DisplayPeople();
cout<<"班级是:"<<classno<<endl;}
class Teacher:virtual public People
{ char name[11];
  int number;
  char sex;
  Date birthday;
  char id[18];
  char principalship[11];
  char department[21];
public:
 Teacher():number(0),sex('m')
 {strcpy(name," ");strcpy(id," "),strcpy(principalship," ");strcpy(department," ");}
    Teacher(char na[],int n,char s,int a,int b,int c,char i[],char pri[],char dep[]):People()
 {strcpy(name,na);}
 Teacher(char na[],int n,char s,Date d,char i[]):People()
 {strcpy(name,na);}
 Teacher(Teacher &p):birthday(p.birthday)
 {strcpy(name,p.name);number=p.number;sex=p.sex;
 //strcpy(id,"p.id");
// strcpy(principalship=p.principalship);
 //strcpy(department,"p.department");
 }
 ~Teacher(){}
  Inputteacherinformation();
  Showteacherinformation();
};
Teacher::Inputteacherinformation()
{People::Register();
cout<<"输入职务:";
 cin>>principalship;
 cout<<"输入所在部门:";
 cin>>department;
 }
Teacher::Showteacherinformation()
{People::DisplayPeople();
cout<<"职务是:"<<principalship<<endl;
cout<<"所属部门是:"<<department<<endl;}
class Gradute: virtual public Student
{char name[11];
 int number;
 char sex;
  Date birthday;
  char id[18];
  char classno[7];
  char subject[21];
  Teacher adviser;
 public:
 Gradute(){}
 Gradute(char na[],int n,char s,int a,int b,int c,char i[],char no[],char sub[],char pri[],char dep[],Teacher ad):
 adviser(ad),Student(na,n,s,a,b,c,i,no)
 {strcpy(name,na);strcpy(subject,sub);}
 //Gradute(char na[],int n,char s,Date d,char i[],char no[],char sub[],char pri[],char dep[],Teacher ad):
 //adviser(ad),Student()
 //{strcpy(name,na);}
// Gradute():Student(){}
// Gradute(Gradute &p):Student(p.)
// {}
 
  
 Setsubject();
 Showsubject();
 Setadviser();
 Showadviser();
};
Gradute::Setadviser()
{//cout<<"导师信息****"<<endl;
adviser.Inputteacherinformation();}
Gradute::Showadviser()
{adviser.Showteacherinformation();}

 Gradute::Setsubject()
 {People::Register();
 cout<<"输入班级号:";
 cin>>classno;
cout<<"输入此研究生所学专业:";
cin>>subject;}
 Gradute::Showsubject()
{People::DisplayPeople();
 cout<<"班级是"<<classno<<endl;
 cout<<"他/她学的专业是:"<<subject<<endl;}
 
class TA:public Gradute,public Teacher
{ Date birthday;
 char subject[21];
 Teacher adviser;
 char principalship[11];
 char department[21];
public:
 TA(){}
    TA(int a,int b,int c,char sub[],char na[],int n,char s,char i[],char pri[],char dep[],Teacher ad):Student(),Gradute(),Teacher(){}
    TA(Date d,char sub[],Teacher t,char pri[],char dep[],Teacher ad):Student(),Gradute(),Teacher(){}
 //TA(TA &p):birthday(p.birthday),adviser(p.adviser) {}
 ~TA(){}
 
};
 
 int main()
 { People a;
 //People a1[3];
 //People *a2;
 Student b[2];
 Teacher c;
 Gradute d;
 TA e;
 int i;
  cout<<"***************输入信息***************"<<endl;
 cout<<"人员信息录入";
 a.Register();
 a.DisplayPeople();
 //cout<<"人数是："<<People::Gethowmany()<<endl;
  cout<<"***************人员信息录入完毕***************"<<endl;
cout<<"学生信息录入"<<endl;
 for(i=0;i<=0;i++)
 {b[i].Setclassno();}
 for(i=0;i<=0;i++)
 { b[i].Showclassno();}
 cout<<"***************人员信息录入完毕***************"<<endl;
 cout<<"教师信息录入"<<endl;
 c.Inputteacherinformation();
 c.Showteacherinformation();
 cout<<"***************人员信息录入完毕***************"<<endl;
 cout<<"研究生信息录入"<<endl;
 d.Setsubject();
 cout<<endl<<"*****输入导师的信息*****";
 d.Setadviser();
 cout<<endl<<"*****助教信息输出*****"<<endl;
 d.Showsubject();
 cout<<endl<<"*****导师信息*****"<<endl;
 d.Showadviser();
cout<<"***************人员信息录入完毕***************"<<endl;
cout<<"助教信息录入"<<endl;
//e.Inputteacherinformation();
e.Setsubject();
cout<<endl<<"*****输入导师的信息*****";
e.Setadviser();
cout<<endl<<"*****助教信息输出*****"<<endl;
e.Showsubject();
cout<<endl<<"*****导师信息*****"<<endl;
e.Showadviser();
//e.Showteacherinformation();
cout<<"***************人员信息录入完毕***************"<<endl;

 //for(i=0;i<=0;i++)
 //{a1[i].Register();
 //a1[i].DisplayPeople();
 //cout<<"人数是："<<People::Gethowmany()<<endl;}
 //a2=new People;
 //a2->Register();
 //a2->DisplayPeople();
 //delete a2;
}
 
