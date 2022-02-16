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
   vector<ll> arr(n);

   for(ll i = 0; i < n; i++){
      cin>>arr[i];
   }

   if(n == 1 && arr[0] == 1){
      cout<<"YES"<<endl;
      return;
   }

   if(count(arr.begin(), arr.end(), 1) == arr.size()){
      cout<<"NO"<<endl;
      return;
   }
   if(count(arr.begin(), arr.end(), 0) == arr.size()){
      cout<<"NO"<<endl;
      return;
   }
   if(arr[0] == 0 && arr[1] == 0){
      cout<<"NO"<<endl;
      return;
   }

   ll cnt1 = count(arr.begin(), arr.end(), 1);
   ll cnt0 = count(arr.begin(), arr.end(), 0);

   if(n % 2 == 0){
      if(cnt1 == cnt0){
         ll idx = 0;
         for(ll i = 0; i < n; i++){
            if(arr[i] == 1 && arr[i + 1] == 0 && i < n){
               i++;
               continue;
            }
            if(arr[i] == 0 && arr[i + 1] == 1 && i < n){
               swap(arr[i], arr[i + 1]);
               idx = i;
               break;
            }
         }

         bool flag = true;
         for(ll i = idx; i < n; i++){
            if(arr[i] == 1 && arr[i + 1] == 0 && i < n){
               i++;
               continue;
            }else{
               flag = false;
            }
         }
         cout<<(flag ? "YES" : "NO")<<endl;

      }else{
         cout<<"NO"<<endl;
      }
      return;
   }else{
      if(abs(cnt1 - cnt0) == 1){
         ll idx = 0;
         for(ll i = 0; i < n; i++){
            if(arr[i] == 1 && arr[i + 1] == 0 && i < n){
               i++;
               continue;
            }
            if(arr[i] == 0 && arr[i + 1] == 1 && i < n){
               swap(arr[i], arr[i + 1]);
               idx = i;
               break;
            }
         }

         bool flag = true;
         for(ll i = idx; i < n; i++){
            if(arr[i] == 1 && arr[i + 1] == 0 && i < n){
               i++;
               continue;
            }else{
               flag = false;
            }
         }
         cout<<(flag ? "YES" : "NO")<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }
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