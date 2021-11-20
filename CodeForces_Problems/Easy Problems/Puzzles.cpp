#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   int n, puzzles, puzzle;

   cin>>n>>puzzles;

   vector<int> puzzlesArr;

   for(int i = 0; i < puzzles; i++){
      cin>>puzzle;
      puzzlesArr.emplace_back(puzzle);
   }

   sort(puzzlesArr.begin(), puzzlesArr.end());

   int minVal = 1000;
   for(int i = 0; i <= puzzlesArr.size() - n; i++){
      if(puzzlesArr[n + i - 1] - puzzlesArr[i] < minVal){
         minVal = puzzlesArr[n + i - 1] - puzzlesArr[i];
      }
   }

   cout<<minVal;

   return 0;
}