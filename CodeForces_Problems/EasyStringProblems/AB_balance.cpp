#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;

   cin>>t;

   while(t--){
      string s;
      cin>>s;

      int cab = 0, cba = 0, curId = 0;

      for(int i = 0; i < s.length(); i++){
         if(s[curId] == 'a' && s[curId + 1] == 'b'){
            cab++;
         }else if(s[curId] == 'b' && s[curId + 1] == 'a'){
            cba++;
         }
         curId++;
      }

      if(cab == cba){
         cout<<s<<endl;
      }else{
         if(s[0] != s[s.length() - 1]){
            s[0] = s[s.length() - 1];
            cout<<s<<endl;
         }
      }
      
   }

   return 0;
}