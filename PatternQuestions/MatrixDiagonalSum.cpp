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
      ll n, m;
      cin>>n>>m;

      vector<vector<ll>> arr(n, vector<ll>(m));

      for(ll i = 0; i < n; i++){
         for(ll j = 0; j < m; j++){
            cin>>arr[i][j];
         }
      }
     
      ll sum = 0; 

      for(ll i = 0; i < n; i++){
         for(ll j = 0; j < m; j++){
            if(i == j){
               sum += arr[i][j];
            }
         }
      }
     
      for(ll i = n - 1; i >= 0; i--){
         for(ll j = m - 1; j >= 0; j--){
            if(i + j + 1 == n){
               sum += arr[i][j];
            }
         }
      }

      if(n % 2 != 0){
         sum -= (arr[n/2][n/2]);
      }

      cout<<sum<<endl;
   };

   return 0;
}