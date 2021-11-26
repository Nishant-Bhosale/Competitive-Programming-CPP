#include<iostream>
using namespace std;

int main(){
   int a, b, num1 = 0, num2 = 0, ties = 0;

   cin>>a>>b;

   for(int i = 1; i <= 6; i++){
      if(abs(a - i) < abs(b - i)){
         num1++;
      }else if(abs(b - i) < abs(a - i)){
         num2++;
      }else{
         ties++;
      }
   }

   cout<<num1<<" "<<ties<<" "<<num2;

   return 0;
}