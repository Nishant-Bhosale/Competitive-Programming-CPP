#include<iostream>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      int n, k;

      cin>>n>>k;

      if(n % k == 0){
         cout<<(n / k)<<endl;
      }else{
         for(int i = 2; i <= 150; i++){
            if((k * i) % n == 0){
               cout<<i<<endl;
               break;
            }
         }
      }
   }
   return 0;
}