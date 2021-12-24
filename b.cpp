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
      int p, q, n, k;

      cin>>p>>q>>n;

      k = p / q;
      int ans = 0;
      if(k < 1){
         ans = 1 / (1 - abs(k));
      }
      if(k > 1){
         ans = 1 / (abs(k) - 1);
      }
      
      int orAns = floor(1/2 * ans * n);
      cout<<orAns<<endl;
   }

   return 0;
}