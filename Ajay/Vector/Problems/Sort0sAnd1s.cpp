#include<bits/stdc++.h>
using namespace std;

void diaplay (vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;
}
// using 2 pass
void sort0sAnd1s(vector<int>&v){
    int noOf0s=0, noOf1s=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]== 0) noOf0s++;
        else noOf1s++;
    }
    for(int i=0; i<v.size(); i++){
        if(i < noOf0s) v[i] = 0;
        else v[i] = 1;
    }
}
// Function to sort 0s and 1s using one-pass two-pointer approach
void sort0s1s(vector<int>&v){
    int start=0, end=v.size()-1;
    while(start <= end){
        if(v[start] == 1 && v[end] == 0) swap(v[start++], v[end--]);
        else if(v[start] == 0) start++;
        else end--;
    }
}

// Function to sort 0s and 1s using one-pass two-pointer approach
void sort0sAnd1(vector<int>& v) {
    int left = 0, right = v.size() - 1;
    while (left < right) {
        while (left < right && v[left] == 0) left++;
        while (left < right && v[right] == 1) right--;
        if (left < right) swap(v[left++], v[right--]);
    }
}


int main(){
    vector<int> v = {0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0};
    diaplay(v);
    sort0sAnd1(v);
    diaplay(v);

    return 0;
}