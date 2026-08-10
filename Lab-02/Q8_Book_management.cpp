#include <iostream>
using namespace std;

class management{
public:
    string ID;
    string name;
    string title;
    int days;
    int fin=0;

    void fine(){
        if (days>15) fin = (days-15)*2;
        cout<<"Fine = "<<fin<<endl;
    }
    
    void detail(){
        cout<<"Enter ID - ";
        cin>>ID;
        cout<<"Enter Name - ";
        cin>>name;
        cout<<"Enter Title - ";
        cin>>title;
        cout<<"Enter Number of days Book was issued - ";
        cin>>days;
    }
};

int main (){
    management r;
    r.detail();
    r.fine();

    return 0;
}
