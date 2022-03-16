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
      ll n, x;
      cin>>n>>x;
      vector<ll> arr(n);
      for(ll i = 0;i<n;i++) cin>>arr[i];
      
      if(n == x){
         cout<<"NO"<<endl;
         continue;
      }

      if(is_sorted(arr.begin(), arr.end())){
         cout<<"YES"<<endl;
         continue;
      }

      if(n >= 2 * x){
         cout<<"YES"<<endl;
         continue;
      }

      vector<ll> temp;
      temp = arr;

      sort(temp.begin(), temp.end());

      bool flag = true;
      for(ll i = n - x; i < x; i++){
         if(arr[i] != temp[i]){
            flag = false;
            break;
         }
      }
      
      if(flag){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }

   return 0;
}