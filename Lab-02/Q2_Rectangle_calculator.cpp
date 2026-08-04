#include <iostream>
using namespace std;

class rectangle{
public:
    int breadth;
    int length;
    int a,p;

    void area(){
        a=(length*breadth);
        cout<<"\nArea - "<<a<<endl;
    }

    void perimeter(){
        p=2*(length+breadth);
        cout<<"\nPerimeter - "<<p;
    }

    void detail(){
        cout<<"Enter Length - ";
        cin>>length;
        cout<<"Enter Breadth - ";
        cin>>breadth;
    }
};

int main (){
    rectangle r;
    r.detail();
    r.perimeter();
    r.area();

    return 0;
}