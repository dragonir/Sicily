// Problem#: 14161
// Submission#: 3640428
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
#include <fstream>
#include<iomanip>
#include<cstdio>
#include<cstring>
#include<string>
#include<cctype>
#include<cmath>
#include<sstream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
class MyInteger{
private:
  int value;
public:
  int getValue()const{
    return value;
  }
  MyInteger(int value){
    this->value = value;
  }
  bool isPrime() const{
    return isPrime(value);
  }
  static bool isPrime(const MyInteger& o){
    return isPrime(o.getValue());
  }
  static bool isPrime(int num){
        if ((num == 1) || (num == 2)){
          return true;
        }
        for (int i = 2; i <= num / 2; i++){
          if (num % i == 0) return false;
        }
        return true;
  }
  bool isEven() const{
    return isEven(value);
  }
  static bool isEven(int n){
    return n % 2 == 0;
  }
  static bool isEven(const MyInteger& n){
    return isEven(n.getValue());
  }
  bool isOdd() const{
    return isOdd(value);
  }
  static bool isOdd(int n){
    return n % 2 == 1;
  }
  static bool isOdd(const MyInteger& n){
    return isOdd(n.getValue());
  }
  bool equals(int anotherNum) const{
    return value == anotherNum;
  }
  bool equals(const MyInteger& o) const{
    return value == o.getValue();
  }
  static int parseInt(string& str){
     stringstream stream(str);
    cout<<stream.str()<<endl;
      
  }
};                                 
