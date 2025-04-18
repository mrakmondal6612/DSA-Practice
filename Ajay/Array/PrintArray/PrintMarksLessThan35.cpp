#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Number Of Students : "; cin>>n;
    int marks[n];
    cout << "Enter Marks of Each students :" << endl; 
    for(int i=0; i<n; i++){
        cin >> marks[i];
    }
    cout << "Name List of Students, which marks less than 35 ." << endl;
    for(int i=0; i<n; i++){
        if( marks[i] < 35){
            cout << i << ", ";
        }
        cout << endl;
    }

    return 0;
}