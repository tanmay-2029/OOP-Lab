#include <iostream>
using namespace std;

class addition{
public:
    int feet;
    int inches;

    void detail(){
        cout<<"Enter Feet - ";
        cin>>feet;
        cout<<"Enter Inches - ";
        cin>>inches;
    }
};

int main (){
    addition r1,r2;
    r1.detail();
    r2.detail();
    int ai,af;
    af=r1.feet+r2.feet;
    ai=r1.inches+r2.inches;
    cout<<"Total Inches = "<<ai<<"\nTotal Feet = "<<af<<endl;

    return 0;
}