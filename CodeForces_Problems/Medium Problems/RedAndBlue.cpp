#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   int n, m;

   cin>>n;
   vector<int> r;

   for(int i = 0; i < n; i++){
      int num;
      cin>>num;
      r.emplace_back(num);
   }

   cin>>m;
   vector<int> b;
   
   for(int i = 0; i < m; i++){
      int num;
      cin>>num;
      b.emplace_back(num);
   }

   partial_sum(r.begin(), r.end(), r.begin());
   partial_sum(b.begin(), b.end(), b.begin());

   cout<<(max(0, *max_element(r.begin(), r.end())) + max(0, *max_element(b.begin(), b.end())))<<endl;
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