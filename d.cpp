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
      
      if(n == 1){
         cout<<arr[0]<<endl;
         continue;
      }
      if(arr[0] != n && arr[n - 1] != n){
         cout<<-1<<endl;
         continue;
      }

      reverse(arr.begin(), arr.end());

      for(ll i = 0; i < n; i++){
         cout<<arr[i]<<" ";
      }
      cout<<"\n";
   }

   return 0;
}