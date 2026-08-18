#include <iostream>
using namespace std;

class door{
    private:
    int dno;
    bool locked;

    public:
    void enter(){
        cout<<"Door Number : ";
        cin>>dno;
        cout<<"Lock Status (1 for Locked, 0 for Unlocked) : ";
        cin>>locked;
    }

    friend class security;
};

class security{
    public:
    void checkstatus(door d){
        cout<<"Door Number : "<<d.dno<<endl;
        if(d.locked){
            cout<<"Status - Locked"<<endl;
        } else {
            cout<<"Status - Unlocked"<<endl;
        }
    }
};

int main(){
    door d;
    security s;
    d.enter();
    s.checkstatus(d);
    return 0;
}