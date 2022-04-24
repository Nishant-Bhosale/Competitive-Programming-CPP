#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      string s;
      ll n;
      cin>>n>>s;

      bool mainFlag = true;
      ll a = 0, b = 0;
      
      s += 'W';

      for(auto c : s){
         if(c == 'W'){
            if(!a && !b){
               continue;
            }
            if(!a || !b){
               mainFlag = false;
            }
            a = b = 0;
            continue;
         }
         a += (c == 'R');
         b += (c == 'B');
      }

      if(!mainFlag){
         cout<<"NO"<<endl;
      }else{
         cout<<"YES"<<endl;
      }

   };

   return 0;
}