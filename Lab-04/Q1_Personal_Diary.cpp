#include <iostream>
using namespace std;

class diary{
    private:
    string name;
    int entry;
    int last;

    public:

    void enter(){
        cout<<"Name : ";
        cin>>name;
        cout<<"No of Entries : ";
        cin>>entry;
        cout<<"Last Entry : ";
        cin>>last;
    }

    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"No of Entries : "<<entry<<endl;
        cout<<"Last Entry : "<<last<<endl;
    }
};

int main (){
    diary d;
    d.enter();
    d.display();
    return 0;
}