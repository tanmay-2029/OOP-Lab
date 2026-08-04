#include <iostream>
using namespace std;

class calculator{
public:
    int f,s;         //first and second number
    int a,s,d,m;     //add,subtract,divide,multiply short form

    void add(){  //addition
        a=f+s;
        cout<<a<<endl;
    }
    void sub(){     //subtract
        s=f-s;
        cout<<s<<endl;
    }
    void div(){  //divide
        d=f/s;
        cout<<d<<endl;
    }
    void mul(){   //multiply
        m=f*s;
        cout<<m<<endl;
    } 
    void detail(){
        cout<<"Enter First and Second Number - ";
        cin>>f>>s;
    }

};

int main (){
    calculator c;
    c.detail();
    switch

    return 0;
}