#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;

      int c = 1;

      for(int i = 2; i < n; i++){
         if(__gcd(i, n - i - 1) == c){
            cout<<i<<" "<<(n - i - 1)<<" "<<c<<endl;
            break;
         }
      }
   }
   return 0;
}