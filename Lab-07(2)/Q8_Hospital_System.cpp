#include <iostream>
using namespace std;

class patient{
protected:
    string name;
    int id,age;

public:
    patient(string n,int i,int a){
        name=n;
        id=i;
        age=a;
    }
};

class inpatient:public patient{
    float charge;
    int days;

public:
    inpatient(string n,int i,int a,float c,int d):patient(n,i,a){
        charge=c;
        days=d;
    }

    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"id : "<<id<<endl;
        cout<<"bill : "<<charge*days<<endl;
    }
};

int main(){
    inpatient p("rahul",101,20,2500,4);
    p.display();
}