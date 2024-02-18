#include<iostream>
using namespace std;
class table{
public:
int number ,multiplier;
void ask_num(){
    cout<<"enter the number:"<<endl;
    cin>>number;
}
int  show_table(){
    for(int multiplier=1;multiplier<=number;multiplier++){
        cout<<number<<"*"<<multiplier<<"="<<number*multiplier<<endl;
    }
    return number;
}


};
int main(){

table t1;
t1.ask_num();
t1.show_table();

    return 0;
}