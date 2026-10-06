#include <iostream>
using namespace std;

class employee{
protected:
    string name;
    float salary;

public:
    employee(string n,float s){
        name=n;
        salary=s;
    }
};

class developer:public employee{
protected:
    int exp;

public:
    developer(string n,float s,int e):employee(n,s){
        exp=e;
    }
};

class seniordeveloper:public developer{
    float bonus;

public:
    seniordeveloper(string n,float s,int e,float b):developer(n,s,e){
        bonus=b;
    }

    void display(){
        float eb=0.05*salary*exp;
        cout<<"name : "<<name<<endl;
        cout<<"final salary : "<<salary+eb+bonus<<endl;
    }
};

int main(){
    seniordeveloper s("tanmay",50000,3,10000);
    s.display();
}