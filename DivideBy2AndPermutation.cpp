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
      ll n;
      cin>>n;
      vector<ll> arr;
      vector<int> used(n + 1, false);
      for(int i = 0; i < n; i++){
         ll num; 
         cin>>num;
         arr.emplace_back(num);
      }

      sort(arr.begin(), arr.end(), [](ll a, ll b){
         return a > b;
      });

      bool ok = true;

      for(int i = 0; i < n; i++){
         ll x = arr[i];

         while(x > n || used[x]){
            x /= 2;
         }

         if(x > 0) used[x] = true;
         else ok = false;
      }

      cout<<(ok ? "YES" : "NO")<<endl;
   }

   return 0;
}