#include<iostream>
using namespace std;

int getDifference(int num1, int num2, int base){
   int carry = 0;
   int power = 1;
   int returnValue = 0;
   while(num2 > 0){
      int rem1 = num1 % 10;
      int rem2 = num2 % 10;
      
      num1 /= 10;
      num2 /= 10;

      int digit = 0;
      rem2 = rem2 + carry;

      if(rem2 >= rem1){
         carry = 0;
         digit = rem2 - rem1;
      }else{
         carry = -1;
         digit = rem2 + base - rem1;
      }

      returnValue = returnValue + digit * power;
      power = power * 10;
   }

   return returnValue;
}

int main(){
   int num1, num2, base;

   cin>>num1>>num2;

   cout<<"Enter base: "<<endl;
   
   cin>>base;
   int d = getDifference(num1, num2, base);
   cout<<d;
   return 0;
}