// Problem#: 14159
// Submission#: 3639997
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
#include <string>
using namespace std;
string sort(string &s){
  for (int i = s.length() - 1; i >= 1; i--){
    char currentMax = s[0];
    int currentMaxIndex = 0;
    for (int j = 1; j <= i; j++){
      if (currentMax < s[j]){
        currentMax = s[j];
        currentMaxIndex = j;
      }
    }
    if (currentMaxIndex != i){
      s[currentMaxIndex] = s[i];
      s[i] = currentMax;
    }
  }
  return s;
}                                 
