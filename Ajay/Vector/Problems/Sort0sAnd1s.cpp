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
// usinng 1 pass and 2 pointers
void sort0sAnd1(vector<int>&v){
    int start=0, end=v.size()-1;
    while(start <= end){
        if(v[start] == 1 && v[end] == 0) swap(v[start++], v[end--]);
        else if(v[start] == 0) start++;
        else end--;
    }
}

int main(){
    vector<int> v = {0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0};
    diaplay(v);
    sort0sAnd1(v);
    diaplay(v);

    return 0;
}