#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter slots : ";
    cin>>n;
    int *p=new int[n]; 

    for(int i=0;i<n;i++) cin>>p[i];

    int avail=0,occ=0;
    int *q=p;

    for(int i=0;i<n;i++){
        if(*q==0) avail++;
        else occ++;
        q++;
    }

    cout<<"available : "<<avail<<endl;
    cout<<"occupied : "<<occ<<endl;
    delete[] p;
    return 0;
}