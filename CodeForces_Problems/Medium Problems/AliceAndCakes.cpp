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
      ll n, sum = 0;
      cin>>n;
      map<ll, ll> mp;
      for(ll i = 0;i<n;i++){
         ll num;
         cin>>num;
         sum += num;
         mp[num]++;
      };

      if(n == 1){
         cout<<"YES"<<endl;
         continue;
      }

      priority_queue<ll> pq;

      pq.push(sum);
      while(pq.size() < n){
         ll x = pq.top();
         pq.pop();
         ll val1 = (x / 2), val2 = ((x + 1)/ 2);
         if(mp.count(val1)){
            mp[val1]--; 
            n--;
         }else{
            pq.push(val1);
         }
         if(mp[val1] == 0){
            mp.erase(val1);
         }
         if(mp.count(val2)){
            mp[val2]--;
            n--;
         }else{
            pq.push(val2);
         }
         if(mp[val2] == 0){
            mp.erase(val2);
         }
      }

      if(pq.size() == 0){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   };

   return 0;
}