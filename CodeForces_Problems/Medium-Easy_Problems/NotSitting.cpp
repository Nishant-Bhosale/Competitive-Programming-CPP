#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      ll n, m;
      cin>>n>>m;

      vector<ll> arr;

      for(ll i = 0; i < n; i++){
         for(ll j = 0; j < m; j++){
            arr.emplace_back(max(i, n - i - 1) + max(j, m - j - 1));
         }
      }

      sort(arr.begin(), arr.end());

      for(ll i = 0; i < (n * m); i++){
         cout<<arr[i]<<" ";
      }
      cout<<endl;
   }

   return 0;
}