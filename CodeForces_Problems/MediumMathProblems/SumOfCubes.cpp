#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
typedef long long ll;

const ll ac = 1'000'000'000'000L;
unordered_set<ll> cubes;

void precalc() {
  for (ll i = 1; i * i * i <= ac; i++) {
    cubes.insert(i * i * i);
  }
}

bool solve(){
      ll n;
      cin>>n;
      if(n == 1){
         return false;
      }

      for(ll i = 1; i * i * i <= n; i++){
         if(cubes.count(n - i*i*i)){
            return true;
         }
      }

      return false;
}

int main(){
   precalc();

   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      cout<<(solve() ? "YES" : "NO")<<endl;
   }

   return 0;
}