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
    int k;
    cout << "Enter the searching element : "; cin >> k;

    int cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > k) cnt++;
    }
    cout << "count : " << cnt << endl;
    return 0;
}