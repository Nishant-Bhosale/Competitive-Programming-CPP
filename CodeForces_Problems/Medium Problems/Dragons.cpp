#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
   int n, s, x, y;
   cin>>s>>n;

   pair<int,int> p;

   vector<pair<int,int>> dragons;

   for(int i = 0; i < n; i++){
      cin>>x>>y;
      dragons.push_back({x,y});
   }

   sort(dragons.begin(), dragons.end());

   for(int i = 0; i < dragons.size(); i++){
      if(s > dragons[i].first){
         s += dragons[i].second;
      }else{
         cout<<"NO";
         return 0;
      }
   }

   cout<<"YES";
   return 0;
}