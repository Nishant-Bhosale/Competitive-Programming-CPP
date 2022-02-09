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

      ll c1 = 0, c2 = 0;
      if(n == 1){
         cout<<1<<" "<<0<<endl;
         continue;
      }

      if(n % 3 == 0){
         c1 = (n / 3);
         c2 = (n - c1) / 2;
         cout<<c1<<" "<<c2<<endl;
      }else if(n % 3 == 1){
         cout<<((n / 3) + 1)<<" "<<(n / 3)<<endl;
      }else if(n % 3 == 2){
         cout<<((n - 2) / 3)<<" "<<((n + 1) / 3)<<endl;
      }
   }

   return 0;
}