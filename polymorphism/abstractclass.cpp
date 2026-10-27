#include<iostream>
using namespace std;
class vehicle{
public:
virtual void start()=0;
};
class car:public vehicle{
public:
void start() override{
cout<<"The car starts with a key"<<endl;
}
};
class bike:public vehicle{
public:
void start() override{
cout<<"The bike starts with a key"<<endl;
}
};
int main(){
car m;
bike n;
n.start();
m.start();
return 0;
}