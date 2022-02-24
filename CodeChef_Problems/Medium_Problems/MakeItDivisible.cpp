#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;

      int rem[3] = {0};
      for(int i = 0; i < n; i++){
         int num;
         cin>>num;
         rem[num%3]++;
      }

      if((rem[1]*1 + rem[2]*2) % 3){
         cout<<"-1"<<endl;
      }else{
         //compute the minimum operations
         int temp = min(rem[1], rem[2]);
         int ans = 0;

         ans += temp;
         // the remaining numbers will have rem -> 1 or rem -> 2
         rem[1] -= temp;
         rem[2] -= temp;

         ans += 2 * (rem[1]/3 + rem[2]/3);
         cout<<ans<<endl;
      }
   }
   return 0;
}