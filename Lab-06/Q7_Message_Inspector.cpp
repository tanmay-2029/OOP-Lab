#include <iostream>
using namespace std;

int main(){
    char s[]="Hello World";
    char *p=s;
    int upper=0,lower=0,space=0;

    while(*p!='\0'){
        if (*p>='A' && *p<='Z') upper++;
        else if (*p>='a'&&*p<='z') lower++;
        else if (*p==' ') space++;
        p++;
    }
    cout<<"uppercase : "<<upper<<endl;
    cout<<"lowercase : "<<lower<<endl;
    cout<<"spaces : "<<space<<endl;
    return 0;
}