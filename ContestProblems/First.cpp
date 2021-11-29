#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;

   cin>>t;
   while(t--){
      int n;
      long long mx = 0, count = 1, res = 0;
      cin>>n;

      for(int i = 0; i < n; i++){
         long long b;
         cin>>b;
         while(b % 2 == 0){
            b/=2;
            count*=2;
         }
         mx = max(mx, b);
         res += b;
      }

      res += mx*count - mx;
      cout<<res<<endl;
   }
   
   return 0;
}