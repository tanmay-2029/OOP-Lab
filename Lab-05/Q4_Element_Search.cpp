#include <iostream>
using namespace std;

int search(int a[], int n, int x) { 
    for(int i=0;i<n;i++)
        if(a[i]==x) return i;
    return -1;
}

int search(char a[], int n, char x) { 
    for(int i=0;i<n;i++)
        if(a[i]==x) return i;
    return -1;
}

int search(int a[], int s, int e, int x) {
    for(int i=s;i<=e;i++)
        if(a[i]==x) return i;
    return -1;
}

int main() {
    int a[]={19,23,31,50};
    char b[]={'a','b','c','d'};

    cout<<"integer position : "<<search(a,5,30)<<endl;
    cout<<"character position : "<<search(b,4,'c')<<endl;
    cout<<"range search position : "<<search(a,1,3,40)<<endl;

    return 0;
}