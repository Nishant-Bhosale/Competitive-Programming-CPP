#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   ll n;
   cin>>n;

   vector<ll> arr;
   vector<ll> temp;
   for(ll i = 0; i < n; i++){
      ll num;
      cin>>num;
      arr.emplace_back(num);
      temp.emplace_back(num);
   }

   bool flag = true;
   sort(arr.begin(), arr.end());
   for(ll i = 0; i < (n); i++){
      if(arr[i] == temp[i]){
         flag = true;
      }else{
         flag = false;
         break;
      }
   }

   cout<<(flag ? "NO" : "YES")<<endl;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      solve();
   }

   return 0;
}