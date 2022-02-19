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
      long long int num;
      cin>>num;
      if(num == 1){
         cout<<0<<endl;
         continue;
      }
      if(num == 3){
         cout<<8<<endl;
         continue;
      }

      long long int ans = 0;
      for(long long int i = 1; i <= num / 2; i++){
         ans += (i * 8 * i);
      }

      cout<<ans<<endl;
   }

   return 0;
}