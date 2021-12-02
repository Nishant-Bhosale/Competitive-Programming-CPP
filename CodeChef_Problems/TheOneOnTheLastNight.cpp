#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int k;
      int n;

      cin>>n;
      cin>>k;
      if(k == 0){
         int res = 1;
         while(n != 0){
            int dig = n % 10;
            res *= dig;
            n /= 10;
         }
         cout<<res<<endl;
      }else{
         int res = 1;
         while(n != 0){
            int digit = n % 10;
            if(digit == 0){
               digit += 2;
               k -= 2
            }
         }
      }
   }
   return 0;
}