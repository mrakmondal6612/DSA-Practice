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
int main()
{

    vector<int>v = {1, 2, 3, 4, 5};
    int stRange, endRange;
    cout<<"Enter the value of Range = ";
    cin>> stRange>> endRange;
    cout<<"Before Reverse = "<<endl;
    display(v);

   reverseRange(v, stRange, endRange);

   cout<<"After reverse of range "<<"( " <<stRange<<", "<<endRange<<" ) = "<<endl;
   display(v);
return 0;
}