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
      ll k, n, m;
      cin>>k>>n>>m;

      vector<ll> arr1(n);
      for(ll i = 0;i<n;i++) cin>>arr1[i];

      vector<ll> arr2(m);
      for(ll i = 0;i<m;i++) cin>>arr2[i];
   
      cout<<endl;
   };

   return 0;
}