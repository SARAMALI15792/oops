#include<iostream>
using namespace std;
class circle{

public:
int r;
void get_radius(){
    cout<<"entert the radius"<<endl;
    cin>>r;
}
void cal_area(){
    cout<<"araea of circle is "<<3.14*r*r<<endl;
}



};
int main(){
circle c1;
c1.get_radius();
c1.cal_area();

    return 0;
}