/*class Complex
{
public:
    Complex(): real(0), imag(0) {}
    Complex(int a, int b): real(a), imag(b) {}
    int getReal() const { return real; }
    int getImag() const { return imag; }
private:
    int real;
    int imag;
};*/

#include <iostream>

using namespace std;

class Complex{
public:
   Complex(){real=0;imag=0;}                        
   Complex(int a,int b){real=a;imag=b;} 
   int getReal() const { return real; }
   int getImag() const { return imag; }      
   Complex operator+(Complex &c2);                   
   Complex operator-(Complex &c2);
   Complex operator+=(Complex &c2);
   Complex operator-=(Complex &c2);
   friend istream& operator >> (istream&input,  Complex&c1);
   friend ostream& operator << (ostream&output, Complex&c1); 
   friend Complex operator* (const Complex &c1, const Complex &c2); 
   void display();
private:
   int real;                                    
   int imag;                                     
};
Complex Complex ::operator* (const Complex &c1, const Complex &c2)    
{    
    Complex c;    
    
    c.real = c1.real*c2.real - c1.imag*c2.imag;    
    c.imag = c1.real*c2.imag + c1.imag*c2.real;    
    
    return c;    
}  

Complex Complex ::operator+(Complex &c2){            
    Complex c;
    c.real=real+c2.real;
    c.imag=imag+c2.imag;
    return c;
}
Complex Complex ::operator-(Complex &c2)          
{
    Complex c;
    c.real=real-c2.real;
    c.imag=imag-c2.imag;
    return c;
}
Complex Complex ::operator+=(Complex &c2)          
{
    Complex c;
    c.real=real+=c2.real;
    c.imag=imag+=c2.imag;
    return c;
}
Complex Complex ::operator-=(Complex &c2)          
{
    Complex c;
    c.real=real-=c2.real;
    c.imag=imag-=c2.imag;
    return c;
}
void Complex::display()
{
    cout <<"("<<real<<","<<imag<<"i)"<<endl;
}
int main()
{
  Complex c1(3,4),c2(5,-10),c3;              
    cout<<"c1=";
    c1.display();
    cout<<"c2=";
    c2.display();
    c3=c1+c2;
    cout<<"c1+c2=";
    c3.display();
    c3=c1-c2;
    cout<<"c1-c2=";
    c3.display();
    c3=c1+=c2;
    cout<<"c1+=c2=";
    c3.display();
    c3=c1-=c2;
    cout<<"c1-=c2=";
    c3.display();
    return 0;
}

