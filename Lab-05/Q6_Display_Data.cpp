#include <iostream>
using namespace std;

void display(int a) {cout<<"integer : "<<a<<endl;}
void display(float a) {cout<<"float : "<<a<<endl;}
void display(char a) {cout<<"character : "<<a<<endl;}

void display(int a[], int n) {
    cout<<"integer array : ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}

void display(char a[], int n) {
    cout<<"character array : ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main() {
    int a=10;
    float b=5.5;
    char c='a';

    int x[]={10,20,30};
    char y[]={'a','b','c'};

    display(a);
    display(b);
    display(c);
    display(x,3);
    display(y,3);

    return 0;
}