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

      vector<ll> arre;
      vector<ll> arro;
      for(ll i = 0; i < n; i++){
         ll num;
         cin>>num;
         if(num % 2 == 0){
            arre.emplace_back(num);
         }else{
            arro.emplace_back(num);
         }
      }

      if(is_sorted(arre.begin(), arre.end()) && is_sorted(arro.begin(), arro.end())){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }
   return 0;
}