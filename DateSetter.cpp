#include<iostream>
#include<string>
using namespace std;
class Date{
private :
int date;
int month;
int year;
static char slash;
void setdate(int date){
if(date>31){
this->date=31;
}
else{
this->date=date;
}
}
void setmonth(int month){
if(month>12){
this->month=12;
}
else{
this->month=month;
}
}
void setyear(int year){
this->year=year;
}
public:
void setdate(int d,int m,int y){
setmonth(m);
setdate(d);
setyear(y);
}
void showdate() {
cout<<date<<slash<<month<<slash<<year<<endl;
}
};
char Date::slash='/';
int main(){
Date date1,date2;
date1.setdate(02,12,2026);
date1.showdate();
date2.setdate(46,45,2025);
date2.showdate();
return 0;
}