#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{

    vector<int>v = {9, 7, 5, 7, 1};
    cout<<"Display original vector ="<<endl;
    display(v);

    //reverse
    vector<int> v2(v.size());
    for(int i=0; i<v2.size(); i++){
        // main rule -> i+j = size - 1
        int j = v.size()-1 - i;
        v2[i] = v[j];
    }
    cout<<"Display rotate copy vector ="<<endl;
    display(v2);
return 0;
}