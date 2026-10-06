#include <iostream>
using namespace std;

class employee{
protected:
    int id;
    string name;

public:
    employee(int i,string n){
        id=i;
        name=n;
    }
};

class developer:virtual public employee{
protected:
    string language;

public:
    developer(int i,string n,string l):employee(i,n){
        language=l;
    }
};

class tester:virtual public employee{
protected:
    string tool;

public:
    tester(int i,string n,string t):employee(i,n){
        tool=t;
    }
};

class techlead:public developer,public tester{
public:
    techlead(int i,string n,string l,string t)
    :employee(i,n),developer(i,n,l),tester(i,n,t){}

    void display(){
        cout<<"id : "<<id<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"language : "<<language<<endl;
        cout<<"tool : "<<tool<<endl;
    }
};

int main(){
    techlead t(101,"tanmay","c++","selenium");
    t.display();
}