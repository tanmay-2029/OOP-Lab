#include <iostream>
using namespace std;

class account{
public:
    int accno;
    string name;
    int balance;
    int draw,dep;

    void withdraw(){
        cout<<"Enter Amount to Withdraw - ";
        cin>>draw;
        if (draw>balance) cout<<"Amount exceeds balance, process unsuccessfull. "<<endl;
        else balance-=draw;
        cout<<"Balance = "<<balance<<endl;
    }

    void deposit(){
        cout<<"Enter amount to deposite - ";
        cin>>dep;
        balance+=dep;
        cout<<"Balance = "<<balance<<endl;
    }

    void detail(){
        cout<<"Enter Account Number - ";
        cin>>accno;
        cout<<"Enter Name - ";
        cin>>name;
        cout<<"Enter Balance - ";
        cin>>balance;
    }
};

int main (){
    account b;
    b.detail();
    b.deposit();
    b.withdraw();

    return 0;
}