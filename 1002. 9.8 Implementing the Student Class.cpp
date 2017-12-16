// Problem#: 13994
// Submission#: 3611262
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
Student::Student(){
      id = 0;
      strcpy(name,"No Name" );
      age = 0;
    
  }
  Student::Student(int id, char* name=(char*)"No Name", int age=0){
    this->id=id;
    strcpy(this->name, name);
    this->age=age;
  }
   void Student::set(int id, char*name , int age){
    this->id=id;
    strcpy(this->name, name);
    this->age=age;
   }
  void Student::print(){
    cout<<name<<" ("<<id<<") "<<"is "<<age <<" years old."<<"\n";
  }                                 
