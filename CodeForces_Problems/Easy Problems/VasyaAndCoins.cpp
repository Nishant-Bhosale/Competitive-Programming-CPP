#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      ll a, b;
      cin>>a>>b;

      if(a == 0){
         cout<<(1)<<endl;
         continue;
      }

      if(b == 0){
         cout<<(a + 1)<<endl;
         continue;
      }

      cout<<(a + ((b * 2) + 1))<<endl;
   };

   return 0;
}