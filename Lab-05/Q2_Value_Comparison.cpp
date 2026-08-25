#include <iostream>
using namespace std;

int compare(int a, int b) {return (a>b) ? a : b;}
float compare(float a, float b) {return (a>b) ? a : b;}
int compare(int a, int b, int c) {
    int max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    return max;
}

int main() {
    int a=31,b=98,c=17;
    float x=19.5,y=2.5;

    cout<<"two integers : "<<compare(a,b)<<endl;
    cout<<"two float numbers : "<<compare(x,y)<<endl;
    cout<<"three integers : "<<compare(a,b,c)<<endl;

    return 0;
}