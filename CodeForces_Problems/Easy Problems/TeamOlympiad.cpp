#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
   int n, sub;

   cin>>n;
   vector<int> subs;
   for(int i = 0; i<n; i++){
      cin>>sub;
      subs.push_back(sub);
   }

   int oneI = 0, twoI = 0, threeI = 0;

   for(int i = 0; i<subs.size(); i++){
      if(subs[i] == 1){
         oneI += 1;
      }else if(subs[i] == 2){
         twoI += 1;
      }else{
         threeI += 1;
      }
   }

   int minOfTwo = min(oneI, twoI);
   int minTeams= min(minOfTwo, threeI);

   cout<<minTeams<<endl;

   for(int i = 0; i<subs.size(); i++){
      vector<int> team; 
      for(int j = 0; j<subs.size(); j++){
         if(subs[j] == 1){
            team.push_back(subs[j]);
         }
      }
   }

   return 0;
}