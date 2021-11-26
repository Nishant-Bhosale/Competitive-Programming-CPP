#include<bits/stdc++.h>
using namespace std;

int reverseNum(int num){
   int rem = 0, reverse = 0;

   while(num!=0){    
      rem=num%10;      
      reverse=reverse*10+rem;    
      num/=10;    
   }    
   return reverse;
}

int main(){
   int t, n;
   cin>>t;

   while(t--){
      int len = 0;
      cin>>n;

      if(n % 2 == 0){
         cout<<0<<endl;
      }else if(reverseNum(n) % 2 == 0){
         cout<<1<<endl;
      }else{
         while(n > 0){
            n/=10;
            len++;
         }
         if(len == 1){
            cout<<-1<<endl;
         }else{
            int c = 0;
            for(int i = 2; i < len - 1; i++){
               
            }
         }
      }
   }
   return 0;
}