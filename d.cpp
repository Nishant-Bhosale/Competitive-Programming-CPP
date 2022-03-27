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

      vector<ll> arr(n);

      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }

      ll cnt = 0;
      for(ll i = 0; i < n - 1; i++){
         ll j = i + 1;
         while(j < n){
            ll val = arr[i] + arr[j];
            if(val >= l && val <= r){
               cnt++;
            }
            j++;
         }
      }

      cout<<cnt<<endl;
   };

   return 0;
}