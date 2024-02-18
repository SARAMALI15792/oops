#include<iostream>
using namespace std;
class car{      //this is the class 
    public:   //access specifiers;
string  model;     //objects
int price;
float speed;
string color;
 car(string m,int s ,float p,string c){  //constructor
  model=m;
 color=c;    //methods
 price=p;  
 speed=s;

 }
 void car_run(float distance){
    cout<<model<<"will take"<<distance/speed<<"to cover in hours"<<endl;
 }


};
int main(){

car honda=car ("h1",23,3002,"black");
honda.car_run(67);  //to acces the data of class we use .price/price or ......


    return 0;
}   

//program of class By SARAM.