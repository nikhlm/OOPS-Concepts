#include<iostream>
using namespace std;
class Employee{
int id;
static int count;
public:
void Set_data(void){
cout<<"Enter the id of the employee "<<endl;
cin>>id;
count ++;
}
void get_data(void){
cout<<"The id of the employee number "<<count<<" is "<<id<<endl;
}
static void get_number(void){
cout<<"The value of the count is "<<count<<endl;
}
};
int Employee:: count;


int main(){
Employee harry,munish;
harry.Set_data();
harry.get_data();
Employee:: get_number();

munish.Set_data();
munish.get_data();
Employee:: get_number();

return 0;
}