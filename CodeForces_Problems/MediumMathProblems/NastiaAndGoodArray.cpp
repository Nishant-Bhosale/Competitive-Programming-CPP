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

      vector<ll> arr(n + 1);

      for(ll i = 1; i < n+1; i++){
         cin>>arr[i];
      }

      bool flag = true;
      for(ll i = 2; i < n + 1; i++){
         if(!(__gcd(arr[i], arr[i - 1]) == 1)){
            flag = false;
            break;
         }
      }

      if(flag){
         cout<<0<<endl;
      }else{
         ll val = 1e9 + 7, pos = -1;

         for(ll i = 1; i < n + 1; i++){
            if(arr[i] < val){
               val = arr[i];
               pos = i;
            }
         }

         cout<<(n - 1)<<endl;
         for(ll i = 1; i < n + 1; i++){
            if(i == pos) continue;
            cout<<(pos)<<" "<<(i)<<" "<<(val)<<" "<<(val + abs(i - pos))<<endl;
         }
      }
   }

   return 0;
}