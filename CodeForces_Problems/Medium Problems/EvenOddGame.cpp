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

      vector<ll> arr;
      
      for(ll i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
      }

      sort(arr.begin(), arr.end(), greater<int>());
      ll ans = 0;
      for(ll i = 0; i < n; i++){
         if(i % 2 == 0){
            if(arr[i] % 2 == 0){
               ans += arr[i];
            }
         }else{
            if(arr[i] % 2 == 1){
               ans -= arr[i];
            }
         }
      }

      if (ans == 0) {
         cout << "Tie\n";
      } else if (ans > 0) {
         cout << "Alice\n";
      } else {
         cout << "Bob\n";
      }
   }
   
   return 0;
}