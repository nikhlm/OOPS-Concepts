#include<iostream>
using namespace std;
class shopping_complex{
int Item_ID[100];
int Item_Price[100];
int count;
public:
void counter(void){ count=0;}
void set_price(void);
void display_price(void);
};
void shopping_complex :: set_price(void){
cout<<"Enter the Id of the "<< count+1<<endl;
cin>>Item_ID[count];
cout<<"Enter the price of the item: "<<endl;
cin>>Item_Price[count];
count++;
}
void shopping_complex :: display_price(void){
for(int i=0;i<count;i++){
cout<<"The Price of item with Item Id "<<Item_ID[i]<<"is :"<<Item_Price[i]<<endl;
}
}

int main(){
shopping_complex Realiance;
Realiance.counter();
Realiance.set_price();
Realiance.set_price();
Realiance.set_price();
Realiance.display_price();


return 0;
}