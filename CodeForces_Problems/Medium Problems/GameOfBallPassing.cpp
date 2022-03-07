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
 
      vector<ll> arr(n);
 
      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }
 
      if(count(arr.begin(), arr.end(), 0) == n){
         cout<<0<<endl;
         continue;
      }

      sort(arr.begin(), arr.end());
      ll sum = accumulate(arr.begin(), arr.end(), 0LL);
      ll maxVal = *max_element(arr.begin(), arr.end());
      if(maxVal * 2 <= sum){
         cout<<1<<endl;
      }else{
         cout<<((2 * maxVal) - sum)<<endl;
      }
   }
   return 0;
}