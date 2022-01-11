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
      ll minE = min(a, min(b,c));
      ll diff1 = c - b;
      ll diff2 = b - a;

      if((diff1) % minE == 0 && (diff2) % minE == 0){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }

   return 0;
}