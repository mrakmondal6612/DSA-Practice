#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void Sort0s1s(vector<int>&v){
    int noOfZeros = 0;
    int noOfOnes = 0;
    int n = v.size();
    for(int i=0; i<n; i++){
        if(v[i] == 0)
            noOfZeros++;
        else
            noOfOnes++;
    }

    for(int i=0; i<n; i++){
        if(i < noOfZeros){
            v[i] = 0;
        }
        else{
            v[i] = 1;   
        }    
    }  
}

int main()
{
    vector<int>v = {0, 1, 0, 0, 1, 1, 0, 1};
    display(v);
    Sort0s1s(v);
    display(v);
return 0;
}