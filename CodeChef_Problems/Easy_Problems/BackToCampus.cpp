#include<iostream>
using namespace std;
int main(){
   int t, n, k;

   cin>>t;

   for(int i = 0; i<t; i++){
      cin>>n>>k;

      if(n <= k){
         cout<<1<<endl;
      }else{
         int count = 0;
         while(n > 0){
            n = n - k;
            count++;
         }
         cout<<count<<endl;
      }
   }
   return 0;
}