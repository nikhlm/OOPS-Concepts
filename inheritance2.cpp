#include<iostream>
#include<string>
using namespace std;
class Company{
private:
string company_name;
string location;
public:
Company(string company_name,string location) {
this->company_name=company_name;
this->location=location;
cout<<"Name Of Company:"<<company_name<<endl;
cout<<"Location: "<<location<<endl;
}
};
class Team:public Company{
private:
string Team_name;
string Project;
public:
Team(string company_name, string location,
     string Team_name, string Project)
     : Company(company_name, location) {
this->Team_name=Team_name;
this->Project=Project;
cout<<"Name Of Team:"<<Team_name<<endl;
cout<<"Project Name: "<<Project<<endl;
}
};
class Developer:public Team{
private:
string developer_name;
string programming_language;
public:
Developer(string company_name, string location,
          string Team_name, string Project,
          string developer_name, string programming_language)
    : Team(company_name, location, Team_name, Project) {
this->developer_name=developer_name;
this->programming_language=programming_language;
cout<<"Name Of Developer:"<<developer_name<<endl;
cout<<"Language: "<<programming_language<<endl;
}
};
int main(){

    Developer Nikhil(
        "Microsoft",
        "Seattle",
        "Azure Team",
        "Cloud Project",
        "Nikhil",
        "C++"
    );
    return 0;
}