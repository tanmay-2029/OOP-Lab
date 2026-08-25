#include <iostream>
using namespace std;

int modify(int a, int x) {return a+x;}
float modify(float a, float x) {return a+x;}

void modify(int *a, int x) {
    *a=*a+x;
}

int main() {
    int a=10;
    float b=10.5;

    cout<<"integer before : "<<a<<endl;
    cout<<"integer after : "<<modify(a,5)<<endl;

    cout<<"float before : "<<b<<endl;
    cout<<"float after : "<<modify(b,2.5)<<endl;

    cout<<"pointer before : "<<a<<endl;
    modify(&a,5);
    cout<<"pointer after : "<<a<<endl;

    return 0;
}