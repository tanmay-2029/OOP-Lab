#include <iostream>
using namespace std;

int main(){
    int n,id;
    cout<<"enter number of students : ";
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++) cin>>*(p+i);
    cout<<"enter id to search : ";
    cin>>id;

    int *q=p;
    int pos=-1;

    for(int i=0;i<n;i++){
        if(*q==id){
            pos=i;
            break;
        }
        q++;
    }
    if(pos!=-1) cout<<"id found at "<<pos<<endl;
    else cout<<"Not found"<<endl;
    delete[] p;

    return 0;
}