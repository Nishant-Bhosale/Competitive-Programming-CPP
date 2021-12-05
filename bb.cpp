#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      int m, n;

      cin>>m>>n;

      if(m > n){
         string s = "";
         int cnt = 1;
         while(m != 0){
            m += "01";
            cnt++;
            m--;
         }
         m += "0";
         cout<<m<<endl;
         continue;
      }else if(m == n){

         continue;
      }else if(m < n){

         continue;
      }
   }

   return 0;
}

