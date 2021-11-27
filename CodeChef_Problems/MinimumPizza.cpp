#include<iostream>
using namespace std;

int gcd(int a, int b){
   if(b == 0){
      return a;
   }
   return gcd(b, a%b);
}

int main(){
   int t;

   cin>>t;

   while(t--){
      int n, k;

      cin>>n>>k;
         //TIME LIMIT EXCEEDED ON THIS ONE
         // for(int i = 2; i <= n*k; i++){
         //    if((k * i) % n == 0){
         //       cout<<i<<endl;
         //       break;
         //    }
         // }
         int res = gcd(n, k);
         int p = n / res;
         cout<<p<<endl;
   }
   return 0;
}