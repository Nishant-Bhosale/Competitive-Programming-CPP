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

      vector<pair<ll,ll>> neg;
      vector<pair<ll,ll>> pos;
      ll sum = 0;
      for(ll i = 0; i < n; i++){
         ll num;
         cin>>num;
         if(i % 2 == 0){
            sum += abs(num);
            pos.emplace_back(abs(num), i);
         }else{
            sum -= abs(num);
            neg.emplace_back(abs(num), i);
         }
         arr.emplace_back(abs(num));
      }

      sort(neg.begin(), neg.end());
      sort(pos.begin(), pos.end());

      swap(arr[pos[0].second], arr[neg[neg.size() - 1].second]);

      ll anSum = 0;
      for(ll i = 0; i < n; i++){
         if(i % 2 == 0){
            anSum += arr[i];
         }else{
            anSum -= arr[i];
         }
      }

      cout<<max(sum,anSum)<<endl;
   }

   return 0;
}