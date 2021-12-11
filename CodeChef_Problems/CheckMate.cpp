#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      int xk, yk, x1, y1, x2, y2;

      cin>>xk>>yk>>x1>>y1>>x2>>y2;

      string answer = "NO";

      if(!(xk == 1 || yk == 1 || xk == 8 || yk == 8)){
         answer = "NO";
      }else{
         if(xk == 1){
            if((x2 == 2 || x1 == 2) && (y1 != y2)){
               if(abs(y1 - yk) > 1 && abs(y2 - yk) > 1){
                  answer = "YES";
               }
            }
         }
         if(xk == 8){
            if((x2 == 7 || x1 == 7) && (y1 != y2)){
               if(abs(y1 - yk) > 1 && abs(y2 - yk) > 1){
                  answer = "YES";
               }
            }
         }
         if(yk == 1){
              if((y2 == 2 || y1 == 2) && (x1 != x2)){
               if(abs(x1 - xk) > 1 && abs(x2 - xk) > 1){
                  answer = "YES";
               }
            }
         }
         if(yk == 8){
            if((y2 == 7 || y1 == 7) && (x1 != x2)){
               if(abs(x1 - xk) > 1 && abs(x2 - xk) > 1){
                  answer = "YES";
               }
            }
         }
      }

      cout<<answer<<"\n";
   }   
   return 0;
}