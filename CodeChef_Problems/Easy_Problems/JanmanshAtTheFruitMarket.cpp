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
      ll x;
      cin>>x;

      vector<ll> arr;
      for(ll i = 0; i < 3; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
      }

      sort(arr.begin(), arr.end());

      ll money = 0;
      
      money += (arr[0] * (x - 1));
      money += (arr[1]);

      cout<<money<<endl;
   }

   return 0;
}