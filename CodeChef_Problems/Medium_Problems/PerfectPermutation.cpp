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
      ll n, k;
      cin>>n>>k;

      if(n == k){
         for(ll i = 1; i <= n; i++){
            cout<<i<<" ";
         }
         cout<<"\n";
         continue;
      }

      cout<<(n - k + 1)<<" ";
      for(ll i = 1; i < (n - k + 1); i++){
         cout<<i<<" ";
      }
      for(ll i = (n - k + 2); i <= n; i++){
         cout<<i<<" ";
      }

      cout<<endl;
   }

   return 0;
}