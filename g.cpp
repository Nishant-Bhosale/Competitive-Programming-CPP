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
      ll n;
      cin>>n;

      vector<ll> arr(n);
      vector<ll> pre(n);
      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }

      sort(arr.begin(), arr.end());
      bool flag = false;
      ll ans = 0;
      for(ll i = 0; i < n && i + 1 < n - i - 1; i++){
         ans += arr[n - i - 1] - arr[i];
         if(ans > arr[i + 1]){
            flag = true;
            break;
         }
      }

      cout<<(flag ? "Yes" : "No")<<endl;
   }

   return 0;
}