#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void movePositiveAndNegative(vector<int>&v){
    int n = v.size();
    int start = 0;
    int end = n-1;

    while(start < end){
        if(v[start] < 0) start++; // -ve then ++
        else if(v[end] > 0) end--; // +ve then ++
        else if(v[start] > 0 && v[end] < 0){
            swap(v[start++], v[end--]);
        }
    }
}

int main()
{
    vector<int>v = {1, -2, 3, -4, -5, 6, 8};
    display(v);
    movePositiveAndNegative(v);
    display(v);
return 0;
}