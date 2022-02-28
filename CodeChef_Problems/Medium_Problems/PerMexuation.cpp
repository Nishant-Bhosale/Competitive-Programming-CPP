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
      string s;
      cin>>n>>s;

      if(s[0] == '0' || s[1] == '0' || s[n] =='0'){
         cout<<"No"<<endl;
         continue;
      }

      vector<ll> arr;

      for(ll i = 0; i < n; i++){
         arr.emplace_back(i);
      }

      for(ll i = 1; i <= n; i++){
         if(s[i] == '0'){
            swap(arr[i - 1], arr[i]);
         }
      }

      for(ll i = 0; i < arr.size(); i++){
         cout<<arr[i]<<" ";
      }

      cout<<endl;
   }

   return 0;
}