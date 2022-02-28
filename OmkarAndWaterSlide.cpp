#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vl vector<long long>
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

      vl arr(n);
      rep(0, n){
         cin>>arr[i];
      }

      if(is_sorted(arr.begin(), arr.end())){
         cout<<0<<endl;
         continue;
      }

      ll cnt = 0;

      for(ll i = 0; i < n - 1; i++){
         if(arr[i] <= arr[i + 1]){
            continue;
         }
         cnt += abs(arr[i] - arr[i + 1]);
      }


      //Brute force
      // for(ll i = 0; i < n; i++){
      //    maxVal = max(maxVal, arr[i]);
      //    ll j = i + 1;
      //    while(j < n && arr[j] < maxVal){
      //       cnt += (maxVal - arr[j]);
      //       maxVal = arr[j];
      //       arr[j] = arr[j - 1];
      //       j++;
      //    }
      //    if(is_sorted(arr.begin(), arr.end())){
      //       break;
      //    }
      // }

      cout<<cnt<<endl;
   }

   return 0;
}