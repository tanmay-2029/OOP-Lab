#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float marks;

public:
    void accept() {
        cout<<"Enter Roll Number: ";
        cin>>rollNumber;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Marks: ";
        cin>>marks;
    }

    // Function to display student details
    void display() {
        cout<<"\nStudent Details"<<endl;
        cout<<"Roll Number: "<<rollNumber<< endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main() {
    Student *student = new Student;

    student->accept();
    student->display();
    
    delete student;

    return 0;
}