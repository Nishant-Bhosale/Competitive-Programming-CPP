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
      ll n;
      cin>>n;

      if(n % 7 == 0){
         cout<<n<<endl;
         continue;
      }

      ll rem = n % 7;
      ll lastNum = n % 10;

      if(lastNum - rem > 0){
         cout<<(n - rem)<<endl;
      }else{
         cout<<(n + (7 - rem))<<endl;
      }
      // cout<<(377 / 7)<<endl;
      // cout<<(377 % 7)<<endl;
   }

   return 0;
}