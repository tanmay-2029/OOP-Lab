#include <iostream>
using namespace std;

class Date{
    int day,month,year;

public:
    Date(int d=0,int m=0,int y=0){
        day=d;
        month=m;
        year=y;
    }

    bool operator==(Date d){
        return day==d.day&&month==d.month&&year==d.year;
    }
};

int main(){
    Date d1(15,8,2026);
    Date d2(15,8,2026);

    if(d1==d2)
        cout<<"both dates are equal."<<endl;
    else
        cout<<"dates are not equal."<<endl;

    return 0;
}