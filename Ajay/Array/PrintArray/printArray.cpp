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
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

int main(){
    int n;
    cout << "Enter Size of the Array :"; cin >> n;
    int arr[n];
    createArr(arr, n);
    printArray(arr, n);
    return 0;
}