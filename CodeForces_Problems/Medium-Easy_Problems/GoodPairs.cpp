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
      vector<pair<ll, ll>> arr;
      for(ll i = 0;i<n;i++){
         ll num;
         cin>>num;
         arr.emplace_back(make_pair(num, i + 1));
      }

      if(n == 1){
         cout<<1<<" "<<1<<endl;
         continue;
      }

      sort(all(arr));

      cout<<arr[0].second<<" "<<arr[n - 1].second<<endl;
   };

   return 0;
}