#include<iostream>
using namespace std;

int main(){
   int arrSize;
   cin>>arrSize;

   int arr[arrSize];

   for(int i = 0; i < arrSize; i++){
      cin>>arr[i];
   }

   int numToFind;

   cout<<"Enter the number you want: "<<endl;
   cin>>numToFind;

   for(int i = 0; i < arrSize; i++){
      if(arr[i] == numToFind){
         cout<<i<<endl;
         return 0;
      }
   }

   return 0;
}