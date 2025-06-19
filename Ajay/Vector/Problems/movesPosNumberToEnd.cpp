#include<bits/stdc++.h>
using namespace std;

void display(vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " "; 
    }cout << endl;
}

void posAndNegNumberM1(vector<int>&v){
    int n = v.size()-1;
    int j=0;
    for(int i=0; i<n; i++){
        if(v[i]<0) swap(v[i], v[j++]);
    }
}

void posAndNegNumberM2(vector<int>&v){
    int n = v.size()-1;
    int start=0, end=n;
    while(start <= end){
        if(v[start] > 0 && v[end] < 0) swap(v[start++], v[end--]);
        else if(v[start] < 0) start++;
        else end--;  
    }
}

void posAndNegNumberM3(vector<int>&v){
    int n = v.size()-1;
    int start=0, end=n;
    while(start < end){
        while(start < end && v[start] < 0) start++;
        while(start < end && v[end] > 0) end--;
        if(start < end) swap(v[start++], v[end--]);
    }
}

int main(){
    vector<int> v = {1, 2, 3, 0, -2, -3, 4, 5, -4, 6};
    int n = v.size();
    display(v);
    posAndNegNumberM3(v);
    display(v);

    return 0;
}