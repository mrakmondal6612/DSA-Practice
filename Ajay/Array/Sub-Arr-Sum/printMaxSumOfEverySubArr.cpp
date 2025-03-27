#include<iostream>
using namespace std;

// Print maximum sum of sub-arr in the array
void printMaxSumOfSubArray(int arr[], int n){
    if(n <= 0) {
        cout << "Array is empty !" << endl;
        return;
    }

    int maxSum = arr[0];
    // int maxSum = INT_MIN;
    cout << "All sum of subArray is : " << endl;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int x=i; x<=j; x++){
                sum += arr[x];
            }
            cout << sum << " ";
            maxSum = max(maxSum, sum);
            // if(maxSum < sum) maxSum = sum;
        } cout << endl;
    }

    cout <<"Maximum sum of the sub Array is : " << maxSum << endl;
}

int main(){
    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {2, -3, 6, -5, 4, 2};
    // int arr[] = {5};
    // int arr[] = {};
    int n = sizeof(arr)/sizeof(arr[0]);

    printMaxSumOfSubArray(arr, n);
    return 0;
}