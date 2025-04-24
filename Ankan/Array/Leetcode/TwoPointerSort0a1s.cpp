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
    int n = v.size();
    int start = 0;
    int end = n-1;

    while(start < end){
        if(v[start] == 0) start++;
        else if(v[end] == 1) end--;
        else if(v[start] == 1 && v[end] == 0){
            swap(v[start++], v[end--]);
        }
        else{
            cout<<"invalid";
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