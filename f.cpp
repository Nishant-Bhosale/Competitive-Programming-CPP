#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   ll n;
   cin>>n;

   vector<ll> arr(n + 1);

   for(ll i = 0; i < 2*n; i++){
      ll num;
      cin>>num;
      arr[num]++;
   }

   for(ll i = 0; i <= n; i++){
      if(arr[i] == 0){
         break;
      }
      if(arr[i] < 2){
         cout<<"NO"<<endl;
         return;
      }
   }
   cout<<"YES"<<endl;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
     solve();
   }

   return 0;
}