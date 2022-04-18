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
      ll n, r, b;
      cin>>n>>r>>b;

      ll val = r / (b + 1);
      ll q = r % (b + 1);
      for(ll i = 0; i < q; i++){
         cout<<string(val + 1, 'R')<<'B';
      }
      for(ll i = q; i < b; i++){
         cout<<string(val,'R')<<'B';
      }
      cout<<string(val, 'R')<<endl;
   };

   return 0;
}