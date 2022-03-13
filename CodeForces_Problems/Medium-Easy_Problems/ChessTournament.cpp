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
      string s;
      cin>>n>>s;

      ll cnt1 = count(s.begin(),s.end(), '1');
      ll cnt2 = count(s.begin(), s.end(), '2');

      if(cnt2 == 1 || cnt2 == 2){
         cout<<"NO"<<endl;
         continue;
      }

      cout<<"YES"<<endl;
      
      if(cnt1 == n){
         for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
               if(i == j){
                  cout<<'X';
               }else{
                  cout<<'=';
               }
            }
            cout<<"\n";
         }
         continue;
      }

      vector<ll> idx;
      for(ll i = 0; i < n; i++){
         if(s[i] == '2'){
            idx.emplace_back(i);
         }
      }
      ll sz = idx.size();

      vector<string> res(n, string(n, '='));
      for(ll i = 0; i < n; i++){
         res[i][i] = 'X';
      }

      for(ll i = 0; i < sz; i++){
         ll x = idx[i], y = idx[(i + 1) % sz];

         res[x][y] = '+';
         res[y][x] = '-';
      }

      for(ll i = 0; i < n; i++){
         cout<<res[i]<<endl;
      }
   }

   return 0;
}