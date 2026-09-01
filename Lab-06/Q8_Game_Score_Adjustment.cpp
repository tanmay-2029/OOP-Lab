#include <iostream>
using namespace std;

void increase(int *p,int n){
    for(int i=0;i<n;i++){
        *p=*p+10;
        p++;
    }
}
int main(){
    int score[5]={20,30,40,50,60};

    cout<<"before : ";
    for(int i=0;i<5;i++) cout<<score[i]<<" ";
    increase(score,5);
    cout<<endl<<"after : ";
    for(int i=0;i<5;i++) cout<<score[i]<<" ";
    cout<<"\n";

    return 0;
}