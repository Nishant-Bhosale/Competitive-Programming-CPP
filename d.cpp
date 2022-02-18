#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

const ll N = 2e5 + 1;
ll arr[N][31];
void preCalc(){
   for(ll i = 1; i < N; i++){
      for(ll j = 0; j <= 30; j++){
         if(i&(1<<j)) arr[i][j] = 1;
         arr[i][j] += arr[i - 1][j];
      }
   }
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   preCalc();
   ll t;
   cin>>t;

   while(t--){
      ll l, r;
      cin>>l>>r;

      ll cnt = r - l + 1;
      ll ans = INT_FAST64_MAX;

      for(ll i = 0; i <= 30; i++){
         ll current = arr[r][i] - arr[l - 1][i];
         ans = min(ans, cnt - current);
      }

      cout<<ans<<endl;
   }

   return 0;
}