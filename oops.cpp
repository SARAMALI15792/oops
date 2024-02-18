#include<iostream>
using namespace std;
class car{      //this is the class 
    public:   //access specifiers;
string  model;     //objects
int price;
int speed;
string color;
 car(string m,int s ,int p,string c){  //constructor
  model=m;
 color=c;    //methods
 price=p;  
 speed=s;

 }


};
int main(){

car honda=car ("h1",23,3002,"black");
cout<<honda.price;   //to acces the data of class we use .price/price or ......


    return 0;
}   

//program of class By SARAM.