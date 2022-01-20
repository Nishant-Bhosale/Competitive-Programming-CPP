#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n, v;
   cin>>n>>v;

   if(n-1 <= v){
      cout<<(n-1)<<endl;
   }else{
      int res = v - 1;
      for(int i = 1; i <= n - v; i++){
         res += i;
      }
      cout<<res<<endl;
   }

   return 0;
}