#include <iostream>   
  
using namespace std;  
  
class Complex  
{  
public:  
    Complex(){real = 0; imag = 0;}  
    Complex(int a, int b){real = a; imag = b;}  

    friend istream& operator >> (istream&input,  Complex&c1);
	friend ostream& operator << (ostream&output, Complex&c1);
    friend Complex operator+ (Complex &c1, Complex &c2);  
    friend Complex operator- (Complex &c1, Complex &c2);  
    friend Complex operator* (Complex &c1, Complex &c2);  
    friend Complex operator/ (Complex &c1, Complex &c2);  
    friend Complex operator+ (Complex &c1, const int &d); 
    friend Complex operator- (Complex &c1, const int &d);  
    friend Complex operator* (Complex &c1, const int &d);  
    friend Complex operator/ (Complex &c1, const int &d);  
    friend Complex operator+ (const int &d,Complex &c1);  
    friend Complex operator- (const int &d,Complex &c1);  
    friend Complex operator* (const int &d,Complex &c1);  
    friend Complex operator/ (const int &d,Complex &c1);  
    friend Complex operator- (Complex &c1);  
     
private:  
    int real;  
    int imag;  
};    
//下面定义友元函数   

istream& operator >> (istream& input, Complex& c)
{
	char c1;  
    input >> c.real >> c.imag >> c1;  
    return input;  
}
ostream& operator << (ostream& output,Complex& c)
{
	output<<c.real;
	if(c.imag>=0) output<<"+";
	output << c.imag<<endl;
	return output;
}
Complex operator+ (Complex &c1, Complex &c2)  
{  
    return Complex(c1.real + c2.real, c1.imag + c2.imag);  
} 
Complex operator- (Complex &c1, Complex &c2)  
{  
    return Complex(c1.real - c2.real, c1.imag - c2.imag);  
}  
Complex operator* (Complex &c1, Complex &c2)  
{  
    Complex c;  
  
    c.real = c1.real*c2.real - c1.imag*c2.imag;  
    c.imag = c1.real*c2.imag + c1.imag*c2.real;  
  
    return c;  
}  
Complex operator/ (Complex &c1, Complex &c2)  
{  
    Complex c;  
  
    c.real = (c1.real*c2.real + c1.imag*c2.imag)/(c2.real*c2.real + c2.imag*c2.imag);  
    c.imag = (-c1.real*c2.imag + c1.imag*c2.real)/(c2.real*c2.real + c2.imag*c2.imag);  
  
    return c;  
}  
  
Complex operator+ (Complex &c1, const int &d)  
{  
    Complex c;  
    c.real = c1.real+d;  
    c.imag = c1.imag;  
    return c;  
  
}  

Complex operator+ (const int &d, Complex &c1)  
{  
    Complex c;  
    c.real = d+c1.real;  
    c.imag = c1.imag;  
    return c;  
}  
Complex operator- (Complex &c1, const int &d)  
{  
    Complex c;  
    c.real = c1.real-d;  
    c.imag = c1.imag;  
    return c;  
  
}  
Complex operator- ( const int &d, Complex &c1)  
{  
    Complex c;  
    c.real = d - c1.real;  
    c.imag = - c1.imag;  
    return c;  
  
}  
Complex operator* (Complex &c1, const int &d)  
{  
    Complex c;  
  
    c.real = c1.real*d;  
    c.imag = c1.imag*d;  
  
    return c;  
}  
Complex operator* ( const int &d, Complex &c1)  
{  
    Complex c;  
  
    c.real = d*c1.real;  
    c.imag = d*c1.imag;  
  
    return c;  
}  
Complex operator/ (Complex &c1, const int &d)  
{  
    Complex c;  
  
    c.real = c1.real/d;  
    c.imag = c1.imag/d;  
  
    return c;  
}  
Complex operator/ ( const int &d, Complex &c1)  
{  
    Complex c;  
  
    c.real = d/c1.real;  
    c.imag = d/c1.imag;  
  
    return c;  
}  
Complex operator- (Complex &c1)  
{  
    Complex c;  
    c.real = -c1.real;  
    c.imag = -c1.imag;  
  
    return c;  
}  
  
  
  
int main()  
{   
	double s = 2.5;
    Complex c1, c2, c3;  
	cin>>c1;
    cout << "请再输入一个复数：" << endl; 
	cin>>c2;
    cout<<"c1="<<c1;   
    cout<<"c2="<<c2;  
    
    c3 = c1 + c2;  
    cout<<"c1+c2="; 
	cout << c3;
  
    c3 = c1 - c2;  
    cout<<"c1-c2=";  
    cout << c3;
  
    c3 = c1 * c2;  
    cout<<"c1*c2=";  
    cout << c3; 
  
    c3 = c1 / c2;  
    cout<<"c1/c2=";  
    cout << c3;  
  
    c3= c1 + s;  
    cout<<"c1 + s=";  
    cout << c3; 
  
    c3= c1 - s;  
    cout<<"c1 - s=";  
    cout << c3;  
  
    c3= c1 * s;  
  
    cout<<"c1 * s=";  
    cout << c3;  
  
    c3= c1 / s;  
    cout<<"c1 / s=";  
    cout << c3;   
  
    c3= s + c1;  
    cout<<" s+c1 =";  
    cout << c3; 
  
    c3= s - c1 ;  
    cout<<" s-c1 =";  
    cout << c3; 
  
    c3 = s * c1 ;  
    cout<<" s*c1 =";  
    cout << c3;  
  
    c3 = s /c1  ;  
    cout<<" s/c1 =";  
    cout << c3; 
  
    c3= -c1;  
    cout<<"-c1=";  
    cout << c3;  
  
    system("pause");  
    return 0;  
}  

