#include <iostream>
using namespace std;

class mobile{
    private:
    string name;
    int model;
    int percent;

    public:

    void enter(){
        cout<<"Brand : ";
        cin>>name;
        cout<<"Enter Model No. : ";
        cin>>model;
        cout<<"Battery Percentage  : ";
        cin>>percent;
    }

    void check(){
        if (percent<20) cout<<"Battery Low"<<endl;
        else cout<<"Battery Normal"<<endl;
    }

    void display(){
        cout<<"Brand : "<<name<<endl;
        cout<<"Model : "<<model<<endl;
        cout<<"Battery : "<<percent<<endl;
    }
};

int main (){
    mobile d;
    d.enter();
    d.display();
    d.check();
    return 0;
}