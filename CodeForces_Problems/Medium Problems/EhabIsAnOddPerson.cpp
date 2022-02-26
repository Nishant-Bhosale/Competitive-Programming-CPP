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

   vector<ll> arr(n);

   for(ll i = 0; i < n; i++){
      cin>>arr[i];
   }

   bool flag = true;
   for(ll i = 0; i < n; i++){
      if(arr[i] % 2 == 0){
         flag = true;
      }else{
         flag = false;
         break;
      }
   }
   

   if(flag){
      for(ll i = 0; i < n; i++){
         cout<<arr[i]<<" ";
      }
   }else{
      bool flagO = true;
      for(ll i = 0; i < n; i++){
         if(arr[i] % 2 != 0){
            flagO = true;
         }else{
            flagO = false;
            break;
         }
      }

      if(flagO){
         for(ll i = 0; i < n; i++){
            cout<<arr[i]<<" ";
         }
      }else{
         sort(arr.begin(), arr.end());
         for(ll i = 0; i < n; i++){
            cout<<arr[i]<<" ";
         }
      }
   }

   return 0;
}