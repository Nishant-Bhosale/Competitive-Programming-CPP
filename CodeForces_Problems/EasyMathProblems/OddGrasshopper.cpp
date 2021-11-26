#include<iostream>
using namespace std;

int main(){
   int t;
   long long x, n;
   cin>>t;

   for(int i = 0; i < t; i++){
      cin>>x>>n;

      for(long long j = n - n%4 + 1; j <= n; j++){
         if(x % 2 == 0){
            x = x - j;
         }else{
            x = x + j;
         }
      }

      cout<<x<<endl;
   }
   return 0;
}