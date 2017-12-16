// Problem#: 14165
// Submission#: 3641755
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std; 
class Loan{
private:
    double annualInterestRate;
    int numberOfYears; 
    double loanAmount; 
public: 
    Loan(){ 
        annualInterestRate=9.5;
        numberOfYears=30;
        loanAmount=100000; 
    } 
    Loan(double annualInterestRate,int numberOfYears, double loanAmount){ 
        this->annualInterestRate=annualInterestRate;
        this->numberOfYears=numberOfYears;
        this->loanAmount=loanAmount; 
    } 
    double getAnnualInterestRate(){
        return annualInterestRate;
    }
    int getNumberOfYears(){
        return numberOfYears;
    }
    double getLoanAmount(){
        return loanAmount;
    }
    void setAnnualInterestRate(double annualInterestRate){
        this->annualInterestRate=annualInterestRate;
    }
    void setNumberOfYears(int numberOfYears){
        this->numberOfYears=numberOfYears;
    }
    void setLoanAmount(double loanAmount){
        this->loanAmount=loanAmount;
    }
    double getMonthlyPayment(){
    double monthlyInterestRate=annualInterestRate/1200;
        return loanAmount*monthlyInterestRate/(1-(pow(1/(1+monthlyInterestRate),numberOfYears*12)));
    }
    double getTotalPayment(){
        return getMonthlyPayment()*numberOfYears*12;
    }
    static double getMonthlyPayment(double annualInterestRate, int numberOfYears, double loanAmount){
        double monthlyInterestRate=annualInterestRate/1200;
        return loanAmount*monthlyInterestRate/(1-(pow(1/(1+monthlyInterestRate),numberOfYears*12)));
    }
    static double getTotalPayment(double annualInterestRate,int numberOfYears,double loanAmount){
        return getMonthlyPayment(annualInterestRate,numberOfYears,loanAmount)*numberOfYears*12;
    }
};                                 
