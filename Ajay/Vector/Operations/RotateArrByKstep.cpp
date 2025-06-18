#include<bits/stdc++.h>
using namespace std;

void diaplay (vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;
}

// reversed by position 
void reverseByPosition (vector<int>&v, int start, int end){
   while(start<end){
    swap(v[start++], v[end--]);
   }
}

void RoatedByKstep(vector<int>&v, int k){
    int n = v.size();
    if(k > n) k %= n;

    reverseByPosition(v, 0, n-k-1);
    reverseByPosition(v, n-k, n-1);
    reverseByPosition(v, 0, n-1);
}

int main(){
    vector<int> v = {1, 5, 9, 7, 8, 0, 4};
    int k;
    diaplay(v);
    cout << "Enter the poition no. : " ; cin >> k;
    RoatedByKstep(v, k);
    diaplay(v);

    return 0;
}