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
      
      vector<ll> arr;
      bool isZeroAdded = false;

      for(ll i = n - 1; i >= 1; i--){
         arr.emplace_back(i);
         if(__builtin_popcount(i) == 1 && !isZeroAdded){
            arr.emplace_back(0);
            isZeroAdded = true;
         }
      }

      for(int i = 0; i < arr.size(); i++){
         cout<<arr[i]<<" ";
      }
      cout<<endl;
   }

   return 0;
}