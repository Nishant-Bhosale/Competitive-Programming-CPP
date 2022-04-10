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

      vector<ll> arr1(n);
      vector<ll> arr2(n);

      for(ll i = 0; i < n; i++){
         cin>>arr1[i];
      }

      for(ll i = 0; i < n; i++){
         cin>>arr2[i];
      }

      ll ans = 0;
      for(ll i = 0; i < n; i++){
         if(arr1[i] > arr2[i]){
            swap(arr1[i], arr2[i]);
         }
      }

      for(ll i = 0; i < n - 1; i++){
         ans += abs(arr1[i] - arr1[i + 1]);
         ans += abs(arr2[i] - arr2[i + 1]);
      }

      cout<<ans<<endl;
   };

   return 0;
}