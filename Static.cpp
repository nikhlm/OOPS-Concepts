#include<iostream>
using namespace std;
class Employee{
int id;
static int count;
public:
void Set_data(){
cout<<"Enter the ID of the Employee: "<<endl;
cin>>id;
count++;
}
void get_data(){
cout<<"The Id Of the Employee "<<id<<"And the Serial umber of the employee is:"<<count<<endl;
}

};
int Employee :: count;
int main(){
Employee harry,rohan,sham;
harry.Set_data();
harry.get_data();

rohan.Set_data();
rohan.get_data();

sham.Set_data();
sham.get_data();

return 0;
}