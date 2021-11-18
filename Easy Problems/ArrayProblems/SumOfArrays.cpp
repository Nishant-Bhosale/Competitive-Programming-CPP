#include<iostream>
#include<vector>
using namespace std;

int main(){
   int firstArrSize, secondArrSize;
   int arrElements;

   vector<int> firstArr;
   vector<int> secondArr;

   cin>>firstArrSize;
   for(int i = 0; i < firstArrSize; i++){
      cin>>arrElements;
      firstArr.push_back(arrElements);
   }

   cout<<"Enter the size of second array: "<<endl;

   cin>>secondArrSize;

   for(int i = 0; i < secondArrSize; i++){
      cin>>arrElements;
      secondArr.push_back(arrElements);
   }

   // vector<int> smallArr = firstArr;
   // vector<int> bigArr = secondArr;

   // if(smallArr.size() > secondArr.size()){
   //    smallArr = secondArr;
   //    bigArr = firstArr;
   // }
   int biggerSize = firstArrSize;
   int smallerSize = secondArrSize;

   if(biggerSize < smallerSize){
      biggerSize = secondArrSize;
      smallerSize = firstArrSize;
   }

   int i = firstArr.size() - 1;
   int j = secondArr.size() - 1;

   vector<int> sumArr;
   int k = biggerSize - 1;

   int carry = 0;
   while(k >= 0){
      int digit = carry;

      if(i >= 0){
         digit += firstArr[i];
      }
      if(j >= 0){
         digit += secondArr[j];
      }

      carry = digit / 10;
      digit = digit % 10;

      sumArr.insert(sumArr.begin(), digit);

      i--;
      j--;
      k--;
   }

   if(carry != 0){
      cout<<carry<<endl;
   }

   for(auto num: sumArr){
      cout<<num<<endl;
   }

   return 0;
}