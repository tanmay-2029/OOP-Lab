#include <iostream>
using namespace std;

class trainseat{
    private:
    int seatno;
    string name;
    bool booked;

    public:
    void enter(){
        cout<<"Seat Number : ";
        cin>>seatno;
        cout<<"Is Booked (1 for Yes, 0 for No) : ";
        cin>>booked;
        if(booked){
            cout<<"Passenger Name : ";
            cin>>name;
        }
    }
    friend class checker;
};

class checker{
    public:
    void display(trainseat t){
        cout<<"Seat Number : "<<t.seatno<<endl;
        if(t.booked){
            cout<<"Status : Booked"<<endl;
            cout<<"Passenger Name : "<<t.name<<endl;
        } else {
            cout<<"Status : Available"<<endl;
        }
    }
    void status(trainseat t){
        if(t.booked){
            cout<<"Seat is Booked"<<endl;
        } else {
            cout<<"Seat is Available"<<endl;
        }
    }
    void details(trainseat t){
        if(t.booked){
            cout<<"Passenger Name : "<<t.name<<endl;
        } else {
            cout<<"No passenger booked for this seat"<<endl;
        }
    }
};

int main(){
    trainseat t;
    checker c;
    t.enter();
    c.display(t);
    c.status(t);
    c.details(t);
    return 0;
}