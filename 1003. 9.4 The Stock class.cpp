// Problem#: 13990
// Submission#: 3607358
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
#include<cstdio>
using namespace std;
class Stock{
private:
  string symbol;
  string name;
  double previousClosingPrice;
  double currentPrice;
public:
  Stock(string symbol, string name){
    this->symbol = symbol;
    this->name = name;
  }
  string getSymbol(){
    return symbol;
  }
  string getName(){
    return name;
  }
  double getPreviousClosingPrice(){
    return previousClosingPrice;
  }
  double getCurrentPrice(){
    return currentPrice;
  }
  void setSymbol(string symbol){
    this->symbol = symbol;
  }
  void setName(string name){
    this->name = name;
  }
  void setPreviousClosingPrice(double price){
    this->previousClosingPrice = price;
  }
  void setCurrentPrice(double price){
    this->currentPrice = price;
  }
  double changePercent(){
    return (currentPrice - previousClosingPrice) / previousClosingPrice;
  }
};                                 
