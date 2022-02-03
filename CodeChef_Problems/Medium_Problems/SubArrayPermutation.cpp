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
      ll n, k;
      cin>>n>>k;

      if(n >= 2 && k == 1){
         cout<<-1<<endl;
         continue;
      }

      for(int i = 1; i < k; i++){
         cout<<i<<" ";
      }

      for(int i = n; i >= k; i--){
         cout<<i<<" ";
      }
      cout<<endl;
   }

   return 0;
}