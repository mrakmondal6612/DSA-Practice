#include<iostream>
using namespace std;

// Print all sum of sub-arr in the array
void printSumOfSubArray(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int x=i; x<=j; x++){
                sum += arr[x];
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}

int main(){
    int n = 5;
    // cout << "Enter Size of the Array :"; cin >> n;
    int arr[n] = {1, 2, 3, 4, 5};
    printSumOfSubArray(arr, n);
    return 0;
}