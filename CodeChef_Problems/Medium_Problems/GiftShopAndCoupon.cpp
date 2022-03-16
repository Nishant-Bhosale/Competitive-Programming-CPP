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

      vector<ll> arr(n);

      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }

      ll sum = accumulate(arr.begin(), arr.end(), 0LL);

      if(k >= sum){
         cout<<n<<endl;
         continue;
      }

      sort(arr.begin(), arr.end()); 

      // ll temp = k;
      // ll idx = 0;
      // ll cntE = 0;
      // while(temp > 0){
      //    temp -= arr[idx];
      //    idx++;
      //    cntE++;
      // }

      // ll val = ceil(arr[n - 1]/2);
      // k -= val;

      // ll cntT = 1, anIdx = 0;

      // while(k > 0){
      //    k -= arr[anIdx];
      //    anIdx++;
      //    cntT++;
      // }

      if(n == 1){
         if(k < (arr[0] + 1)/2){
            cout<<0<<endl;
         }else{
            cout<<1<<endl;
         }
         continue;
      }
      ll cnt = 0;
      for(ll i = 0; i < n; i++){
         if(k - arr[i] >= 0){
            cnt++;
            k -= arr[i];
         }else{
            if(k - (arr[i] + 1) / 2 >= 0){
               cnt++;
               break;
            }
         }
         if(k <= 0){
            break;
         }
      }

      cout<<cnt<<endl;
   }

   return 0;
}