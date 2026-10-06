#include <iostream>
using namespace std;

class academic{
protected:
    int m1,m2,m3;

public:
    academic(int a,int b,int c){
        m1=a;
        m2=b;
        m3=c;
    }
};

class sports{
protected:
    int sm;

public:
    sports(int s){
        sm=s;
    }
};

class studentresult:public academic,public sports{
public:
    studentresult(int a,int b,int c,int s):academic(a,b,c),sports(s){}

    void display(){
        int total=m1+m2+m3+sm;
        cout<<"total : "<<total<<endl;
        cout<<"average : "<<total/4.0<<endl;
    }
};

int main(){
    studentresult s(80,85,90,75);
    s.display();
}