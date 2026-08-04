#include <iostream>
using namespace std;

class employee{
public:
    string id;
    string name;
    int bsalary;
    float h,d,g;

    void hra(){
        h=(0.2)*bsalary;
        cout<<"HRA = "<<h<<endl;
    }

    void DA(){
        d=(0.1)*bsalary;
        cout<<"DA = "<<d<<endl;
    }
    void GS(){
        g=bsalary*(1+0.1+0.2);
        cout<<"Gross Salary = "<<g<<endl;
    }
    void detail(){
        cout<<"Enter ID - ";
        cin>>id;
        cout<<"Enter Name - ";
        cin>>name;
        cout<<"Enter Basic Salary - ";
        cin>>bsalary;
    }
};

int main (){
    employee r;
    r.detail();
    r.DA();
    r.GS();
    r.hra();
    r.detail();

    return 0;
}