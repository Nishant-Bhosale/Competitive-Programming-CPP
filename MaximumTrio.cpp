#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;
      vector<ll> arr;
      for(int i = 0; i < n; i++){
         ll num; cin>>num;
         arr.emplace_back(num);
      }
      ll ans;
      sort(arr.begin(), arr.end());

      ans = (arr[arr.size() - 1] - arr[0]) * arr[arr.size() - 2];
      cout<<ans<<endl;
   }

   return 0;
}