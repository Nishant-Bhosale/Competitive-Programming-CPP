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
      ll n, l, r;
      cin>>n>>l>>r;

      vector<ll> arr;

      for(ll i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
      }

      sort(all(arr));

      ll cnt = 0;
      for(ll i = 0; i < n; i++){
         cnt += upper_bound(all(arr), r - arr[i]) - arr.begin();
         cnt -= lower_bound(all(arr), l - arr[i]) - arr.begin();

         if(l <= 2 * arr[i] && r >= 2 * arr[i]){
            cnt--;
         }
      }

      cout<<(cnt / 2)<<endl;
   };

   return 0;
}