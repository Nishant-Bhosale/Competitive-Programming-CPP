#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void leftRotate(ll *nums, ll n, ll k){
   k %= n;
   reverse(nums, nums + k);
   reverse(nums + k, nums + n);
   reverse(nums, nums + n);
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      ll n;
      cin>>n;
      
      ll arr[n];
      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }
      ll ans [n - 1];
      for(ll i = n - 1; i >= 0; i--){
         ll x;
         for(x = 0; x < i; x++){
            if(arr[x] == i + 1LL){
               break;
            }
         }

         if(x == i) x--;
         leftRotate(arr, i + 1LL, x + 1LL);
         ans[i] = x + 1;
      }

      for(ll i = 0; i < n; i++){
         cout<<ans[i]<<" ";
      }

      cout<<endl;
   }

   return 0;
}