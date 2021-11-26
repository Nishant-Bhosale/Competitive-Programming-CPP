#include<iostream>
using namespace std;

int main(){
   int t, tc = 0, a, b;
   cin>>t;
   while(t--){
      cin>>a>>b;
      if(a == 1 || b == 1){
         cout<<1<<endl;
      }else if(a==0 || b == 0){
         cout<<0<<endl;
      }else if(a < 4){
         cout<<a<<endl;
      }else if(b < 4){
         cout<<b<<endl;
      }else{
         if((a + b) % 4 == 0){
            cout<<(a + b) / 4<<endl;
         }else{
            while(a > 1){
               a /= 4;
               tc++;
            }
            while(b > 1){
               b /= 4;
               tc++;
            }
            cout<<tc<<endl;
         }
      }
   }
   return 0;
}