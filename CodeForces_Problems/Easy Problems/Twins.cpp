#include<iostream>
#include<vector>
#include <algorithm>    // std::sort
using namespace std;

int main(){
   int tests;
   cin>>tests;
   int coinVal;
   int total = 0;

   vector<int>coinValues;
   for(int i = 1; i<=tests; i++){
      cin>>coinVal;
      coinValues.emplace_back(coinVal);
      total += coinVal;
   }

   sort(coinValues.begin(), coinValues.end());

   int coinCount = 0;
   int half = (total + 1)/2;

   // while(total >= half){
   //    total = total - coinValues[tests - 1];
   //    tests--;
   //    coinCount++;
   // }

   for(int i = coinValues.size() - 1; total >= half; i--){
      total = total - coinValues[tests - 1];
      coinCount++;
   }

   cout<<coinCount;

   return 0;
}