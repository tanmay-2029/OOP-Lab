#include <iostream>
using namespace std;

class Counter{
    int value;

public:
    Counter(int v=0){
        value=v;
    }

    Counter operator++(){
        ++value;
        return *this;
    }

    Counter operator++(int){
        Counter temp=*this;
        value++;
        return temp;
    }

    void display(){
        cout<<value<<endl;
    }
};

int main(){
    Counter c(5);

    cout<<"initial value : ";
    c.display();

    ++c;

    cout<<"after prefix : ";
    c.display();

    c++;

    cout<<"after postfix : ";
    c.display();

    return 0;
}