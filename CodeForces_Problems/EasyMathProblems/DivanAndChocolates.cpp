#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   int prices[101];
   cin>>t;

   while(t--){
      int n, l, r, k, count = 0;
      cin>>n>>l>>r>>k;

      for(int i = 0; i < n; i++){
         cin>>prices[i];
      }

      sort(prices, prices + n);

      for(int i = 0; i < n; i++){
         if(prices[i] >= l && prices[i] <= r && k >= prices[i]){
            k -= prices[i];
            count++;
         }
      }
      cout<<count<<endl;
   }
   return 0;
}