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
      for(ll i = 0;i<n;i++) {
         cin>>arr[i];
         mp[arr[i]]++;
      }

      if(count(all(arr), arr[0]) == n || n == 1){
         cout<<0<<endl;
         continue;
      }

      ll freq = INT_MIN, num;
      for(auto it : mp){
         if(it.second > freq){
            freq = it.second;
            num = it.first;
         }
      }

      // n -= freq;

      ll cnt = 1, temp = n;
      while(n > 0){
         // if(freq > n){
         //    cnt += (n);
         //    n = 0;
         //    break;
         // }

         if(freq >= ((temp + 1) / 2)){
            if(freq == (temp + 1) / 2){
               cnt += temp / 2;
            }else{
               cnt += (temp - freq);
            }
            break;
         }

         n -= freq;
         
         cnt += freq;
         cnt++;
         freq += freq;
      }

      cout<<cnt<<endl;
   };

   return 0;
}