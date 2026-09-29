#include <iostream>
using namespace std;

class Student{
    string name;
    int marks;

public:
    Student(string n="",int m=0){
        name=n;
        marks=m;
    }

    bool operator>(Student s){
        return marks>s.marks;
    }

    void display(){
        cout<<name<<" has higher marks."<<endl;
    }
};

int main(){
    Student s1("Tanmay",85);
    Student s2("Rahul",78);

    if(s1>s2)
        s1.display();
    else if(s2>s1)
        s2.display();
    else
        cout<<"both students have equal marks."<<endl;

    return 0;
}