#include <iostream>
using namespace std;

class student{
protected:
    string name;
    int marks;

public:
    student(string n,int m){
        name=n;
        marks=m;
    }
};

class regularstudent:public student{
public:
    regularstudent(string n,int m):student(n,m){}

    void calculateresult(){
        cout<<name<<" total : "<<marks<<endl;
    }
};

class scholarshipstudent:public student{
public:
    scholarshipstudent(string n,int m):student(n,m){}

    void calculateresult(){
        cout<<name<<" total : "<<marks+5<<endl;
    }
};

int main(){
    regularstudent s1("tanmay",240);
    scholarshipstudent s2("rahul",240);

    s1.calculateresult();
    s2.calculateresult();
}