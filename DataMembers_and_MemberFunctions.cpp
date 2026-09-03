#include<iostream>
#include<string>
using namespace std;
class book{
public:
char name;
float price;
int numberofpages;
public:

int countBooks(int p){
if(price<p)
return 1;
else 
return 0;
}
bool isbookpresent(char h){
if(name==h)
return true;
else return false;
}
};
int main(){
book harrypotter;
harrypotter.name='h';
harrypotter.price=1000;
cout<<harrypotter.isbookpresent('c');

}

