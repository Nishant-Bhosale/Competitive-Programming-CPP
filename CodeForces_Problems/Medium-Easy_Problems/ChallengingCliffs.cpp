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

      if(n == 2){
         cout<<arr[0]<<" "<<arr[1]<<endl;
         continue;
      }

      ll minVal = INT_MAX;
      ll fidx = -1;

      for(ll i = 0; i < n - 1; i++){
         if(abs(arr[i] - arr[i + 1]) < minVal){
            minVal = abs(arr[i] - arr[i + 1]);
            fidx = i + 1;
         }
      }


      for(ll i = fidx; i < n; i++){
         cout<<arr[i]<<" ";
      }
      for(ll i = 0; i < fidx; i++){
         cout<<arr[i]<<" ";
      }

      cout<<endl;
   }

   return 0;
}