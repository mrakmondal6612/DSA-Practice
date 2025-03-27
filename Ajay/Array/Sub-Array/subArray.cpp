#include<iostream>
using namespace std;

    // Inputs elements in the array
void createArr(int arr[], int n){
    cout << "input elements of the Array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

    // Print all elements in the array
void printSubArray(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            // cout << "(" << i << ", " << j <<") ";
            for(int x=i; x<=j; x++){
                cout << arr[x];
            }
            cout << " ";
        }
        cout << endl;
    }cout << endl;
}

int main(){
    int n;
    cout << "Enter Size of the Array :"; cin >> n;
    int arr[n];
    createArr(arr, n);
    printSubArray(arr, n);
    return 0;
}