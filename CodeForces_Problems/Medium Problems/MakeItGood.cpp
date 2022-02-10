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
      for(ll i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
      }
      ll pos = n - 1;
      while(pos > 0 && arr[pos - 1] >= arr[pos]){
         pos--;
      }
      while(pos > 0 && arr[pos - 1] <= arr[pos]){
         pos--;
      }
      cout<<pos<<endl;
   }

   return 0;
}