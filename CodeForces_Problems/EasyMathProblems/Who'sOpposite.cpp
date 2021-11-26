#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int a, b, c, d;

      cin>>a>>b>>c;

      int totalPeeps = 2 * abs(a - b);

      if(a > totalPeeps || b > totalPeeps || c > totalPeeps){
         cout<<-1<<endl;
      }else{
         d = totalPeeps / 2 + c;

         if(d > totalPeeps){
            d = c - totalPeeps / 2;
         }

         cout<<d<<endl;
      }
   }

   return 0;
}