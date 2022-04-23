#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      vector<ll> odds; 
      vector<ll> evens;
      for(ll i = 1; i <= n; i++){
         ll num;
         cin>>num;
         if(i % 2 == 0){
            odds.emplace_back(num);
         }else{
            evens.emplace_back(num);
         }
      }

      bool flag1 = true, flag2 = true;
      for(ll i = 0; i < odds.size() - 1; i++){
         if(odds[i] % 2 != odds[i + 1] % 2){
            flag1 = false;
         }
      }
      for(ll i = 0; i < evens.size() - 1; i++){
         if(evens[i] % 2 != evens[i + 1] % 2){
            flag2 = false;
         }
      }

      if(flag1 && flag2){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   };

   return 0;
}