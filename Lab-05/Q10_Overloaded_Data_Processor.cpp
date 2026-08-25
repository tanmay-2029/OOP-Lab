#include <iostream>
using namespace std;

int process(int a, int b) {return a+b;} 
float process(int a, float b) {return a+b;}
float process(float a, float b) {return a+b;}

int process(int a[], int n) {
    int sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    return sum;
}

int process(int *a, int *b) {return *a+*b;}

int main() {
    int a=10,b=20;
    float x=5.5,y=2.5;
    int arr[]={10,20,30};

    cout<<"two integers : "<<process(a,b)<<endl;
    cout<<"integer and float : "<<process(a,x)<<endl;
    cout<<"two floats : "<<process(x,y)<<endl;
    cout<<"array total : "<<process(arr,3)<<endl;
    cout<<"pointer total : "<<process(&a,&b)<<endl;

    return 0;
}