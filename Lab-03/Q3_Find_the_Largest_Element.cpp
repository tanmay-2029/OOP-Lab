#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value of N = ";
    cin>>n;

    int maxi=0;

    int *arr = new int[n];

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        maxi=max(maxi,arr[i]);
    }

    cout<<"Max Element = "<<maxi<<endl;

    delete[] arr;

    return 0;
}