#include <iostream>
using namespace std;

class bankaccount{
protected:
    int accno;
    float balance;

public:
    bankaccount(int a,float b){
        accno=a;
        balance=b;
    }
};

class savingsaccount:public bankaccount{
public:
    savingsaccount(int a,float b):bankaccount(a,b){}

    void display(){
        cout<<"savingsbalance : "<<balance+balance*5/100<<endl;
    }
};

class currentaccount:public bankaccount{
public:
    currentaccount(int a,float b):bankaccount(a,b){}

    void display(){
        if(balance<10000)
            balance-=500;

        cout<<"currentbalance : "<<balance<<endl;
    }
};

int main(){
    savingsaccount s(101,50000);
    currentaccount c(102,8000);

    s.display();
    c.display();
}