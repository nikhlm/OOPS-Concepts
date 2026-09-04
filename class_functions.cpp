#include<iostream>
#include<string>
using namespace std;
class player{
private:
int health;
int score;
int age;
bool isalive;
public:
void setscore(int score){
this->score=score;
}
void sethealth(int health){
this->health=health;
}
void setage(int age){
this->age=age;
}
void setsisalive(bool isalive){
this->isalive=isalive;
}
int getage(){
return age;
}
int gethealth(){
return health;
}
int getscore(){
return score;
}
int getisalive(){
return isalive;
}
};
void add(player a,player b){
cout<<(a.getscore()+b.getscore());
}
player getmaxscore(player a,player b){
if(a.getscore()>b.getscore()){
return a;
}
else return b;
}
int main(){
player harsh;
harsh.setscore(200);
harsh.setage(20);
harsh.sethealth(300);
harsh.setsisalive(true);
player sunil;
sunil.setscore(500);
sunil.setage(40);
sunil.sethealth(900);
sunil.setsisalive(true);
cout<<sunil.getscore()<<endl;
add(sunil,harsh);
cout<<endl;
player saket=getmaxscore(harsh,sunil);
cout<<saket.getscore()<<endl;

return 0;
}