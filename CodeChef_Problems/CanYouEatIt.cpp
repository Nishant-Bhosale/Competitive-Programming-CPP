#include<bits/stdc++.h>
using namespace std;

int main(){
   int t, n, k;
   cin>>t;
   for(int i = 0; i < t; i++){
      cin>>n>>k;

      if(n == 0){
         cout<<0<<endl;
      }else if(n % k == 0){
         cout<<n / k<<endl;
      }else{
         cout<<-1<<endl;
      }
   }
   return 0;
}