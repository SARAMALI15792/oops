#include<iostream>
using namespace std;
class date{

public:
int Date;
int month;
int year;
void set_date(int ndate,int nmonth,int nyear){
Date=ndate;
month=nmonth;
year=nyear;
}

void show_date(){
cout<<"today date is"<<Date<<endl;
cout<<"today month is:"<<month<<endl;
cout<<"today year is:"<<year<<endl;


}


};
int main(){
date d1;
d1.set_date(19,2,2024);
d1.show_date();
    return 0;
}