#include<iostream>
using namespace std;

int main(){
   int firstArrSize, secondArrSize;

   cin>>firstArrSize;
   int firstArr[firstArrSize];
   for(int i = 0; i < firstArrSize; i++){
      cin>>firstArr[i] ;
   }

   cout<<"Enter the size of second array: "<<endl;

   cin>>secondArrSize;
   int secondArr[secondArrSize];
   for(int i = 0; i < secondArrSize; i++){
      cin>>secondArr[i]; 
   }

   int diffArr[secondArrSize];

   int carry = 0;
   int i = firstArrSize - 1;
   int j = secondArrSize - 1;
   int k = secondArrSize - 1;

   while(k >= 0){
      int digit = 0;
      int firstVal = i >= 0 ? firstArr[i] : 0;

      if(secondArr[j] + carry >= firstVal){
         digit = secondArr[j] + carry - firstVal;
         carry = 0;
      }else{
         digit = secondArr[j] + carry + 10 - firstVal;
         carry = -1;
      }

      diffArr[k] = digit;

      i--;
      j--;
      k--;
   }
   int idx = 0;
   while(idx < secondArrSize){
      if(diffArr[idx] == 0){
         idx++;
      }else{
         break;
      }
   }

   while(idx < secondArrSize){
      cout<<diffArr[idx]<<endl;
      idx++;
   }
   return 0;
}