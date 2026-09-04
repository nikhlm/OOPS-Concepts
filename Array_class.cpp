#include<iostream>
#include<string>
using namespace std;
class Cricketer{
private:
string name;
int age;
int testmatches;
int averagescore;
public:
void setname(string name){
this->name=name;
}
void setage(int age){
this->age=age;
}
void settestmatches(int testmatches){
this->testmatches=testmatches;
}
void setaveragescore(int averagescore){
this->averagescore=averagescore;
}
string getname(){
return name;
}
int getage(){
return age;
}
int gettestmatches(){
return testmatches;
}
int getaveragescore(){
return averagescore;
}
};
int main() {
Cricketer cricketers[20];
for(int i=0;i<4;i++){
string n;
int a;
int m;
int avg;
cin>>n>>a>>m>>avg;
cricketers[i].setname(n);
cricketers[i].setage(a);
cricketers[i].settestmatches(m);
cricketers[i].setaveragescore(avg);
}
for(int i=0;i<4;i++){
cout<<endl;
cout<<cricketers[i].getname();
cout<<endl;
cout<<cricketers[i].getage();
cout<<endl;
cout<<cricketers[i].gettestmatches();
cout<<endl;
cout<<cricketers[i].getaveragescore();
cout<<endl;
}
return 0;
}
