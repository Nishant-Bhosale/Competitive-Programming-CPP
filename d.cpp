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

      for(ll i= 0; i < n; i++){
         cin>>arr[i];
      }

      if(is_sorted(arr.begin(), arr.end())){
         cout<<"YES"<<endl;
         continue;
      }

      bool flag = true;
      for(ll i = 0; i < n; i++){
         ll sum = 0;
         if(arr[i] <= arr[i + 1] && i < n){
            continue;
         }
         if(arr[i] > arr[i + 1] && i < n){
            if((arr[i] + arr[i + 1] ) % 2 == 1){
               swap(arr[i], arr[i + 1]);
               flag = true;
            }else{
               flag = false;
               break;
            }
         }
      }
      for(ll i = 0; i < n; i++){
         ll sum = 0;
         if(arr[i] <= arr[i + 1] && i < n){
            continue;
         }
         if(arr[i] > arr[i + 1] && i < n){
            if((arr[i] + arr[i + 1] ) % 2 == 1){
               swap(arr[i], arr[i + 1]);
               flag = true;
            }else{
               flag = false;
               break;
            }
         }
      }

      
      for(ll i = 0; i < n; i++){
         ll sum = 0;
         if(arr[i] <= arr[i + 1] && i < n){
            continue;
         }
         if(arr[i] > arr[i + 1] && i < n){
            if((arr[i] + arr[i + 1] ) % 2 == 1){
               swap(arr[i], arr[i + 1]);
               flag = true;
            }else{
               flag = false;
               break;
            }
         }
      }

      if(flag && is_sorted(arr.begin(), arr.end())){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }

   return 0;
}