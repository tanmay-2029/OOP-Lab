#include <iostream>
using namespace std;

void highest(float *p,int n){
    float high=*p;
    for(int i=1;i<n;i++){
        p++;
        if(*p>high) high=*p;
    }
    cout<<"highest price : "<<high<<endl;
}
int main(){
    float price[7]={25.5,40.2,15.8,90.5,32.4,75.6,50.3};
    highest(price,7);
    return 0;
}