#include<bits/stdc++.h>
using namespace std;

int main(){
   int n, r, l, u, d;

   cin>>n;

   vector<pair<int, int>> coords;

   while(n--){
      int x, y;
      cin>>x>>y;
      coords.emplace_back(x, y);
   }
   int count = 0;
   for(int i = 0; i < coords.size(); i++){
      l = r = u = d = 0;
      for(int j = 0; j < coords.size(); j++){
         if(coords[i].first > coords[j].first && coords[i].second == coords[j].second){
            r = 1;
         }
         if(coords[i].first < coords[j].first && coords[i].second == coords[j].second){
            l = 1;
         }
         if(coords[i].first == coords[j].first && coords[i].second < coords[j].second){
            u = 1;
         }
         if(coords[i].first == coords[j].first && coords[i].second > coords[j].second){
            d = 1;
         }
      }
      if(r+l+u+d == 4)count++;
   }
   cout<<count<<endl;
   return 0;
}