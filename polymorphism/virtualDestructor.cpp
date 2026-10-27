#include<iostream>
using namespace std;
class A{
public:
virtual void show(int x=10){
cout<<x<<endl;
}
virtual ~A(){
cout<<"A is destroyed"<<endl;
}
};
class B:public A{
public:
void show(int x=20) override {
cout<<x<<endl;
}
~B() override{
cout<<"B is destroyed"<<endl;
}
};
int main(){
B obj;
A* ptr=&obj;
ptr->show();
delete ptr;
return 0;
}