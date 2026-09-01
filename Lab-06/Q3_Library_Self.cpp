#include <iostream>
using namespace std;

int main(){
    int books[6]={101,102,103,104,105,106};
    int *p=books;
    for(int i=0;i<6;i++){
        cout<<"book id : "<<*p<<" || address : "<<p<<endl;
        p++;
    }
    return 0;
}