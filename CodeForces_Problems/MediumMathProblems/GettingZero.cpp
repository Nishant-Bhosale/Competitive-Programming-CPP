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

 
      ll n;
      cin>>n;
      vector<ll> arr(n);
      for(ll i = 0;i<n;i++) {
         cin>>arr[i];
         if(arr[i] == 0){
            cout<<0<<" ";
            continue;
         }
         ll ans = 15;
         for(ll j = 0; j <= 15; j++){
            ll m = arr[i] + j; 
            ll cnt = 0;
            while(m % 2 == 0){
               cnt++;
               m /= 2;
            }

            ans = min(ans, ((15 + j) - cnt));
         }
         cout<<ans<<" ";
      };
      
      cout<<endl;
   return 0;
}