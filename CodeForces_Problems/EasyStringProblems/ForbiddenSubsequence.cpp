#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      string s, t;
      cin>>s>>t;

      sort(s.begin(), s.end());

      vector<int> cnt(26, 0);

      for(auto it: s){
         cnt[it - 'a']++;
      }

      if(t != "abc" || cnt[0] == 0 || cnt[1] == 0 || cnt[2] == 0){
         cout<<s<<endl;
      }else{
         while(cnt[0]--)cout<<"a";
         while(cnt[2]--)cout<<"c";
         while(cnt[1]--)cout<<"b";

         for(int i = 3; i < 26; i++){
            while(cnt[i]--){
               cout<<char('a' + i);
            }
         }
         cout<<"\n";
      }

      // for(int i = 0; i < cnt.size(); i++){
      //    cout<<cnt[i]<<endl;
      // }
   }
   return 0;
}