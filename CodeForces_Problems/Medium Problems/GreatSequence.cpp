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
      ll n, x;
      cin>>n>>x;

      vector<ll> arr(n);
      vector<ll> boole(n);
      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }

      sort(arr.begin(), arr.end());

      ll j = 0, q = 0;
      ll ans = 0;
      for(ll i = 0; i < n; i++){
         if(boole[i]){
            continue;
         }
         if(arr[i] * x > arr[j]){
            while(arr[i] * x >= arr[j] && j < n){
               q = ++j;
            }
            q = --j;
         }
         if(i < q && arr[i] * x == arr[q]){
            boole[q--] = 1;
         }else{
            ans++;
         }
      }

      cout<<ans<<endl;
   }

   return 0;
}