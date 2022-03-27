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
      ll n, x;
      cin>>n>>x;

      vector<ll> arr(n);

      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }

      ll ind = lower_bound(all(arr), x) - arr.begin();

      ind--;

      if(ind >= 0){
         cout<<arr[ind]<<endl;
      }else{
         cout<<-1<<endl;
      }
   };

   return 0;
}