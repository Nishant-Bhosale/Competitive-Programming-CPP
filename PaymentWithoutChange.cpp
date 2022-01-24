#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
      ll a, b, n, S;
      cin>>a>>b>>n>>S;

      // for(int i = 0; i <= a; i++){
      //    for(int j = 0; j <= b; j++){
      //       if((i * n) + j == S){
      //          cout<<"YES"<<endl;
      //          return;
      //       }
      //    }
      // }

      if(S % n > b){
         cout<<"NO"<<endl;
         return;
      }
      if((a*n) + b >= S){
         cout<<"YES"<<endl;
         return;
      }
      cout<<"NO"<<endl;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      solve();
   }

   return 0;
}