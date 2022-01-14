#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      ll px, py;
      cin>>px>>py;

      string s;
      cin>>s;

      map<char, int> mp;

      for(int i = 0; i < s.size(); i++){
         mp[s[i]]++;
      }

      if(px >= 0 && py >= 0){
         if(mp['R'] >= px && mp['U'] >= py){
            cout<<"YES"<<endl;
         }else{
            cout<<"NO"<<endl;
         }
      }else if(px >= 0 && py <= 0){
         if(mp['R'] >= px && mp['D'] >= abs(py)){
            cout<<"YES"<<endl;
         }else{
            cout<<"NO"<<endl;
         }
      }else if(px <= 0 && py <= 0){
         if(mp['L'] >= abs(px) && mp['D'] >= abs(py)){
            cout<<"YES"<<endl;
         }else{
            cout<<"NO"<<endl;
         }
      }else if(px <= 0 && py >= 0){
         if(mp['L'] >= abs(px) && mp['U'] >= py){
            cout<<"YES"<<endl;
         }else{
            cout<<"NO"<<endl;
         }
      }else{
         cout<<"NO"<<endl;
      }
   }
   return 0;
}