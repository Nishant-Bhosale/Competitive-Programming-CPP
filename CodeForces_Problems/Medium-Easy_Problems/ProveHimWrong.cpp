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
      ll N = n;

      if(n > 19){
         cout<<"NO"<<endl;
         continue;
      }

      cout<<"YES"<<endl;

      vector<ll> arr(n);
      arr[0] = 1;
      for(ll i = 1; i < n; i++){
         arr[i] = arr[i - 1] * 2 + arr[i - 1];
         // cout<<(pow(3, i))<<" ";
      }

      for(ll i = 0; i < arr.size(); i++){
         cout<<arr[i]<<" ";
      }

      cout<<endl;
   }

return 0;
}