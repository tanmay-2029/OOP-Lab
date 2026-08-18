#include <iostream>
using namespace std;

class parking{
    private:
    int slot;
    string vno;
    bool occupied;

    public:
    void enter(){
        cout<<"Slot Number : ";
        cin>>slot;
        cout<<"Is Occupied (1 for Yes, 0 for No) : ";
        cin>>occupied;
        if(occupied){
            cout<<"Vehicle Number : ";
            cin>>vno;
        }
    }

    void check(){
        cout<<"Slot Number : "<<slot<<endl;
        if(occupied){
            cout<<"Status : Occupied"<<endl;
            cout<<"Vehicle Number : "<<vno<<endl;
        } else {
            cout<<"Status : Available"<<endl;
        }
    }
};

int main(){
    parking p;
    p.enter();
    p.check();
    return 0;
}