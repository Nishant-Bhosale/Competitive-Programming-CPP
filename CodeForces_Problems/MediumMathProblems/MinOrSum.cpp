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

      vector<long long int> arr(n);
      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }

      ll ans = 0;
      for(ll i = 0; i < n; i++){
         ans |= arr[i];
      }

      cout<<ans<<endl;
   }

   return 0;
}