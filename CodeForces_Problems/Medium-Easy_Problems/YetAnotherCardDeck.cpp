#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n, q; 
   cin>>n>>q;

   vector<ll> arr(n);

   for(ll i = 0; i < n; i++){
      cin>>arr[i];
   }
   while(q--){  
      ll num;
      cin>>num;
      int idx = find(arr.begin(), arr.end(), num) - arr.begin();
      cout<<(idx + 1)<<" ";
      rotate(arr.begin(), arr.begin() + idx, arr.begin() + idx + 1);
   }
   

   return 0;
}
