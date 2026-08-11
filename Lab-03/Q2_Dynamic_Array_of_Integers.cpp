#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter no. of elements in array : ";
    cin>>n;
    
    int *arr= new int[n];

    cout <<"Enter "<<n<< " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    
    delete[] arr;

    return 0;
}