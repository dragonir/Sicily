// Problem#: 13995
// Submission#: 3611250
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
Student::Student(){
     id = 0;
     strcpy(name,"No Name");
     age = 0;
  }
Student::Student(int id, char* name=(char*)"No Name", int age=0){
    this->id=id;
    strcpy(this->name, name);
    this->age=age;
  }

   void set(Student &std,int id, char* name , int age){
    std.id=id;
    strcpy(std.name, name);
    std.age=age;
   }
  void print(Student std){
    cout<<std.name<<" ("<<std.id<<") "<<"is "<<std.age <<" years old."<<"\n";
  }                                 
