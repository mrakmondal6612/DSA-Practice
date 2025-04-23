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
    int i = 0;
    int j = v.size()-1;
    cout<<"Original array = "<<endl;
    display(v);
    while(i<=j){
        // swap(v[i++], v[j--]); //! C++ STL
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++, j--;
    }
    cout<<"Reverse array = "<<endl;
    display(v);
return 0;
}