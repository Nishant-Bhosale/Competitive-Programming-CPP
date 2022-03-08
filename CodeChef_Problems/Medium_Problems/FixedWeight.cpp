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
      ll n, x;
      cin>>n>>x;

      vector<ll> arr;

      bool flag = false;

      for(ll i = 1; i <= n; i++){
         if(x % i == 0 && (x / i) <= (n - i + 1)){
            flag = true;
            break;
         }
      }

      cout<<(flag ? "Yes" : "No")<<endl;
   }

   return 0;
}