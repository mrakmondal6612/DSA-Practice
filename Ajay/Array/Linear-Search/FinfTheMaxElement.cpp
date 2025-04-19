#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of this Array : "; cin >> n;
    int arr[n];
    cout << "Enter the Array elements : " << endl;
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }

    int k = INT_MIN; 

    for(int i=1; i<n; i++){
        if(arr[i] > k) k = arr[i];
    }
    cout << "Maximum Element is : " << k << endl;
    return 0;
}