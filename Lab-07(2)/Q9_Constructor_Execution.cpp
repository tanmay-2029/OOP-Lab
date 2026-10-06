#include <iostream>
using namespace std;

class person{
public:
    person(){
        cout<<"person constructor"<<endl;
    }
};

class employee:public person{
public:
    employee(){
        cout<<"employee constructor"<<endl;
    }
};

class manager:public employee{
public:
    manager(){
        cout<<"manager constructor"<<endl;
    }
};

int main(){
    manager m;
}