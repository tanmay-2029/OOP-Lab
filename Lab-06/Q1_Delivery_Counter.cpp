#include <iostream>
using namespace std;

int main(){
    int parcels=20;
    int *p=&parcels;
    int x;

    cout<<"parcels before : "<<*p<<endl;
    cout<<"enter increase : ";
    cin>>x;

    *p=*p+x;

    cout<<"parcels after : "<<*p<<endl;

    return 0;
}