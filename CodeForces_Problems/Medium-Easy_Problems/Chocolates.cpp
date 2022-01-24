#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n;
   cin>>n;

   vector<ll> arr;
   for(int i = 1; i <= n; i++){
      ll num;
      cin>>num;
      arr.emplace_back(num);
   }
   reverse(arr.begin(), arr.end());

   ll sum = 1e18; 
   ll ans = 0;
   for(int i = 0; i < arr.size(); i++){
      sum = min(sum - 1, arr[i]);
      sum = max(0LL, sum);
      ans += sum;
   }
   
   cout<<ans<<endl;
   return 0;
}