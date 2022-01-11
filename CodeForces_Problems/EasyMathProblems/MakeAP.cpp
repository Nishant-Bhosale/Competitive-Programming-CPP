#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      ll a, b, c;

      cin>>a>>b>>c;

      if(b - a == c - b){
         cout<<"YES"<<endl;
         continue;
      }

      ll diff = 2*b - a;
      if(diff > 0 && diff % c == 0){
         cout<<"YES"<<endl;
         continue;
      }
      
      ll diff2 = 2*b - c;
      if(diff2 > 0 && diff2 % a == 0){
         cout<<"YES"<<endl;
         continue;
      }

      if((c + a) % (2 * b) == 0){
         cout<<"YES"<<endl;
         continue;
      }

      cout<<"NO"<<endl;
   }

   return 0;
}