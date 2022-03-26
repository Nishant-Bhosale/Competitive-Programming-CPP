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
      ll n;
      cin>>n;
      vector<ll> arr(n);
      map<ll,ll> mp;
      for(ll i = 0;i<n;i++){
         cin>>arr[i];
         mp[arr[i]]++;
      }

      if(count(all(arr), arr[0]) == n){
         cout<<"YES"<<endl;
         continue;
      }

      ll cnt1 = count(all(arr), 1);

      // sort(all(arr));
      // bool consec = false;
      // for(ll i = 0; i < n - 1; i++){
      //    if(arr[i] + 1 == arr[i + 1]){
      //       consec = true;
      //       break;
      //    }
      // }

      // cout<<((cnt1 && consec) ? "NO" : "YES")<<endl;

      bool flag = false;
      for(auto it : mp){
         if(mp[it.first] && (mp[it.first + 1])){
            flag = true;
            break;
         }
      }

      cout<<(flag && cnt1 ? "NO" : "YES")<<endl;
   };

   return 0;
}