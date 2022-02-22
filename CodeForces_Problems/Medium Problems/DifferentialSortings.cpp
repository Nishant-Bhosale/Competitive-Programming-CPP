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

      if(arr[n - 2] > arr[n - 1]){
         cout<<-1<<endl;
         continue;
      }

      if(arr[n - 1] < 0){
         if(is_sorted(arr.begin(), arr.end())){
            cout<<0<<endl;
         }else{
            cout<<-1<<endl;
         }
      }else{
         cout<<(n - 2)<<endl;
         for(ll i = 1; i <= n - 2; i++){
            cout<<i<<" "<<(n - 1)<<" "<<(n)<<endl;
         }
      }
   }

   return 0;
}