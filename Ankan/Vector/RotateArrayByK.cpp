#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void reverseRange(vector<int>&v, int start, int end){
    while(start <= end){
        swap(v[start++], v[end--]);
    }
}

void rotateByK(vector<int>&v, int k){
    int n = v.size();
    //edge case
    if(k > n) k = k % n;
    //step1
    reverseRange(v, 0, n-k-1);
    //step2
    reverseRange(v, n-k, n-1);
    //step2
    reverseRange(v, 0, n-1);

}
int main()
{
    vector<int>v = {1, 2, 3, 4, 5};
    int k = 41;
    display(v);
    rotateByK(v, k);
    display(v);
return 0;
}