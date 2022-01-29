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
      ll n, k;
      cin>>n>>k;

      ll sum = 0;
      vector<ll> arr;

      for(int i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
         sum += num;
      }

      if(n == 1){
         cout<<arr[0]<<endl;
         continue;
      }
      if(k == 0){
         cout<<sum<<endl;
         continue;
      }

      sort(arr.begin(), arr.end(), greater<int>());

      ll ans = 0;
      ll ab = k;
      for(int i = 0; i < k; i++){
         ans += (arr[ab] / arr[i]);
         ab++;
      }

      for(int i = (2 * k); i < arr.size(); i++){
         ans += arr[i];
      }

      cout<<ans<<endl;
   }

   return 0;
}