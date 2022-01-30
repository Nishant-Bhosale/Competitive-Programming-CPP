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

      for(int i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
      }

      if(count(arr.begin(), arr.end(), arr[0]) == arr.size()){
         cout<<-1<<endl;
         continue;
      }

      sort(arr.begin(), arr.end());
      
      ll minVal = *min_element(arr.begin(), arr.end());
      ll ans = 0;
      for(int i = 0; i < n; i++){
         ans = __gcd(ans, arr[i] - minVal);
      }
      cout<<ans<<endl;
   }

   return 0;
}