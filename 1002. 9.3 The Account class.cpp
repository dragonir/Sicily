// Problem#: 13989
// Submission#: 3607357
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
#include<cmath>
using namespace std;
class Account{
 private: 
 int id;
 double balance;
 double annualInterestRate;
 public :
 Account(){
  id = 0;
  balance = 0;
  annualInterestRate = 0;
 }
Account(int id, double balance){
  this->id = id;
  this->balance = balance;
 }
int getId(){
  return this->id;
 }
void setId(int id){
  this->id = id;
 }
double getBalance(){
  return this->balance;
 }
void setBalance(double balance){
    this->balance = balance;
 }
double getAnnualInterestRate(){
  return this->annualInterestRate;
 }    
void setAnnualInterestRate(double annualInterestRate){
    this->annualInterestRate = annualInterestRate;
 }
double getMonthlyInterestRate(){
  return this->annualInterestRate/12;
 }
double withdraw(double amount){
  return balance-amount;
 }
double deposit(double amount){
  return balance+amount;
 }
};                                 
