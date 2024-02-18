#include<iostream>
using namespace std;
class rectangle{
private:
int X,Y;
public:
void set_value(int a,int b){
    X=a;Y=b;
}
void area(){
    cout<<"area of reactangle is"<<(X*Y)<<endl;
}




};
  int main(){
rectangle c1;
c1.set_value(44,22);
c1.area();


    return 0;
  }