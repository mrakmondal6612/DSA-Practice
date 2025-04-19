#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the size of array = ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // int arr[] = {4, 55, 8, 9, 32};
    int maxi = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout<<"The maximum element = "<<maxi<<endl;
return 0;
}