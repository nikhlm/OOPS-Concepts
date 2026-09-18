#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Donor{
private :
string name;
double amount;
public :
void set_details(string name,double amount){
this->name=name;
this->amount=amount;
}
void display(){
cout<<"Name Of The Donor Is: "<<name<<endl;
cout<<fixed<<setprecision(2)<<"The Amount of Balance Left: "<<amount<<endl;
}
double get_balance(){
return amount;
}
void update_balance(double amount) {
        this->amount -= amount;
    }
};
class Recipient{
private:
string name;
double balance;
double amount;
public:
void set_details(string name, double balance, double amount){
this->name=name;
this->balance=balance;
this->amount=amount;
}
void display(){
cout<<"Name Of The Donor Is:"<<name<<endl;
cout<<fixed<<setprecision(2)<<"The Amount of Balance Left: "<<balance<<endl;
cout<<fixed<<setprecision(2)<<"The Amount of Money Required: "<<amount<<endl;
}
double get_balance(){
return balance;
}
 void update_balance(double amount) {
        this->balance += amount;
    }
};
void transfer(Donor &donor, Recipient &recipient, double amount) {
    if (donor.get_balance() >= amount) {
        donor.update_balance(amount);
        recipient.update_balance(amount);

        cout << "Donation transferred successfully." << endl;
    }
    else {
        cout << "Insufficient balance in donor account." << endl;
    }
}
int main(){
Donor Nikhil;
Recipient Rohit;
Nikhil.set_details("Nikhil",2000.30);
Rohit.set_details("Rohit",0,2100);
Nikhil.display();
Rohit.display();
transfer(Nikhil, Rohit, 1000);
return 0;
}
