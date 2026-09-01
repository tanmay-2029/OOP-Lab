#include <iostream>
using namespace std;

int main(){
    float balance=1000;
    float add,deduct;
    float *p=&balance;

    cout<<"balance before : "<<*p<<endl;

    cout<<"enter amount to add : ";
    cin>>add;
    *p=*p+add;

    cout<<"enter amount to deduct : ";
    cin>>deduct;
    *p=*p-deduct;

    cout<<"final balance : "<<*p<<endl;

    return 0;
}