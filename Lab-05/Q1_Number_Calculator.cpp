#include <iostream>
using namespace std;

int calculate(int a, int b) {return a + b;}
int calculate(int a, int b, int c) {return a + b + c;}
float calculate(float a, float b) {return a + b;}

int main() {
    int a,b,c;
    float x,y;

    cout<<"Two Integers to ADD : ";
    cin>>a>>b;
    cout<<"Total : "<<calculate(a,b)<<endl;
    cout<<"\nThree Integers to ADD : ";
    cin>>a>>b>>c;
    cout << "Total : "<<calculate(a,b,c)<<endl;
    cout<<"\nTwo Float Number to ADD : ";
    cin>>x>>y;
    cout << "Total : "<<calculate(x,y)<<endl;
    return 0;
}