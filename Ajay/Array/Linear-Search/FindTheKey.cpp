#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of this Array : "; cin >> n;
    int arr[n];
    cout << "Enter the Array elements : " << endl;
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }

    int k;
    cout << "Enter the searching element : "; cin >> k;

    bool f = false;
    for(int i=0; i<n; i++){
        if(arr[i] == k) f = true;
    }
    if(f) cout << "Element is present!" << endl;
    else cout << "Element is not present!" << endl;
    return 0;
}