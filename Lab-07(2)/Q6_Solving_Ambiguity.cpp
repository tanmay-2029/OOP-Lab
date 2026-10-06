#include <iostream>
using namespace std;

class internalexam{
public:
    void display(){
        cout<<"internal marks : 40"<<endl;
    }
};

class externalexam{
public:
    void display(){
        cout<<"external marks : 45"<<endl;
    }
};

class finalresult:public internalexam,public externalexam{
public:
    void show(){
        internalexam::display();
        externalexam::display();
    }
};

int main(){
    finalresult f;
    f.show();
}