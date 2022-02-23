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

      sort(arr.begin(), arr.end());
   
      if(n % 2 != 0){
         cout<<arr[(n / 2)]<<" ";
         for(ll i = (n / 2) - 1; i >= 0; i--){
            cout<<arr[n - i - 1]<<" "<<arr[i]<<" ";
         }
         continue;
      }
      for(ll i = (n / 2) - 1; i >= 0; i--){
         cout<<arr[n - i - 1]<<" "<<arr[i]<<" ";
      }



      cout<<endl;
   }

   return 0;
}