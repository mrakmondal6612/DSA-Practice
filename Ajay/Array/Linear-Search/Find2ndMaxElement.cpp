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

    int firstMax = INT_MIN; 

    for(int i=0; i<n; i++){
        if(arr[i] > firstMax) firstMax = arr[i];
    }
    int secondMax = INT_MIN; 

    for(int i=0; i<n; i++){
        if(arr[i] != firstMax && arr[i] > secondMax) secondMax = arr[i];
    }
    cout << "First Maximum Element is : " << firstMax << endl;
    cout << "Second Maximum Element is : " << secondMax << endl;
    return 0;
}