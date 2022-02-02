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
      ll a, b;
      cin>>a>>b;

      // UNOPTIMAL SOLUTION

      // ll cnt = 0;
      // for(ll i = 1; i <= a; i++){
      //    for(ll j = 1; j <= b; j++){
      //       string s = to_string(i) + to_string(j);
      //       if(i + j + (i * j) == stoi(s)){
      //          cnt++;
      //       }
      //    }
      // }

      ll ans = a * (to_string(b + 1).size() - 1);
      cout<<ans<<endl;
   }

   return 0;
}