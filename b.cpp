#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<pair<int,int>>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll n, t;
   cin>>n>>t;
   ll minVal = 1e9;
   int idx = 0;

   for(int i = 1; i <= n; i++){
      ll s, d;
      cin>>s>>d;

      while(s < t){
         s += d;
      }

      if(s < minVal){
         minVal = s;
         idx = i;
      }

   }
   cout<<idx<<endl;

return 0;
}