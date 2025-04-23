// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(2);
//     v.push_back(9);
//     v.push_back(4);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(2);

//     int target;
//     cout<<"enter your element to find = "; cin>>target;
//     int idx = -1;
//     for(int i=0; i<v.size(); i++){
//         if(v[i] == target){
//             idx = i; // store the index
//         }
//     }
//     cout<<"Element found in the index = "<< idx <<endl;

// return 0;
// }


//! optimised way  ->

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 6, 7, 1, 2, 3};

    int target;
    cout<<"enter your element to find = "; cin>>target;
    int idx = -1;
    for(int i = v.size()-1; i > 0; i--){
        if(v[i] == target){
            idx = i; // store the 
            break;
        }
    }
    cout<<"Element found in the index = "<< idx <<endl;

return 0;
}