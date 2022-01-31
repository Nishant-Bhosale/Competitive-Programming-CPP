#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      ll n;
      cin>>n;
      string s;
      cin>>s;

      if(s.size() == 1){
         cout<<"YES"<<endl;
         continue;
      }

      if(s.size() == 2){
         if(s[0] == s[1]){
            cout<<"NO"<<endl;
         } else{
            cout<<"YES"<<endl;
         }

      }else{
         cout<<"NO"<<endl;
      }

   }

   return 0;
}