#include <iostream>
using namespace std;

class ElectricityBill{
public:
    int num;
    string name;
    int unit;
    int r;

    void rate(){
        if(unit>200) r=(unit-200)*10 + (100)*12;
        else if(unit>100) r=(unit-100)*7+100*5;
        else r=unit*5;
        cout<<"Rate = "<<r<<endl;
    }

    void detail(){
        cout<<"Enter Name - ";
        getline(cin,name);
        cout<<"Enter Number - ";
        cin>>num;
        cout<<"Enter Units Consumed - ";
        cin>>unit;
    }
};

int main (){
    ElectricityBill r;
    r.detail();
    r.rate();
    return 0;
}