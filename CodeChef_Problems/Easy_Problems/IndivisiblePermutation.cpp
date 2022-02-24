#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      int n;

      cin>>n;

      if(n == 2){
         cout<<2<<" "<<1<<endl;
      }else{
         cout<<1<<" ";
         for(int i = 3; i < n + 1; i++){
            cout<<i<<" ";
         }  
         cout<<2<<" "<<endl;
      }
   }
   return 0;
}