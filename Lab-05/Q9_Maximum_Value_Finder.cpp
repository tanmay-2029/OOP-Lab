#include <iostream>
using namespace std;

int maximum(int a, int b) {return (a>b) ? a : b;}

int maximum(int *a, int *b) {
    return (*a>*b) ? *a : *b;
}

int maximum(int *a, int n) {
    int max=a[0];
    for(int i=1;i<n;i++)
        if(a[i]>max) max=a[i];
    return max;
}

int main() {
    int a=20,b=30;
    int x=40,y=25;
    int arr[]={10,50,30,20};

    cout<<"two integers maximum : "<<maximum(a,b)<<endl;
    cout<<"pointer maximum : "<<maximum(&x,&y)<<endl;
    cout<<"array maximum : "<<maximum(arr,4)<<endl;

    return 0;
}