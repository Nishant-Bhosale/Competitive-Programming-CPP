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
   vector<ll> a(n);
   unordered_set<ll> st;

   for(int i = 0; i < n; i++){
      ll num;
      cin>>num;
      a.emplace_back(num);
      st.insert(num);
   }

   if(st.size() == 1){
      cout<<0<<endl;
      return;
   }else{
      cout<<(double)
   }


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