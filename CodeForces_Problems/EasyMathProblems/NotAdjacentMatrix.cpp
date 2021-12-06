#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;

      if(n == 1){
         cout<<1<<endl;
         continue;
      }else if(n == 2){
         cout<<-1<<endl;
         continue;
      }else {
         int k = 2;
         for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
              if(k > n*n){
                 k = 1;
              }
              cout<<k<<" ";
              k += 2;
            }
            cout<<"\n";
         }
      }
   }
   return 0;
}