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

      vector<ll> arr(n + 1);

      for(ll i = 1; i <= n; i++){
         cin>>arr[i];
      }

      ll cnt = 0;
      for(ll i = 1; i <= n; i++){
         ll j = arr[i] - i;
         for(ll j = arr[i] - i; j <= n; j += arr[i]){
            if(j <= i){
               continue;
            }
            if((arr[i] * arr[j]) == (i + j)){
               cnt++;
            }
         }
      }

      cout<<cnt<<endl;
   }

   return 0;
}