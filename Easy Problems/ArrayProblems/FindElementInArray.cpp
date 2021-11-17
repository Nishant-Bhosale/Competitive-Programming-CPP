#include<iostream>
#include<vector>
using namespace std;

int main(){
   int arrSize, element;
   cin>>arrSize;

   vector<int> vec1;

   for(int i = 0; i < arrSize; i++){
      cout<<"Enter element"<<endl;
      cin>>element;
      vec1.push_back(element);
   }

   int numToFind;

   cout<<"Enter the number you want: "<<endl;
   cin>>numToFind;

   for(int i = 0; i < arrSize; i++){
      if(vec1[i] == numToFind){
         cout<<i<<endl;
         return 0;
      }
   }

   return 0;
}