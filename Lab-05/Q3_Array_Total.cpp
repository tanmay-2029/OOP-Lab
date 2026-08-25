#include <iostream>
using namespace std;

int total(int a[], int n) {
    int sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    return sum;
}

float total(float a[], int n) {
    float sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    return sum;
}

int total(int a[], int n, int k) {
    int sum=0;
    for(int i=0;i<k;i++) sum+=a[i];
    return sum;
}

int main() {
    int a[]={10,2,320,49};
    float b[]={1.5,8.5,3.7,19.3};

    cout<<"integer array total : "<<total(a,4)<<endl;
    cout<<"float array total : "<<total(b,4)<<endl;
    cout<<"first two elements total : "<<total(a,4,2)<<endl;

    return 0;
}