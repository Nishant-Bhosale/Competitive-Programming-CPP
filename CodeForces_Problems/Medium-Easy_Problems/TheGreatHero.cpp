#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100010;
 
int A, B, n;
int a[MAXN], b[MAXN];

void solve(){
   cin>>A>>B>>n;
   for(int i = 1; i <= n; ++i){
      cin>>a[i];
   }

   for(int i = 1; i <= n; ++i){
      cin>>b[i];
   }

   int64_t damage = 0;

   for(int i = 1; i <= n; ++i){
      damage += int64_t(b[i] + A - 1) / A * a[i];
   }

   for(int i = 1; i <= n; ++i){
      if(B - (damage - a[i]) > 0){
         cout<<"YES"<<endl;
         return;
      }
   }
   cout<<"NO"<<endl;
}

int main(){
   int t;

   cin>>t;

   while(t--){
      solve();
   }

   return 0;
}