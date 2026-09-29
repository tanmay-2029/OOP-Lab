#include <iostream>
using namespace std;

class Item{
    string name;
    float price;
    int quantity;

public:
    Item(string n="",float p=0,int q=0){
        name=n;
        price=p;
        quantity=q;
    }

    Item operator+(Item i){
        Item temp;

        if(name==i.name&&price==i.price){
            temp.name=name;
            temp.price=price;
            temp.quantity=quantity+i.quantity;
        }
        else{
            cout<<"items are different."<<endl;
            temp=*this;
        }

        return temp;
    }

    void display(){
        cout<<"item : "<<name<<endl;
        cout<<"price : "<<price<<endl;
        cout<<"quantity : "<<quantity<<endl;
    }
};

int main(){
    Item i1("pen",10,5);
    Item i2("pen",10,7);

    Item i3=i1+i2;

    cout<<"combined item :"<<endl;
    i3.display();

    return 0;
}