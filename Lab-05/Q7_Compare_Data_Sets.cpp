#include <iostream>
using namespace std;

int compare(int a, int b) {return (a>b) ? a : b;}
float compare(float a, float b) {return (a>b) ? a : b;}

bool compare(int a[], int b[], int n) {
    for(int i=0;i<n;i++)
        if(a[i]!=b[i]) return false;
    return true;
}

int main() {
    int a=20,b=10;
    float x=5.5,y=8.5;

    int p[]={10,21,39};
    int q[]={10,21,39};

    cout<<"larger integer : "<<compare(a,b)<<endl;
    cout<<"larger float : "<<compare(x,y)<<endl;

    if(compare(p,q,3))
        cout<<"arrays are identical"<<endl;
    else
        cout<<"arrays are not identical"<<endl;

    return 0;
}