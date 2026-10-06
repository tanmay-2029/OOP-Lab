#include <iostream>
using namespace std;

class person{
protected:
    string name;
    int age;

public:
    person(string n,int a){
        name=n;
        age=a;
    }
};

class student:virtual public person{
protected:
    int rollno;
    float cgpa;

public:
    student(string n,int a,int r,float c):person(n,a){
        rollno=r;
        cgpa=c;
    }
};

class employee:virtual public person{
protected:
    int id;
    float salary;

public:
    employee(string n,int a,int i,float s):person(n,a){
        id=i;
        salary=s;
    }
};

class teachingassistant:public student,public employee{
public:
    teachingassistant(string n,int a,int r,float c,int i,float s)
    :person(n,a),student(n,a,r,c),employee(n,a,i,s){}

    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"rollno : "<<rollno<<endl;
        cout<<"cgpa : "<<cgpa<<endl;
        cout<<"id : "<<id<<endl;
        cout<<"salary : "<<salary<<endl;
    }
};

int main(){
    teachingassistant t("tanmay",19,101,8.5,501,30000);
    t.display();
}