#include<iostream>
using namespace std;
class product{
public:
int a ,b,c;
 void set_product(int m,int n){
    a=m;
    b=n;
}
int multiply(){
    c=a*b;
    return c;
}


};
int main(){
product p1;
p1.set_product(2,2);
int result=p1.multiply();
cout<<"mutlple of number is "<<result<<endl;

    return 0;
}