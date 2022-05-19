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
      ll n, m;
      cin>>n>>m;
      vector<ll> a(n);
      for(ll i = 0;i<n;i++) cin>>a[i];

      sort(a.begin(), a.end());
      ll ans = INT_MAX;

      for(int i = 0; i + m - 1 < a.size(); i++){
            long long val = a[i + m - 1] - a[i];         
            ans = min(ans, val);
        }
        
        cout<<ans<<endl;
   };

   return 0;
}