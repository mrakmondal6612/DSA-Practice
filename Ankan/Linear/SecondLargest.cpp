#include<iostream>
#include<climits>
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

    int maxi = INT_MIN; //all case solved

    for(int i=0; i<n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    
    int smaxi = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]!=maxi && arr[i] > smaxi){
            smaxi = arr[i];
        }
    }

    cout<<"The maximum element = "<<maxi<<endl;
    cout<<"The second maximum element = "<<smaxi<<endl;
return 0;
}