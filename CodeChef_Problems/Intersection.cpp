#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      string a, b;
      cin>>a>>b;

      set<char> sta;
      set<char> stb;
      vector<char> v(100);

      for(int i = 0; i < a.length(); i++){
         sta.emplace(a[i]);
      }
      for(int i = 0; i < b.length(); i++){
         stb.emplace(b[i]);
      }

      auto it = set_difference(stb.begin(), stb.end(), sta.begin(), sta.end(), v.begin());
      v.resize(it - v.begin());

      if(v.size() == 0){
         cout<<-1;
      }else{
         for(auto it: v){
            cout<<it;
         }
         cout<<"\n";
      }
   }   
   return 0;
}