#include <iostream>
using namespace std;

class vehicle{
protected:
    string regno;
    int days;

public:
    vehicle(string r,int d){
        regno=r;
        days=d;
    }
};

class car:public vehicle{
protected:
    float rate;

public:
    car(string r,int d,float x):vehicle(r,d){
        rate=x;
    }
};

class luxurycar:public car{
    float charge;

public:
    luxurycar(string r,int d,float x,float c):car(r,d,x){
        charge=c;
    }

    void display(){
        cout<<"totalcost : "<<(rate+charge)*days<<endl;
    }
};

int main(){
    luxurycar c("OD02AB1234",5,3000,1000);
    c.display();
}