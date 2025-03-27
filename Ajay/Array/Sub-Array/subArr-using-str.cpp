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
        string str = "";
        for(int j=i; j<n; j++){
            str+= to_string(arr[j]);
            cout << str << " ";
        }
        cout << endl;
    }
}

int main(){
    int n = 5;
    // cout << "Enter Size of the Array :"; cin >> n;
    int arr[n] = {1, 2, 3, 4, 5};
    // createArr(arr, n);
    printSubArray(arr, n);
    return 0;
}