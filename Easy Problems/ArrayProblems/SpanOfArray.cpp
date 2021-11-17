#include<iostream>
using namespace std;

int main(){
   int arrSize;

   cin>>arrSize;

   int arr[arrSize];

   for(int i = 0; i<arrSize; i++){
      cin>>arr[i];
   }

   int max = arr[0];
   int min = arr[0];

   for(int i = 0; i < arrSize; i++){
      if(arr[i] > max){
         max = arr[i];
      }
      if(arr[i] < min){
         min = arr[i];
      }
   }

   cout<<max - min<<endl;

   return 0;
}