#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int target;
    cout<<"Enter the target value = ";
    cin>>target;

    vector<int> v = {1, 3, 2, 4, 3, 4, 1, 6};
    
    cout<<"doublet sum indexes = "<<endl;
    // two pointer approach
    for(int i=0; i < v.size()-1; i++){
        for(int j=i+1; j < v.size(); j++){
            if(v[i]+v[j] == target){
                cout<<"("<<i<<", "<<j<<")"<<endl;
            }
        }
    }
return 0;
}