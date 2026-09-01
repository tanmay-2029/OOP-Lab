#include <iostream>
using namespace std;

int main(){
    int seats[8]={1,2,3,4,5,6,7,8};
    int pos,newseat;
    cout<<"before : ";
    for(int i=0;i<8;i++) cout<<seats[i]<<" ";
    cout<<endl<<"enter position : ";
    cin>>pos;
    cout<<"enter new seat : ";
    cin>>newseat;
    *(seats+pos)=newseat;
    cout<<"after : ";
    for(int i=0;i<8;i++) cout<<seats[i]<<" ";
    cout<<"\n";
    return 0;
}