#include <iostream>
using namespace std;

class foodorder{
    private:
    int id;
    string item;
    int qty;
    float price;

    public:
    void enter(){
        cout<<"Order ID : ";
        cin>>id;
        cout<<"Food Item : ";
        cin>>item;
        cout<<"Quantity : ";
        cin>>qty;
        cout<<"Price : ";
        cin>>price;
    }

    friend void bill(foodorder f);
};

void bill(foodorder f){
    float total = f.qty*f.price;
    cout<<"Order ID : "<<f.id<<endl;
    cout<<"Food Item : "<<f.item<<endl;
    cout<<"Quantity : "<<f.qty<<endl;
    cout<<"Price : "<<f.price<<endl;
    cout<<"Total Bill : "<<total<<endl;
}

int main(){
    foodorder f;
    f.enter();
    bill(f);
    return 0;
}