#include <iostream>
using namespace std;

class Product{
    string name;
    float price;
    int quantity;

public:
    Product(string n="",float p=0,int q=0){
        name=n;
        price=p;
        quantity=q;
    }

    Product operator+(Product p){
        Product temp;

        if(name==p.name && price==p.price){
            temp.name=name;
            temp.price=price;
            temp.quantity=quantity+p.quantity;
        }
        else{
            cout<<"products are different."<<endl;
            temp=*this;
        }

        return temp;
    }

    bool operator>(Product p){
        return price*quantity>p.price*p.quantity;
    }

    void display(){
        cout<<"product : "<<name<<endl;
        cout<<"price : "<<price<<endl;
        cout<<"quantity : "<<quantity<<endl;
        cout<<"totalvalue : "<<price*quantity<<endl;
    }
};

int main(){
    Product p1("book",200,2);
    Product p2("book",200,3);

    Product p3=p1+p2;

    cout<<"combinedproduct :"<<endl;
    p3.display();

    if(p1>p2) cout<<"product1 has higher totalvalue."<<endl;
    else if(p2>p1) cout<<"product2 has higher totalvalue."<<endl;
    else cout<<"both products have equal totalvalue."<<endl;

    return 0;
}