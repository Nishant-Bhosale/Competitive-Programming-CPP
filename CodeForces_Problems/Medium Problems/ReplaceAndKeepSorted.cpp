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

      ll n, q, k;
      cin>>n>>q>>k;

      vector<ll> arr(n);
      for(ll i = 0;i<n;i++) cin>>arr[i];

      vector<pair<ll, ll>> que;

      for(ll i = 0; i < q; i++){
         ll num1, num2;
         cin>>num1>>num2;
         que.emplace_back(make_pair(num1, num2));
      }

      // for(ll i = 0; i < q; i++){
      //    cout<<que[i].first<<" "<<que[i].second<<endl;
      // }

      for(ll i = 0; i < q; i++){
         cout<<((k + ((arr[que[i].second - 1]) - (arr[que[i].first - 1]) + 1)) - 2*((que[i].second - 1) - (que[i].first - 1) + 1))<<endl;
      }

   return 0;
}