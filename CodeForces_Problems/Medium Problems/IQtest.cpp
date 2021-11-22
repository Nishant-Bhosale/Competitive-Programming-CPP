#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(){
   int n, num;

   cin>>n;

   vector<pair<int, int>> odds;
   vector<pair<int, int>> evens;

   for(int i = 0; i<n; i++){
      cin>>num;
      if(num % 2 == 0){
         evens.push_back({num, i+1});
      }else{
         odds.push_back({num, i+1});
      }
   }

   if(odds.size() < evens.size()){
      cout<<odds[0].second;
      return 0;
   }else{
      cout<<evens[0].second;
   }
   return 0;
}