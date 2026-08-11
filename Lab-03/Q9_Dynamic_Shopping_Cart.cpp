#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    float price;
    int quantity;

public:
    void accept() {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }
    
    void display() {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
    
    float getCost() {
        return price * quantity;
    }
};

int main() {
    int n;
    float total = 0;

    cout << "Enter number of products: ";
    cin >> n;
    
    Product *cart = new Product[n];
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Product " << i + 1 << ":\n";
        cart[i].accept();
    }

    for (int i = 0; i < n; i++) {
        cout << "\nProduct " << i + 1 << ":\n";
        cart[i].display();
        
        total += cart[i].getCost();
    }
    
    cout << "\nTotal Amount = " << total << endl;
    
    delete[] cart;

    return 0;
}