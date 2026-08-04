#include <iostream>
using namespace std;

class student{
public:
    string rollno;
    string name;
    int marks;
};

int main (){
    student s;

    //Taking Input From User
    cout<<"Enter RollNo. - ";
    cin>>s.rollno;
    cout<<"Enter Name - ";
    cin>>s.name;
    cout<<"Enter Marks Obtained - ";
    cin>>s.marks;

    //Displaying Output
    cout<<"\nRollno. - "<<s.rollno<<"\nName - "<<s.name<<"\nMarks Obtained - "<<s.marks<<endl;

    return 0;
}