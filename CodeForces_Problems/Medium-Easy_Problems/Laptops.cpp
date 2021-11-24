#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
   int n;
   cin>>n;

   vector<pair<int, int>> lps;
   while(n--){
      int price, quality;

      cin>>price>>quality;

      lps.push_back({price, quality});
   }

   bool isHappy = false;

   sort(lps.begin(), lps.end());

   for(int i = 0; i < lps.size(); i++){
         if(lps[i].second > lps[i + 1].second && lps[i].first < lps[i + 1].first){
            isHappy = true;
         }
   }

   if(isHappy){
      cout<<"Happy Alex";
   }else{
      cout<<"Poor Alex";
   }
   return 0;
}