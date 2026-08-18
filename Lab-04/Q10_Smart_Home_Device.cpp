#include <iostream>
using namespace std;

class smartdevice{
    private:
    string name;
    string type;
    bool power;

    public:
    void enter(){
        cout<<"Device Name : ";
        cin>>name;
        cout<<"Device Type : ";
        cin>>type;
        cout<<"Power Status (1 for ON, 0 for OFF) : ";
        cin>>power;
    }
    friend class controller;
};

class controller{
    public:
    void display(smartdevice s){
        cout<<"Device Name : "<<s.name<<endl;
        cout<<"Device Type : "<<s.type<<endl;
        status(s);
    }
    void turnon(smartdevice &s){
        s.power = true;
        cout<<"Device turned ON"<<endl;
    }
    void turnoff(smartdevice &s){
        s.power = false;
        cout<<"Device turned OFF"<<endl;
    }
    void status(smartdevice s){
        if(s.power){
            cout<<"Power Status : ON"<<endl;
        } else {
            cout<<"Power Status : OFF"<<endl;
        }
    }
};

int main(){
    smartdevice s;
    controller h;
    s.enter();
    h.display(s);
    h.turnon(s);
    h.status(s);
    h.turnoff(s);
    h.status(s);
    return 0;
}