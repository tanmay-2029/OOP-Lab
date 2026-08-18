#include <iostream>
using namespace std;

class exam{
    private:
    string name;
    string subject;
    float marks;
    float maxmarks;

    public:
    void enter(){
        cout<<"Student Name : ";
        cin>>name;
        cout<<"Subject : ";
        cin>>subject;
        cout<<"Marks : ";
        cin>>marks;
        cout<<"Maximum Marks : ";
        cin>>maxmarks;
    }

    friend class result;
};

class result{
    public:
    void display(exam e){
        float percentage = (e.marks / e.maxmarks) * 100;
        cout<<"Student Name : "<<e.name<<endl;
        cout<<"Subject : "<<e.subject<<endl;
        cout<<"Marks : "<<e.marks<<"/"<<e.maxmarks<<endl;
        cout<<"Percentage : "<<percentage<<"%"<<endl;
        if(percentage >= 40){
            cout<<"Result : Pass"<<endl;
        } else {
            cout<<"Result : Fail"<<endl;
        }
    }
};

int main(){
    exam e;
    result r;
    e.enter();
    r.display(e);
    return 0;
}