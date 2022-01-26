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
      ll n, d;

      cin>>n>>d;

      if(d <= n){
         cout<<"YES"<<endl;
         continue;
      }
      bool flag = false;
      for(int i = 0; i < (int)sqrt(d) + 10; i++){
         ll val = i + ((d + i) / (i + 1));
         if(val <= n){
            flag = true;
            break;
         }
      }

      cout<<(flag ? "YES" : "NO")<<endl;
   }

   return 0;
}