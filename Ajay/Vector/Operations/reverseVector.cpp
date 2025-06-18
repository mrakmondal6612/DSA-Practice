#include<bits/stdc++.h>
using namespace std;

void diaplay (vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;
}
// Reversed creating copy 
void reverse1 (vector<int>&v){
    vector<int> copy;
    for(int i=v.size()-1; i>=0; i--){
        copy.push_back(v[i]);
    }
    v=copy;
}
// reversed, not create copy 
void reverse2 (vector<int>&v){
   int i=0, j=v.size()-1;
   while(i<j){
    swap(v[i++], v[j--]);
   }
}

// reversed by position 
void reverseByPosition (vector<int>&v, int start, int end){
   while(start<end){
    swap(v[start++], v[end--]);
   }
}


int main(){
    vector<int> v = {1, 5, 9, 7};
    diaplay(v);
    reverseByPosition(v, 0, v.size()-1);
    diaplay(v);

    return 0;
}