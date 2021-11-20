#include<iostream>
using namespace std;

int main(){
   int n, m, a, b, minVal = 9999;

   cin>>n>>m>>a>>b;

   for(int i = 1; i <= n; i++){
      if((n - i) % m == 0){
         if((i * a) + (b * m) < minVal){
            minVal = (i * a) + (b * m);
         }
      }else{
         if((((n - i) % m) + i) * a + (b * m) < minVal){
            minVal = (n % b) * a + (b * m);
         }
      }
   }  

   cout<<minVal;

   return 0;
}