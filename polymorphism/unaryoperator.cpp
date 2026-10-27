#include<iostream>
using namespace std;
class Complex{
public:
int real;
int imag;
Complex(int r,int i){
real=r;
imag=i;
}
Complex operator-(){
return Complex(-real,-imag);
}
void display(){
cout<<real<<"+"<<imag<<"i\n";
}
};
int main(){
Complex A(20,-30);
Complex B= -A;
B.display();
    
}