#include <iostream>
using namespace std;
int main() {
   int marks[] = {90, 30, 32, 85, 34, 97};
   cout<<"Indices of student, whose marks is less than 35 -"<<endl;
   for(int i=0; i<6; i++){
       if(marks[i] < 35){
           cout<<i<<", ";
       }
   }
   cout<<endl;
    return 0;
}
