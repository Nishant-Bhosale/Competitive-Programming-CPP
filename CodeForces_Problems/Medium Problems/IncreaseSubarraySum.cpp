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

      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }

      vector<ll> ans(n + 1, INT_MIN);

      ans[0] = 0;

      for(ll i = 0; i < n; i++){
         ll temp = 0;
         for(ll j = i; j < n; j++){
            temp += arr[j];
            ans[j - i + 1] = max(temp, ans[j - i + 1]);
         }
      }

      for(ll i = 0; i <= n; i++){
         ll tempAns = 0;
         for(ll j = 0; j <= n; j++){
            tempAns = max(tempAns, min(i, j) * x + ans[j]);
         }
         cout<<tempAns<<" ";
      }
      cout<<endl;
   }

   return 0;
}