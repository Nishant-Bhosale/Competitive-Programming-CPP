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
      ll a, b, c, d;
      cin>>a>>b>>c>>d;

      if(a <= b){
         cout<<b<<endl;
         continue;
      }

      if((c - d) <= 0){
         cout<<-1<<endl;
         continue;
      }

      // ll totalTime = b;
      ll val = b;

      // while(totalTime < a){
      //    totalTime += (c - d);
      //    val += c;
      // }
      ll abc = ceil((double)(a - b) / (double)(c - d)) * c;
      // cout<<ceil((a - b) / (c - d))<<endl;
      val += abc;
      cout<<val<<endl;
   }

   return 0;
}