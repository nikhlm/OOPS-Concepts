//This program demonstrates operator overloading in C++. The '+' operator is overloaded to add two objects of class A. The result is a new object of class A that contains the sum of the 'v' values of the two objects.
#include<iostream>
using namespace std;
class A{
public:
int v;
A(int z){
v=z;
}
A operator+(const A& n){
return A(v+n.v);
}
};
int main(){
A obj1(3);
A obj2(5);
A sum=obj1+obj2;
cout<<sum.v;
return 0;
}