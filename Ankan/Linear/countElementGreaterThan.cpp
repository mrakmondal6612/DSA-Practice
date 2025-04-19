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

    int x;
    cout<<"enter the target element = ";
    cin>>x;

    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > x) count++;
    }
    cout<<"count of greater element of = "<<count<<endl;;


return 0;
}