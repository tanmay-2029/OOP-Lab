#include <iostream>
using namespace std;

void updatevisitors(int *count){
    int x;
    cout<<"enter new visitors : ";
    cin>>x;
    *count=*count+x;
}
int main(){
    int count=50;
    cout<<"before : "<<count<<endl;
    updatevisitors(&count);
    cout<<"after : "<<count<<endl;
    return 0;
}