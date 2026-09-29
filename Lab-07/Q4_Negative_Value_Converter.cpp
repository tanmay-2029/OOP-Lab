#include <iostream>
using namespace std;

class Number{
    int value;

public:
    Number(int v=0){
        value=v;
    }
    Number operator-(){
        Number temp;
        temp.value=-value;
        return temp;
    }
    void display(){
        cout<<value<<endl;
    }
};

int main(){
    Number n1(25);
    Number n2=-n1;

    cout<<"original value : ";
    n1.display();

    cout<<"negative value : ";
    n2.display();

    return 0;
}