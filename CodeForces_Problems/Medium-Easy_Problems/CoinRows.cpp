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
      ll n;
      cin>>n;

      vector<vector<ll>> arr;
      vector<ll> arr2(n);
      vector<ll> arr1(n);

      for(ll i = 0; i < n; i++){
         cin>>arr1[i];
      }
      for(ll i = 0; i < n; i++){
         cin>>arr2[i];
      }

      arr.emplace_back(arr1);
      arr.emplace_back(arr2);

      ll val1 = 0;
      ll val2 = 0;
      ll ans = INT_MAX;
      for(ll i = 0; i < n; i++){
         val1 += arr[0][i];
      }

      for(ll i = 0; i < n; i++){
         val1 -= arr[0][i];
         ans = min(ans, max(val1, val2));
         val2 += arr[1][i];
      }

      cout<<ans<<endl;

      // for(ll i = 0; i < 2; i++){
      //    for(ll j = 0; j < n; j++){
      //       cout<<arr[i][j]<<" ";
      //    }
      //    cout<<endl;
      // }

      // ll pos2 = 0;
      // ll maxVal2 = -1;
      // for(ll i = 0; i < 1; i++){
      //    for(ll j = 0; j < n; j++){
      //       if(arr[i][j] + arr[i + 1][j] > maxVal2){
      //          pos2 = j;
      //          maxVal2 = max(maxVal2, arr[i][j] + arr[i + 1][j]);
      //       }
      //    }
      // }
   };

   return 0;
}