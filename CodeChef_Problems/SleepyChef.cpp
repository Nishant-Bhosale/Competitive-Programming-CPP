#include<iostream>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      int n, k;

      cin>>n>>k;
      int cnt0 = 0;
      int mc = 0;

      for(int i = 0; i < n; i++){
         char ch;
         cin>>ch;
         if(ch == '0'){
            cnt0++;
         }else{
            cnt0 = 0;
         }
         if(cnt0 >= k){
            mc += 1;
            cnt0 = 0;
         }
      }

      cout<<mc<<endl;
   }
   return 0;
}