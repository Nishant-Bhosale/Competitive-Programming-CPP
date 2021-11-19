#include<iostream>
using namespace std;

int main(){
   int number;

   cin>>number;

   if(number % 4 == 0 || number % 7 == 0 || number % 47 == 0 || number % 74 == 0 || number % 744 == 0){
      cout<<"YES";
      return 0;
   }

   while(number > 0){
      int digit = number % 10;
      if(digit != 4 && digit != 7){
         cout<<"NO";
         return 0;
      }
      number /= 10;
   }

   cout<<"YES";
   return 0;
}