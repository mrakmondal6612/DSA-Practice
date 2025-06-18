#include<iostream>
#include<vector>
using namespace std;

void diaplay (vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;
}

int main(){
    vector<int> v = {1, 5, 9, 7};
    diaplay(v);

    return 0;
}