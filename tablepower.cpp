#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
for(int i=1;i<=n;i++){
    int powof2=1;
    for(int j=0;j<i;j++){
        powof2=powof2*2;
    }
cout<<"2^"<<i<<"="<<powof2<<endl;

}

    return 0;
}