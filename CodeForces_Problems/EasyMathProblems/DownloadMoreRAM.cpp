#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   ll n, k;
   cin>>n>>k;

   vector<pair<ll,ll>> nArr;

   for(int i = 0; i < n; i++){
      ll num;
      cin>>num;
      nArr.emplace_back(num, 0);
   }

   for(int i = 0; i < n; i++){
      ll num;
      cin>>num;
      nArr[i].second = num;
   }

   sort(nArr.begin(), nArr.end());

   for(int i = 0; i < nArr.size(); i++){
      if(k >= nArr[i].first){
         k += nArr[i].second;
      }else{
         break;
      }
   }

   cout<<k<<endl;
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