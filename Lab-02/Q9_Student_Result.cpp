#include <iostream>
using namespace std;

class StudentResult{
public:
    string name;
    string rollno;
    int a,b,c,d,e;
    float percentage;

    void grade(){
        if (percentage>=90) cout<<"Grade = A";
        else if (percentage>=80)  cout<<"Grade = B";
        else if (percentage>=70) cout<<"Grade = C";
        else if (percentage>=60) cout<<"Grade = D";
        else cout<<"Grade = E";
    }

    void per(){
        cout<<"Total marks obtained are = "<<a+b+c+d+e<<endl;
        percentage=(a+b+c+d+e)*(1.0)/(5.0);
        cout<<"Percentage = "<<percentage<<endl;
        
    }

    void detail(){
        cout<<"Enter Name - ";
        getline(cin, name);
        cout<<"Enter Rollno. - ";
        cin>>rollno;
        cout<<"Enter marks in 5 subject  = ";
        cin>>a>>b>>c>>d>>e;
    }
};

int main (){
    StudentResult r;
    r.detail();
    r.per();
    r.grade();
    return 0;
}