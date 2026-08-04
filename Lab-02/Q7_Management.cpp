#include <iostream>
using namespace std;

class management{
public:
    string ID;
    string name;
    int qa;
    int price;
    int totalval;
    int sold;

    void inventory(){
        totalval=price*qa;
        cout<<"Inventory Value = "<<totalval<<endl;
    }

    void sell(){
        cout<<"Enter Units Sold = ";
        cin>>sold;
        if (sold>qa) cout<<"Quantity Exceeds the quantity available in inventory!"<<endl;
        else qa-=sold;
    }

    void detail(){
        cout<<"Enter ID - ";
        cin>>ID;
        cout<<"Enter Name - ";
        cin>>name;
        cout<<"Enter Quantity - ";
        cin>>qa;
        cout<<"Enter Price - ";
        cin>>price;
    }
};

int main (){
    management r;
    r.detail();
    r.inventory();
    r.sell();
    r.inventory();

    return 0;
}