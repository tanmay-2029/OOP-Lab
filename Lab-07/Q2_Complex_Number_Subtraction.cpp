#include <iostream>
using namespace std;

class Complex {
    int real,imag;

public:
    Complex(int r=0, int i=0) {
        real=r;
        imag=i;
    }
    Complex operator-(Complex c) {
        Complex temp;

        temp.real=real-c.real;
        temp.imag=imag-c.imag;

        return temp;
    }
    void display() {
        cout << real;
        if (imag>=0) cout<<" + "<<imag<< "i"<<endl;
        else cout<<" - "<<-imag<<"i"<<endl;
    }
};

int main() {
    Complex c1(8,5);
    Complex c2(3,2);

    cout << "c1 : ";
    c1.display();
    cout << "c2 : ";
    c2.display();

    Complex c3=c1-c2;

    cout << "c1 - c2 : ";
    c3.display();

    return 0;
}