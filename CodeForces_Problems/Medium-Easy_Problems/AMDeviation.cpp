#include<bits/stdc++.h>
using namespace std;

int main(){
   int t, n1, n2, n3;
   cin>>t;

   while(t--){
      cin>>n1>>n2>>n3;
      if((n1 + n3 - 2* n2) % 3 == 0){
         cout<<0<<endl;
      }else{
         cout<<1<<endl;
      }
   }
   return 0;
}